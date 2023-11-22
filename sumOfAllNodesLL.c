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

//sum of all nodes//

int Sum(struct node *head){
  if(head==NULL){
    return 0;
  }
  return head->data +Sum(head->next);
}




int main(){

 struct node * head = NULL;
   head = AddNodeLL(head,111);
   AddNodeLL(head,120);
   AddNodeLL(head,1030);
   AddNodeLL(head,1020);
   AddNodeLL(head,1200);
   AddNodeLL(head,10220);
  PrintLL(head);
  printf("\nThe sum of the nodes are :::: %d\n",Sum(head));
  return 0;
}