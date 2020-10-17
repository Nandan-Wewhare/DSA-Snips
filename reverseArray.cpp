#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start,int end,int size){
	 while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
	cout<<"after reverse\n";
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
	for (int i=0;i<size;i++){
		cin>>arr[i];
	}
	reverseArray(arr,0,size-1,size);
	
	return 0;
}