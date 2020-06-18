//Union & Intersection of two sorted array with no repeated elements in any array

#include<iostream>
#include<vector>
using namespace std;

void Intersection(int a[],int b[],int m,int n)
{
	vector<int> in;
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a[i]==b[j]) {
			in.push_back(a[i]);
			++i;
			++j;
		}
		else if(a[i]<b[j]) {
			in.push_back(a[i]);
			++i;
		}
		else {
			in.push_back(b[j]);
			++j;
		}
	}

	//adding remaining elements
	while(i<m) {
		in.push_back(a[i]);
		++i;
	}
	while(j<n) {
		in.push_back(b[j]);
		++j;
	}
	
	//printing intersection
	cout<<"\nIntersection is:-\n";
	for(i=0;i<in.size();i++)
	cout<<in[i]<<" ";
}

void Union(int a[],int b[],int m,int n)
{
	vector<int> un;
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a[i]==b[j]) {
			un.push_back(a[i]);
			++i;
			++j; 
			}
		else if(a[i]<b[j]) ++i;
		else ++j;
	}
	
	//printing union
	cout<<"Union is:-\n";
	for(i=0;i<un.size();++i)
     cout<<un[i]<<" ";
}

int main()
{
	int a[]={1,2,3,4,5,6};
	int b[]={1,2,3,4};
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	Union(a,b,m,n);
	Intersection(a,b,m,n);
}
