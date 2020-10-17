#include <bits/stdc++.h>
using namespace std;


int findElement(int vec[],int size,int n){
    sort(vec,vec+(size-1));
    return vec[n-1];
}


int main() {
	//code
	int t,size,n;
	cin>>t;
    int arr[size];
	while(t--){
	    cin>>size;
	    for (int i=0;i<size;i++){
	        cin>>arr[i];
	    }
	    cin>>n;
	    cout<<findElement(arr,size,n)<<endl;
	}
	
	return 0;
}