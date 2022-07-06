#include<stdio.h>
int main()
{
    int n,i,j,B,A;
    printf("Enter the size of the array n: ");
    scanf("%d",&n);
    int data[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the elements of the array data[%d]: ",i);
        scanf("%d",&data[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(data[i]>data[j])
            {
                A=data[i];
                data[i]=data[j];
                data[j]=A;
            }
        }
    }
    printf("\nThe Ascending order of this array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(data[i]<data[j])
            {
                B=data[i];
                data[i]=data[j];
                data[j]=B;
            }
        }
    }
    printf("\nThe Descending order of this array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }

return 0;
}
