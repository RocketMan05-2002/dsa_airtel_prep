#include<iostream>
using namespace std;
int search(int arr[], int n, int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x) return i;
	}
	return -1;
}
int main(){
	int arr[]={10,4,6,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x;
	cin>>x;
	int ind = search(arr,n,x);
	if(ind == -1) cout<<"Element not found.";
	else cout<<"Element found at "<<ind;
	return 0;
}