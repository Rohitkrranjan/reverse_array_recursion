#include<bits/stdc++.h>
using namespace std;
void arrayReverse(int arr[],int n)
{
	// base case
	if(n==0 || n==1)
	 return ;
	
	int temp;
	temp = arr[0];
	arr[0] = arr[n-1];
	arr[n-1] = temp;
	
	arrayReverse(arr+1,n-2);
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	arrayReverse(arr,n);
	print(arr,n);
}
