#include<stdio.h>

int main(){
    int m,i,temp,a[100];
    printf("enter number of elements: ");
    scanf("%d",&m);
    printf("Enter elements in array:\n");
    for(i = 0;i<m;i++){
        scanf("%d",&a[i]);
    }
  int start = 0;
    int end = m - 1;
    while(start < end){
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    printf("Reversed array is:\n");
    for(i = 0;i<m;i++){
        printf("%d ",a[i]);

    }
    return 0;
}