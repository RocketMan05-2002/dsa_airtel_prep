#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]) return false;
	}
	return true;
}
int main(){
	int arr[]={12,18,14,15,16};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(isSorted(arr,n)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}