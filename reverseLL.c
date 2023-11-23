#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node* next;
};

//add node to a LL//
struct node* AddLLnode(struct node *head,int data){
  if(head == NULL){
    head = malloc(sizeof(*head));
    head->data=data;
    head->next = NULL;
    return head;
  }
  head->next = AddLLnode(head->next,data);
  return head;
}

//print LL//
void PrintLL(struct node*head){
if(head == NULL){
  return;
}
printf("\n%d\n",head->data);
PrintLL(head->next);
}

//Reverse LL//
struct node* ReverseLL(struct node*head){
  if(head == NULL||head->next == NULL){
    return head;
  }
  struct node* n = ReverseLL(head->next);
  head->next->next = head;
  head->next = NULL;
  return n;

}

int main(){
struct node * head = NULL;
head = AddLLnode(head,10);
head = AddLLnode(head,20);
head = AddLLnode(head,30);
head = AddLLnode(head,40);
printf("\nMy LL is :::: \n");
PrintLL(head);
printf("\nMy reversed LL is :::: \n");
head = ReverseLL(head);
PrintLL(head);
  return 0 ;
}