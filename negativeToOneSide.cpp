#include <bits/stdc++.h>
using namespace std;


// two indexes low and high on 0 and size-1 respectively and do swapping acc to condition
void solution(int arr[],int size){
	cout<<"inside functiom\n";
	int low=0,high=size-1;
	while(low<=high)
	{
		if(arr[low]>=0 && arr[high]<0){
			int temp = arr[high];
			arr[high] = arr[low];
			arr[low] = temp;
			low++;
			high--;
		}
		else if(arr[high]<0 && arr[low]<0){
			low++;
		}
		else if(arr[high]>=0 && arr[low]<0){
			low++;
			high--;
		}
		else if(arr[high]>=0 && arr[low]>=0){
			high--;
		}
	}
	for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int size;
	cout<<"enter size\n";
	cin>>size;
	int arr[size];
	cout<<"enter array\n";
	for (int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	solution(arr,size);
	return 0;
}