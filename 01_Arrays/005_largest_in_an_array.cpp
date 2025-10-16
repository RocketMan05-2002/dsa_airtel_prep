// largest

#include<iostream>
using namespace std;
int largest(int arr[], int n){
	int maxi = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>maxi){
			maxi = arr[i];
		}
	}
	return maxi;
}
int main(){
	int arr[]={12,45,2,34,87,98};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int result = largest(arr,n);
	cout<<result<<" ";
	return 0;
}