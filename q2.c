#include<stdio.h>

int main(){
    int n,i,pos,a[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("Enter elements to delete(0 to %d): ",n-1);
        scanf("%d",&pos);
        if(pos<0 || pos> 0){
            printf("Invalid");  
            return 0;
        }
        for(i = pos; i< n-1; i++){
            a[i] = a[i+1];
        }
        n--;
        printf("array after deletion:\n");
        for(i = 0;i<n;i++){
            printf("%d ",a[i]);
        }
        return 0;
    }
    
}