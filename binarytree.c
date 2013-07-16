#ifndef BINARYTREE
#define BINARYTREE 1
#include<stdio.h>
#include<stdlib.h>

struct int_tree{
  int Value;
  struct int_tree * Left;
  struct int_tree * Right;
};
typedef struct int_tree ITreeNode;
struct string_tree{
  char *Value;
  struct string_tree * Left;
  struct string_tree * Right;
};
typedef struct string_tree STreeNode;

STreeNode * create_stree_node(char* value){
  STreeNode * new_node = (STreeNode*)malloc(sizeof(STreeNode));
  new_node->Value = value;
  new_node->Left = NULL;
  new_node->Right = NULL;

  return new_node;
}
ITreeNode *create_itree_node(int value){
  ITreeNode * new_node = (ITreeNode *)malloc(sizeof(ITreeNode));
  new_node->Value = value;
  new_node->Left = NULL;
  new_node->Right = NULL;

  return new_node;
}
#endif