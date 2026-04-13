#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// push function
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}

// pop function
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    // push
    for (int i = 0; i < n; i++) {
        push(arr[i]);
    }

    // pop back (reverse array)
    for (int i = 0; i < n; i++) {
        arr[i] = pop();
    }

    // print result
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}