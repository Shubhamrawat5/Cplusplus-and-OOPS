//Move the negative numbers to one side of array
#include<iostream>
using namespace std;

int main()
{
	int a[]={-1,-3,3,-4,21,-7,91,-9,75};
	int n=sizeof(a)/sizeof(a[0]);
	int i,re=0,temp;
	for(i=0;i<n;++i)
	{
		if(a[i]<0) {
		temp=a[re];
		a[re]=a[i];
		a[i]=temp;
		++re;
		}
	}
	
	//printing answer
	for(i=0;i<n;i++) cout<<a[i]<<" ";
}
