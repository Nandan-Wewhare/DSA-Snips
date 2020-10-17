#include <bits/stdc++.h>
using namespace std;

int minimum(int arr[], int size){
	int min = 99999;
	for (int i=0;i<size;i++){
		if(arr[i]<min)
			min = arr[i];	
	}
	return min;
}

int maximum(int arr[], int size){
	int max = -99999;
	for (int i=0;i<size;i++){
		if(arr[i]>max)
			max = arr[i];	
	}
	return max;
}

int main(int argc, char const *argv[])
{
	int size;
	cout<<"Enter size"<<endl;
	cin>>size;
	cout<<"Enter array:"<<endl;
	int arr[size];
	for (int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Minimum: "<<minimum(arr,size)<<endl;
	cout<<"Maximum: "<<maximum(arr,size)<<endl;	
	return 0;
}