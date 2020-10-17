#include <bits/stdc++.h>
using namespace std;

// sort array in ascending and print the kth element
int findElement(int vec[],int size,int n){
    sort(vec,vec+size); 
    cout<<"\narray now\n";
    for (int i=0;i<size;i++){
        cout<<vec[i];
    }
    cout<<endl;
    return vec[n-1];
}


int main() {
	//code
	int size,n;
    cout<<"enter size"<<endl;
    cin>>size;
    cout<<"enter array"<<endl;
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter rank of smallest element"<<endl;
    cin>>n;
    if(n<size)
    	cout<<n<<"th smallest element: \n"<<findElement(arr,size,n)<<endl;
   	else
   		cout<<"out of bounds index chosen\n";
	return 0;
}