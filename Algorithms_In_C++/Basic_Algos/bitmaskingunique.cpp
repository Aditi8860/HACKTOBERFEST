#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int xoro=0;
	int last[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		xoro = arr[i]^xoro;
		last[i] = arr[i]&1;
	}
	cout<<xoro;
	cout<<endl;
	for(int i=0;i<n;++i)
	{
		cout<<last[i];
	}
}
