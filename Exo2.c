#include<stdio.h>
#include<math.h>

int main()
{
    int n,x,i,a[10],sum=0,A;
    printf("Enter the degree of polynomial: \n");
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        printf("Enter the cofficient a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter x: \n");
    scanf("%d",&x);
    for(i=0;i<n+1;i++)
    {
        sum+=a[i]*pow(x,i);
    }
    printf("the sum is %d",sum);
return 0;
}

