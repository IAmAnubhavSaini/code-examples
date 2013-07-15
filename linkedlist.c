#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct test_struct
{
  int val;
  struct test_struct *next;
};
typedef struct test_struct TestStruct; //gives a bit of OOP feel

TestStruct *head = NULL;
TestStruct *curr = NULL;

TestStruct* create_list(int val){
  TestStruct *ptr = (TestStruct*)malloc(sizeof(TestStruct));
  if(ptr == NULL){
    printf("\n*Cannot create a node.*\n");
    return NULL;
  }

  ptr->val = val;
  ptr->next = NULL;

  head = curr = ptr;
  return ptr;
}

TestStruct* add_to_list(int val, bool before_head){
  TestStruct *newTS = (TestStruct*)malloc(sizeof(TestStruct));
  if(head== NULL){
    return(create_list(val));
  }

  if(before_head) {
    newTS->val = val;
    newTS->next = head;
    head = newTS;
    return head;//try returning head so that further manipulation can start from right there.
  }
  else{
    newTS->val = val;
    newTS->next = NULL;
    curr->next = newTS;
    curr = newTS;
    return curr;//try returning current so that further manipulation can start from right there.
  }
}

void print_list(){

  TestStruct *ptr = head;
  printf("\nThe values of the list are\n");
  while(ptr){
    printf("\t%d\t",ptr->val);
    ptr = ptr->next;
  }

}

void main(){
  TestStruct *ptr = NULL;
  add_to_list(1,false);
  add_to_list(2,false);
  add_to_list(3,false);
  add_to_list(8,true);
  print_list();
}