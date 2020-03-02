#include<stdio.h>
int main(){
    int i,arr[100], temp,min,n=10,j;
    printf("Enter 10 elements:");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++){
        min = i;
        for(j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
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
    printf("\n");
    printf("Min element is %d\n", arr[0]);
    printf("Max element is %d\n", arr[9]);
}

