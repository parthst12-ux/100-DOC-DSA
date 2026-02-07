#include<stdio.h>

int main(){
     int a[50],n,i,item;
     printf("Enter number of elements: ");
     scanf("%d",&n);
     printf("Enter array elements:\n");
     for(i = 0 ; i<n ; i++){
          scanf("%d",&a[i]);
     }
     printf("Enter element to search: ");
     scanf("%d",&item);
     for(i = n- 1; i>=0; i--){
          a[i+1] = a[i];
         
     }
      a[0] = item;
          n++;
     printf("Array after inserting element at the beginning:\n");
     for(i = 0 ; i<n ; i++){
          printf("%d ",a[i]);      
          return 0;
}
}