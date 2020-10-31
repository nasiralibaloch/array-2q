#include<iostream>
using namespace std;
int main()
{
	int arr[8],n,i;
	
	int check=0;
	
	cout<<"enter the number of elements in an array"<<endl;
	
	for(i=0;i<8;i++)
	{
		cout<<"enter the "<<i+1<<"elements array "<<endl;
		
		cin>>arr[i];
	}
	cout<<"enter the checking number of array"<<endl;
	cin>>n;
	for(i=0;i<8;i++)
	{
		if(n==arr[i])
		check=check+1;
		
	}
	if(check!=0)
	cout<<"number is present in array"<<endl;
	
	else
	{
		cout<<"number is not present in array"<<endl;
	}
	return 0;
	
}
