#include <stdio.h>

#define MAX 100

int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;

// push
void push(int s[], int *top, int x) {
    s[++(*top)] = x;
}

int pop(int s[], int *top) {
    return s[(*top)--];
}

int isEmpty(int top) {
    return top == -1;
}

void enqueue(int x) {
    push(s1, &top1, x);
}

int dequeue() {
    if (isEmpty(top2)) {
        while (!isEmpty(top1)) {
            push(s2, &top2, pop(s1, &top1));
        }
    }
    return pop(s2, &top2);
}