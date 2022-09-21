#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int n1,c=0,j;
        scanf("%d",&n1);
        for(j=1;j<n1;j++)
        {
            
        if(n1%j==0 && (n1/j)==j)
        {
            c++;
            break;
        }
        }
        if(c==0)
        {
            printf("False
");
        }
        else
        {
            printf("True
");
        }
        
    }
}