#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,N,j,sum=0;
    cin>>N;
    for(i=1;i<N;i++)
    {
        if(i%3==0 || i%5==0)
           sum+=i;
    }
    cout<<"the sum is :"<<sum<<endl;

}
