// second largest

#include<iostream>
using namespace std;
int secondLargest(int arr[], int n){
	int maxi = arr[0];
	int secmax = -1;
	for(int i=1;i<n;i++){
		if(arr[i]>maxi){
			secmax = maxi;
			maxi = arr[i];
		}else if(arr[i]<maxi){
			if(secmax == -1 || arr[i]>secmax) secmax = arr[i];
		}
	}
	return secmax;
}
int main(){
	int arr[]={12,4,45,34,32,2};
	int n= sizeof(arr)/sizeof(arr[0]);
	int result = secondLargest(arr,n);
	cout<<result<<endl;
	return 0;
}