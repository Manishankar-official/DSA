#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node * next;
};



//print LL//
void PrintLL(struct node* head){
  if(head == NULL){
    return;
  }
  printf("\n%d\n",head->data);
  PrintLL(head->next);
}

//Add node to a LL

struct node *AddNodeLL(struct node *head,int data){
if(head ==NULL){
  head = malloc(sizeof(struct node));
  head->next = NULL;
  head->data = data;
  return head;
}
head->next = AddNodeLL(head->next,data);
return head;
}

//Swap Two adj nodes of the LL recursively//
struct node * SwapTwoAdjNodes(struct node *head){
  struct node * temp = head->next;
  if(temp->next==NULL){
    head->next = temp->next;
    temp->next = head;
    return temp;
  }
  head->next = SwapTwoAdjNodes(temp->next);
  temp->next = head;
  return temp; 
}

//reverse LL recursively

struct node *ReverseLL(struct node *head){
  if(head == NULL||head->next==NULL){
    return head;
  }
  struct node* n = ReverseLL(head->next);
  head->next->next = head;
  head->next =NULL;
  return n;
}

int main(){
  struct node * head = NULL;
  for(int i=0;i<10;i++){
    head = AddNodeLL(head,(i+1));
  }
  printf("\nBefore Reversing ::::\n");
  PrintLL(head);
  printf("\nAfter Reversing ::::\n");
  head = ReverseLL(head);
  PrintLL(head);
  return 0;
}