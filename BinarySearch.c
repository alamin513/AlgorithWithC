#include<stdio.h>
int BinarySearch(int A[],int n,int data){
    int start=0;
    int mid;
    int end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(A[mid]==data){
            return mid;
        }
        else if(A[mid]<data){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}
int main(){
    int A[]={ 3, 4, 1, 7, 5, 8, 11, 42, 3, 13 };
    int data,n=sizeof(A)/sizeof(A[0]);
    printf("Enter the searching element: ");
    scanf("%d",&data);
    int index=BinarySearch(A,n,data);
    if(index>-1){
        printf("Element found at %d index",index);
    }
    else{
        printf("Element not found");
    }
    return 0;

}
