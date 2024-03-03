#include<stdio.h>
int main()
{
    int A[]={5,7,9,12,15,20,24,27,33,40,50,65,72};
    int data=33;
    int l,r,mid;
    l=0;
    r=12;

    while(l<=r)
    {
        mid=(l+r)/2;
        if(A[mid]==data)
        {
           printf("The searching data is %d index\n",mid);
           return 0;
        }
        else if(A[mid]<data)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    printf("Data is not found");
    return 0;
}
