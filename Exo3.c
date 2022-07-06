#include<stdio.h>
int main()
{
    int i,position,n,data[10];
    printf("Enter the size of the array n: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements of the array data[%d]: ",i);
        scanf("%d",&data[i]);
    }
    printf("\nEnter the position of the element that you want to delete: ");
    scanf("%d",&position);
    if(position>n || position<0)
    {
        printf("Error");
    }
    else
    {
        for(i=position-1;i<n;i++)
        {
            data[i]=data[i+1];
        }
        n--;
        printf("The array after deleting an element:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",data[i]);
        }

    }

return 0;
}
