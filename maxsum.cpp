#include <bits/stdc++.h>
using namespace std;

int solution(int arr[],int size){
	int maxTillHere = 0, maxSoFar = 0;
	for(int i=0;i<size;i++){
		maxTillHere += arr[i];
		if(maxTillHere > maxSoFar){
			maxSoFar = maxTillHere;
		}
	}
	return maxSoFar;
}

int main(int argc, char const *argv[])
{
	int size;
	cout<<"enter size\n";
	cin>>size;
	int arr[size];
	cout<<"enter array"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<solution(arr,size);
	return 0;
}