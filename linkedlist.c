#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;stdbool.h&gt;

struct test_struct
{
    int val;
    struct test_struct *addr;
};

struct test_struct *head = NULL;
struct test_struct *curr = NULL;

struct test_struct* create_list(int val){
    struct test_struct *ptr = (struct test_struct*)malloc(sizeof(struct test_struct));
    if(NULL == ptr){
        printf("Cannot create a node");
        return NULL;
    }
    
    ptr-&gt;val = val;
    ptr-&gt;addr = NULL;
    
    head = curr = ptr;
    return ptr;
}

struct test_struct* add_to_list(int val,bool before_head){
    struct test_struct *ptr = (struct  test_struct*)malloc(sizeof(struct test_struct));
    if(NULL == head){
        return(create_list(val));
    }
    
    if(!before_head) {
        ptr-&gt;val = val;
        curr-&gt;addr = ptr;
        curr = ptr;
        return ptr;
    }
    else{
        ptr-&gt;val = val;
        ptr-&gt;addr = head;
        head = ptr;
        return ptr;
    }
}

void print_list(){
    
    struct test_struct *ptr = head;
    printf("\nThe values of the list are\n");
    while(ptr){
        printf("\t%d\t",ptr-&gt;val);
        ptr = ptr-&gt;addr;
    }
    
}

void main(){
    struct test_struct *ptr = NULL;
    add_to_list(1,false);
    add_to_list(2,false);
    add_to_list(3,false);
    add_to_list(8,true);
    print_list();
}