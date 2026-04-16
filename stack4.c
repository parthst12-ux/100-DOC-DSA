#include <stdio.h>

#define MAX 100

int q1[MAX], q2[MAX];
int f1 = -1, r1 = -1;
int f2 = -1, r2 = -1;

void enqueue(int q[], int *f, int *r, int x) {
    if (*f == -1) *f = 0;
    q[++(*r)] = x;
}

int dequeue(int q[], int *f, int *r) {
    int val = q[*f];
    (*f)++;
    if (*f > *r) *f = *r = -1;
    return val;
}

void push(int x) {
    enqueue(q2, &f2, &r2, x);

    while (f1 != -1) {
        enqueue(q2, &f2, &r2, dequeue(q1, &f1, &r1));
    }

    // copy q2 to q1
    for (int i = 0; i <= r2; i++) {
        q1[i] = q2[i];
    }

    f1 = f2;
    r1 = r2;
    f2 = r2 = -1;
}

// POP
int pop() {
    return dequeue(q1, &f1, &r1);
}

// MAIN
int main() {
    push(1);
    push(2);
    push(3);

    printf("%d\n", pop()); // 3
    printf("%d\n", pop()); // 2

    return 0;
}