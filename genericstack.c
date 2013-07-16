#ifndef GENERICSTACK
#define GENERICSTACK 1
#include<stdio.h>
#include<stdlib.h>
struct type{
  T_UNKNOWN, T_INT, T_CHAR, T_STRING
};
typedef struct type TYPE;
struct generic_obj{
  char *Id;
  void *Value;
  TYPE Type;
  struct generic_obj *Next;
};
typedef struct generic_obj GenericObject;
struct generic_stack_node{
  char *Id;
  GenericObject *Object;
  struct generic_stack_node *Next;
};
typedef struct generic_stack_node GenericStackNode;

GenericObject *create_generic_object(void *val, char* id, TYPE type){
  GenericObject *new_obj = (GenericObject*) malloc(sizeof(GenericObject));
  new_obj->Id = id;
  new_obj->Value = val;
  new_obj->Next = NULL;
  new_obj->Type = type;
  return new_obj;
}
GenericObject *create_default_generic_object(void *val){
  return create_generic_object(val, "not-defined-object", T_UNKNOWN);
}
GenericStackNode *create_generic_stack_node(GenericObject *obj, char *id){
  GenericStackNode *new_node = (GenericObjet *) malloc(sizeof(GenericStackNode));
  new_node->Id = id;
  new_node->Object = obj;
  new_node->Next = NULL;

  return new_node;
}
GenericStackNode * create_default_generic_stack_node(GenericObject *obj){
  return create_generic_stack_node(obj, "not-defined-node");
}
GenericStackNode * create_generic_stack_node_from_value(void *Val){
  char *id = "no-id-yet"; //TODO: implement id generation
  char *node_id = "no-id-yet";//TODO: implement id generation
  TYPE type = T_UNKNOWN;
  
  return create_generic_stack_node                              \
              (                                                 \
                create_generic_object(Val, id, type),           \
                node_id                                         \
              );

  
}

GenericObject * append_object_by_values(void *after, void *it){//append `it` after `after`
  GenericObject *After = create_default_generic_object(after);
  GenericObject *It = create_default_generic_object(it);
  After->Next = It;
  return After;
}
GenericObject * prepend_object_by_values(void *before, void *it){//append `it` before `before`
  GenericObject *Before = create_default_generic_object(before);
  GenericObject *It = create_default_generic_object(it);
  It->Next = Before;
  return It;
}
GenericObject *append_object(GenericObject *after, GenericObject *it){
  after->Next = it;
  return after;
}
GenericObject * prepend_object(GenericObject *before, GenericObject *it){
  it->Next = before;
  return it;
}
GenericStackNode * append_node_by_objects(GenericObject * after, GenericObject *it){
  GenericStackNode *After = create_default_generic_stack_node(after);
  GenericStackNode *It = create_default_generic_stack_node(it);
  After->Next = It;
  return After;
}
GenericStackNode * prepend_node_by_objects(GenericObject *before, GenericObject *it){
  GenericStackNode *Before = create_default_generic_stack_node(before);
  GenericStackNode *It = create_default_generic_stack_node(it);
  It->Next->Before;
  return It;
}
GenericStackNode * append_node(GenericStackNode *after, GenericStackNode *it){
  after->Next = it;
  return after;
}
GenericStackNode * prepend_node(GenricStackNode *before, GenericStackNode *it){
  it->Next = before;
  return it;
}
#endif