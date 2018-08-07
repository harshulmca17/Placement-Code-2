#include<iostream>

using namespace std;

int find_min(int * arr,int n){
	int min = arr[0];
	
	int low = 0,high = n-1,mid;
	while( low != high){
			mid = (low+high)/2;
			if(arr[mid] < arr[mid-1]){
				return arr[mid];
			}
			else if(arr[mid] < arr[high]){

				high = mid;

			}
			else{

				low = mid;

			}

	}
	
	return min;
}

int main(){

	int n;
	cout<<"\nEnter the size of array : ";
	cin>>n;
	int * arr = new int [n];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}


	cout<<"\nMin element is " << find_min(arr,n);
	return 0;
}