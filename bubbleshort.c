#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter number--> ");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++ )
    {
        printf("Enter elements--> ");
        scanf("%d",&arr[i]);
    }
    int temp;
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}