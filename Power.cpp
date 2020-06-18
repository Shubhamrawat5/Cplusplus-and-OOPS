//To calculate power of an number by recursion

#include<iostream>
using namespace std;

//power is eve
int pow(int a,int n)
{
	int c;
	if(n==1) return a; //power is 1
	else { 
		c=pow(a,n/2);
		
		if(n%2==0) //power is even
		return(c*c);
		else                //power is odd
		return(a*c*c);
	}		
}

int main()
{
	unsigned int a,n;
	cout<<"Enter number and power:";
	cin>>a>>n;
	int ans=pow(a,n);
	cout<<endl<<"Ans = "<<ans;	
}
