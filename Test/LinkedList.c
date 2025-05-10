//
// Created by User on 3/15/2025.
//
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

// Function to print the linked list
void printList(struct Node *head) {
  struct Node *temp = head;
  printf("Linked List: ");
  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

// Function to add a new node at the end of the linked list
void addNode(struct Node **head, int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (newNode == NULL) {
    printf("Memory allocation failed\n");
    return;
  }

  newNode->data = data;
  newNode->next = NULL;

  if (*head == NULL) {
    // If the list is empty, make the new node the head
    *head = newNode;
    return;
  }

  // Otherwise, find the last node and append the new node
  struct Node *temp = *head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
}

int main() {
  struct Node *head = NULL;
  struct Node *newnode;

  // Allocate memory for a new node
  newnode = (struct Node *)malloc(sizeof(struct Node));
  if (newnode == NULL) {
    printf("Memory allocation failed\n");
    return 1; // Exit if malloc fails
  }

  // Get user input
  printf("Enter data: ");
  scanf("%d", &newnode->data);

  // Initialize the new node
  newnode->next = NULL;

  // Assign it as head since it's the first node
  head = newnode;

  addNode(&head, 1);
  addNode(&head, 2);
  addNode(&head, 3);
  addNode(&head, 4);
  addNode(&head, 5);
  // Print the linked list
  printList(head);

  // Free allocated memory
  free(head);

  return 0;
}

