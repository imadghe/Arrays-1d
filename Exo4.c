#include<stdio.h>
int main()
{
    int n,i,j,score[11]={0},p;

    printf("How many person they want to do the survey? ");
    scanf("%d",&n);
    float data[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the elements of the array data[%d]: ",i);
        scanf("%f",&data[i]);
        while(data[i]<1 || data[i]>10)
        {
            printf("\nEnter again: \n");
            scanf("%0.2f",&data[i]);
        }
        p=data[i];
        score[p]+=1;
    }
    printf("\nRate \t Number of votes\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",i+1);
        for(j=0;j<score[i+1];j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
return 0;
}
