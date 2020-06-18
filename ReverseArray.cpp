#include<iostream>
using namespace std;

int main()
{
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	
	//reversing with the help of swapping
	for(int i=0,j=n-1;i<=j;++i,--j)
	{
		int temp;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	
	//Printing reverse array
	for(int i=0;i<n;++i)	
	cout<<a[i];
	
}
