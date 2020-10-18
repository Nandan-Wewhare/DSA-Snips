#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int size,zeroes=0,ones=0,twos=0;
	cout<<"enter size\n";
	cin>>size;
	int arr[size];
	cout<<"enter array\n";
	for (int i=0;i<size;i++){
		cin>>arr[i];
	}
	for (int i=0;i<size;i++){
		if(arr[i]==0)
			zeroes++;
		else if (arr[i]==1)
			ones++;
		else
			twos++;
	}

	// count 0,1,2 and place them in array
	int i=0;
	while(zeroes!=0){
		arr[i]=0;
		zeroes--;
		i++;
	}
	while(ones!=0){
		arr[i]=1;
		ones--;
		i++;
	}
	while(twos!=0){
		arr[i]=2;
		twos--;
		i++;
	}
	for (int i=0;i<size;i++){
		cout<<arr[i];
	}
	return 0;
}