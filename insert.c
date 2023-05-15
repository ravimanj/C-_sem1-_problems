#include<stdio.h>
int main()
{
    int n,pos,num;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter elements to be inserted in array: ");
    scanf("%d",&num);
    printf("Enter position of elements to be inserted: ");
    scanf("%d",&pos);
    for(int i=n-1;i>=pos-1;i--)
    {
        A[i+1]=A[i];
    }
    A[pos-1]=num;
    
    printf("The array after insertion of %d is: ",num);
    for(int i=0;i<n+1;i++)
     printf("%d\t",A[i]);
    return 0;
}         