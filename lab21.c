// Q.Insert a node at the beginning of the list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertBeginning(struct Node* head, int value) {
    struct Node* newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    newNode->data = value;     // put data
    newNode->next = head;      // link new node to old head
    head = newNode;            // make new node as head

    return head;
}


void display(struct Node* head) {
    struct Node* temp = head;

    if(head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter value to insert at beginning: ");
        scanf("%d", &value);
        head = insertBeginning(head, value);
    }

    display(head);

    return 0;
}