#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct link_node {
    int val;
    struct link_node *next;
};
typedef struct link_node Node; //gives a bit of OOP feel

Node *head = NULL;
Node *curr = NULL;

Node *create_list(int val);

Node *add_to_list(int val, bool before_head);

void print_list();

bool search_list(int val);

bool delete_first_value_matching_node(int val);

bool delete_all_value_matching_nodes(int val);

/*TESTS*/
void TEST_setup1(void);

void TEST_search1(void);

void TEST_delete1(void);

void TEST_delete2(void);

Node *create_list(int val) {
    Node *ptr = (Node *) malloc(sizeof(Node));
    if (ptr == NULL) {
        printf("\n*Cannot create a node.*\n");
        return NULL;
    }

    ptr->val = val;
    ptr->next = NULL;

    head = curr = ptr;
    return ptr;
}

Node *add_to_list(int val, bool before_head) {
    Node *newTS = (Node *) malloc(sizeof(Node));
    if (head == NULL) {
        return (create_list(val));
    }

    if (before_head) {
        newTS->val = val;
        newTS->next = head;
        head = newTS;
        return head;//try returning head so that further manipulation can start from right there.
    } else {
        newTS->val = val;
        newTS->next = NULL;
        curr->next = newTS;
        curr = newTS;
        return curr;//try returning current so that further manipulation can start from right there.
    }
}

void print_list() {

    Node *ptr = head;
    if (ptr != NULL) {
        printf("\nThe values of the list are\n");
        while (ptr) {
            printf("[%d @ %p]->", ptr->val, ptr);
            ptr = ptr->next;
        }
        printf("[NULL]\n");
    } else {
        printf("\nEmpty list.");
    }
}

bool search_list(int val) {
    Node *start = head;
    bool isFound = false;
    while (start != NULL) {
        if (start->val == val) {
            isFound = true;
            break;
        }
        start = start->next;
    }
    return isFound;
}

bool delete_first_value_matching_node(int val) {
    Node *prev = head;
    Node *curr = NULL;
    bool isDeleted = false;
    if (head->next != NULL) {
        curr = head->next;
        printf("\ndebug: at least two nodes exists.");
        while (curr != NULL && !isDeleted) {
            if (curr->val == val) {
                prev->next = curr->next;
                isDeleted = true;
                //free curr here
            }
            prev = curr;
            curr = curr->next;
        }
    } else {
        printf("\ndebug: only one node exists.");
        if (prev->val == val) {
            isDeleted = true;
            //free prev
            prev = NULL;
        }
    }
    return isDeleted;
}

bool delete_all_value_matching_nodes(int val) {
    Node *prev = head;
    Node *curr = NULL;
    bool isDeleted = false;
    if (head->next != NULL) {
        curr = head->next;
        while (curr != NULL) {
            if (curr->val == val) {
                isDeleted = true;//at least deleted once.
                prev->next = curr->next;
                //free curr
            }
            prev = curr;
            curr = curr->next;
        }
    } else {//there is only one node
        if (prev->val == val) {
            isDeleted = true;
            prev = NULL;
        }
    }
    return isDeleted;
}

void main() {
    TEST_setup1();
    TEST_search1();
    TEST_delete1();
    TEST_setup1();
    TEST_delete2();
    //parting newline
    puts("");
}


/*tests */
void TEST_search1() {
    if (search_list(2)) {
        printf("\nFound 2 in list.");
    } else {
        printf("\nNot found 2 in list.");
    }
    if (search_list(4)) {
        printf("\nFound 4 in list.");
    } else {
        printf("\nNot found 4 in list.");
    }
}

void TEST_delete1() {
    if (delete_first_value_matching_node(2)) {
        printf("\nDeleted first 2.");
        print_list();
    }
    if (delete_first_value_matching_node(4)) {
        printf("\nDeleted first 4.");
        print_list();
    } else {
        printf("\n4 Not found.");
        print_list();
    }
    if (delete_first_value_matching_node(1)) {
        printf("\nDeleted first 1.");
        print_list();
    } else {
        printf("\n1 Not found.");
        print_list();
    }
}

void TEST_setup1() {
    add_to_list(1, false);
    add_to_list(2, false);
    add_to_list(3, false);
    add_to_list(8, true);
    add_to_list(2, false);
    print_list();
}

void TEST_delete2() {
    if (delete_all_value_matching_nodes(2)) {
        printf("\nAll 2s deleted from list.");
    } else {
        printf("\n2 not found.");
    }
    print_list();
}