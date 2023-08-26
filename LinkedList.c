#include <stdio.h>
#include <stdlib.h>

struct Node {
  int val;
  struct Node *next;
};

void insertAtEnd(struct Node *head, struct Node *new) {
  struct Node *curr = head;
  while (curr->next != NULL) {
    curr = curr->next;
    printf("%d", curr->val);
  }
  curr->next = new;
}

void insertAtStart(struct Node *head, struct Node *new) {
  new->next = head;
}

struct Node *reverse(struct Node *head) {
  struct Node *prev;
  prev = NULL;
  struct Node *curr;
  curr = head;

  while(curr != NULL) {
    struct Node *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;

}
void printLinkedList(struct Node *head) {
  struct Node *curr = head;
  while(curr != NULL) {
    printf("Current Node: %d\n", curr->val);
    curr = curr->next;
  }
}
int main() {
  struct Node head;
  head.val = 69;

  struct Node next;
  next.val = 96;
  head.next = &next;
  
  printf("%d %d", head.val, next.val);
  
  struct Node *curr = &next;
  for(int i = 0; i < 100; i++) {
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->val = i;

    curr->next = new;
    curr = new;

    printf("meow %d", curr->val); 
  }

  struct Node new;
  new.val = 626;

  insertAtEnd(&next, &new);
  
  struct Node *iter = &next;
  printLinkedList(&next);
  printf("%d", reverse(&next)->next->val);
  return 0;

}
