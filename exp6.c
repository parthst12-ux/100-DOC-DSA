#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int isCircular(struct Node* head)
{
    struct Node* temp;

    if(head == NULL)
        return 0;

    temp = head->next;

    while(temp != NULL && temp != head)
        temp = temp->next;

    if(temp == head)
        return 1;
    else
        return 0;
}

int main()
{
    struct Node *head, *second, *third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = head;

    if(isCircular(head))
        printf("Linked List is Circular");
    else
        printf("Linked List is Not Circular");

    return 0;
}