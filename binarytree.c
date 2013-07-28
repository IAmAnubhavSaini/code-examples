#ifndef BINARYTREE
#define BINARYTREE
#include<stdio.h>
#include<stdlib.h>

/* Positions */
enum POS{
  Unset
  , Left
  , Right
  , Root
};
/* Integer tree */
typedef struct int_tree ITN;
struct int_tree{
  int Value;
  ITN * Left;
  ITN * Right;
  POS Pos;
};
ITN * ITN_Create(int value){
  ITN * new_node = (ITN *)malloc(sizeof(ITN));
  new_node->Value = value;
  new_node->Left = NULL;
  new_node->Right = NULL;
  new_node->Pos = Unset;
  return new_node;
}
ITN * ITN_Append(ITN * child, ITN * parent, POS pos){
  if(parent == NULL) return child;
  if(child == NULL) {
    child = ITN_Create(0);
  }
  if(pos == Left){
    parent -> Left = child;
  }
  if(pos == Right){
    parent -> Right = child;
  }
  return parent;
}
void ITN_Print_Infix(ITN *root){
  if(root == NULL){
    return;
  }
  if( root->Left != NULL){
    ITN_Print_Infix(root -> Left);
  }
  //if root->Left is NULL, this is the leftmost node, print.
  printf(" %d ", root->Value);
  if( root->Right != NULL ){
    ITN_Print_Infix(root->Right);
  }
}
/* String tree */
typedef struct string_tree STN;
struct string_tree{
  char *Value;
  STN * Left;
  STN * Right;
  POS Pos;
};

STN * STN_Create(char* value){
  STN * new_node = (STN*)malloc(sizeof(STN));
  new_node->Value = value;
  new_node->Left = NULL;
  new_node->Right = NULL;
  new_node->Pos = Unset;
  return new_node;
}

#endif