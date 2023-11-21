#include<stdio.h>
#include<stdlib.h>
#

struct node{
int data;
struct node * next;
};

//printing a node//
void PrintLL(struct node *head){
  while(head!=NULL){
    printf("\n%d\n",head->data);
    head = head->next;
  }
}
//creating a node
struct node * CreateANode(struct node * head,int data){
head = (struct node *)malloc(sizeof(*head));
head ->data = data;
head->next = NULL;

return head;
}

struct node * AddLLNode(struct node *head,int data){
  if(head->next ==NULL){
    head->next = CreateANode(head->next,data);
    return head;
  }
  head->next = AddLLNode(head->next,data);
  return head;
}
int main(){

  struct node * head = CreateANode(head,155);
  //  PrintLL(head);
  AddLLNode(head,99);
  AddLLNode(head,999);
  AddLLNode(head,9100);
  AddLLNode(head,1);
  AddLLNode(head,1929);
  PrintLL(head);
  return 0;
}