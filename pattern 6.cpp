
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,i,j,k,l,m;
    cin>>N;
    for( i=N;i>=1;i--)
    {
        for(j=N-i;j>=1;j--)
          {
              cout<<" ";
          }
          
         
         for( k=1;k<=2*i-1;k++)
         {
             cout<<"*";
         }
         cout<<endl;
         
          
    }
  
    return 0;
}
