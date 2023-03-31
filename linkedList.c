#include <stdio.h>
#include <stdlib.h>

struct Node{
  int val;
  struct Node *next;
  struct Node *prev;
};

int main() {
  struct Node* head = NULL; 
  add(&head, 6);
  add(&head, 9); 
  printinglist(head);

}

void add(struct Node** head, int new_val){
  struct Node* new = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head;

  new->val=new_val;
  new->next=NULL;

  if(*head == NULL) {
    new->prev=NULL;
    *head=new;
    return;
  }

  while (last->next != NULL){
    last=last->next;
  }
  last->next=new;
  new->prev=last; 
}

void printinglist(struct Node* node){
  struct Node* last;
  printf("\nTraversal in forward direction \n");
  while(node != NULL) {
    printf("%d ", node->val);
    node = node->next;
  }

  printf("\nTraversalf in reverse direction \n");
  while(last != NULL){
    printf("%d ", last->val);
    last = last->prev;
  }
}

void isempty(struct Node** head_ref){
  if((*head_ref) == NULL){
    printf("Nothing here!...\n"); 
  }
}

