#include <bits/stdc++.h>
using namespace std;

int solution(int arr[], int n, int k){
	int sum = 0;
	for (int i=0;i<n;i++){
		sum+=arr[i];
	}
	int avg = sum/n;
	for (int i=0;i<n;i++){
		if(arr[i] <= avg){
			arr[i] += k;
		}
		else{
			arr[i] -= k;
		}
	}
	return (*max_element(arr,arr+n) - *min_element(arr,arr+n));
}


int main(int argc, char const *argv[])
{
	int size,k;
	cout<<"enter size and k\n";
	cin>>size;
	cin>>k;
	int arr[size];
	cout<<"enter array\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<solution(arr,size,k);
	return 0;
}