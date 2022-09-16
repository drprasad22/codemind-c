#include<stdio.h>
int main()
{
    char str[101],i,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')c++;
    }
    printf("%d",c+1);
}