#include<iostream>

using namespace std;

int* leftRotatebyOne(int * arr[], int n)
{
   int temp = arr[0], i;
   for (i = 0; i < n-1; i++)
       arr[i] = arr[i+1];
   
   arr[i] = temp;

   return arr;
}

int max_hamming_distance(int * arr,int n){
	int * temp = leftRotatebyOne(arr,n) ;
	int result = 0;
	int hamming_distance = 0;
	
	for (int j = 0; j < n; ++j)
	{
		for (int i = 0; i < n; ++i)
	{
		if(arr[i] != temp[i])
			hamming_distance++;
		
	}
	if(hamming_distance > result)
		result = hamming_distance;

	}

	return result;
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


	cout<<"\nMax hamming distance  is " << max_hamming_distance(arr,n);
	return 0;
}