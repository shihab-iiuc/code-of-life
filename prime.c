#include<stdio.h>
int main()
{
    int N,i,a=0;
    scanf("%d",&N);
    for(i=2;i<N;i++)
    {
        if(N%i==0)
        {
           a++;

        }
    }
    if(a==0 )
        printf("Prime");
    else
        printf("Not Prime");
return 0;
}
