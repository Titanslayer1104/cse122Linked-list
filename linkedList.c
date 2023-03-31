#include <stdio.h>
#include <stdlib.h>

struct Node{
  int val;
  struct Node *next;
  struct Node *prev;
};

int main() {
  struct Node* head = NULL; 
  push(&head, 6);
  isempty(&head);
  printinglist(head); 
}

void push(struct Node** head_ref, int new_val){
  struct Node* new = (struct Node*)malloc(sizeof(struct Node));

  new->val = new_val;

  new->next = (*head_ref);
  new->prev = NULL;

  if((*head_ref) != NULL){
    (*head_ref)->prev = new;
  }
  (*head_ref) = new;
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

