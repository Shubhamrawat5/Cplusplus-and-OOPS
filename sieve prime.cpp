#include<iostream>
#include<string.h>
using namespace std;

//marked prime as 1 and nonprime as 0
void sieve(bool prime[],int n)
{
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=n;++i)
    {
        if(prime[i]==true)
        for(int j=i*2;j<=n;j=j+i)
            prime[j]=false;
    }

    int count=0;
    for(int i=0;i<=n;++i)
    {
        cout<<count<<"="<<prime[i]<<endl;
        ++count;
    }
}
 
int main()
{
    int p,q,n;
    n=81;
    bool prime[n+1];
    memset(prime,1,sizeof(prime));
    sieve(prime,n);
    return 0;
}