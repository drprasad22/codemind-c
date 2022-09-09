#include<stdio.h>
void fun(int [], int);
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a, n);
}
void fun(int x[], int n)
{
    int s=0,tc=0;
    for(int i=0;i<n;i++)
    {
        int c=1, vis = 0;
        for(int  k=0;k<i;k++)
        {
            if(x[i]==x[k])
            {
                vis = 1;
                break;
            }
        }
        for(int j=i+1;j<n;j++)
        {
                if(x[i]==x[j])
                {
                    c++;
                }
        }
        if(vis == 0 && c==x[i])
        {
            s=s+x[i];
            tc++;
        }
    }
    tc ? printf("%.2f", s*1.0/tc) : printf("-1");
}