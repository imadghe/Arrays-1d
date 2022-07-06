#include<stdio.h>
int main()
{
    int n,max,min,nbr[10],i;
    float avg,sum=0;
    printf("Enter the size of the array n: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements of the array nbr[%d]: \n",i);
        scanf("%d",&nbr[i]);
    }
    max=min=nbr[0];
    for(i=0;i<n;i++)
    {
        if(min>nbr[i])
        {
            min=nbr[i];
        }
        if(max<nbr[i])
        {
            max=nbr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        sum+=nbr[i];
    }
    avg=sum/n;
    printf("max is %d\n",max);
    printf("min is %d\n",min);
    printf("The avg is %f ",avg);
return 0;
}
