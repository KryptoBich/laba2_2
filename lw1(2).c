#include<stdio.h>
int main(){
    int i,arr[100], temp,min,n,j;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter the %d elements:", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++){
        min = i;
        for(j = i+1;j<n;j++){
            if(arr[j]>arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i]= arr[min];
        arr[min] = temp;
    }
    printf("asending order:");
    for(i=0;i<n;i++){
    printf("%d ",arr[i]);
    
    }
}
