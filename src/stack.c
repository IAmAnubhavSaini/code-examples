/*
Authors:
Balasundaramk,
github.com/IAmAnubhavSaini
*/

#include<stdio.h>
#include<stdlib.h>

#define STACK_MAX_ITEM_COUNT 10
#define STACK_INDEX_CEIL STACK_MAX_ITEM_COUNT-1

int top = -1, stack[STACK_MAX_ITEM_COUNT];

int push(int);

int pop();

int main() {
    int choice, input_element, i;
    while (1) {
        printf("\nEnter your choice, (1:push, 2:pop):> ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                //Stack push
                printf("\nEnter the element to be pushed:> ");
                scanf("%d", &input_element);
                if (!push(input_element)) {
                    printf("\nThe element has been pushed to stack.");
                    for (i = 0; i <= top; i++)
                        printf("[%d]<-", stack[i]);
                    printf("[top]\n");
                } else {
                    printf("There are some issues in pushing the element to stack");
                }
                break;
            case 2://pop
                printf("The element %d has been popped out of stack\n", pop());
                printf("The remaining elements of stack are\n");
                for (i = 0; i <= top; i++) {
                    printf("[%d]<-", stack[i]);
                    printf("[top]\n");
                }

                break;
            case 3:
                //status of stack
                break;
        }
    }
    return 0;
}


int push(int element) {
    if (top >= STACK_INDEX_CEIL) {
        printf("\nerror: Stack Overflow.\nAborting.\n");
        exit(0);
    }
    stack[++top] = element;
    return 0;
}

int pop() {
    if (top < 0) {
        printf("\nerror: Stack Underflow.\nAborting.\n");
        exit(0);
    }
    return stack[top--];
}
