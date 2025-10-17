//remove duplictaes from sorted array

#include<iostream>
using namespace std;
int removeDuplis(int arr[], int n){
	int i=0,j=0;
	while(j<n){
		if(arr[i]!=arr[j]){
			i++;
			swap(arr[i],arr[j]);
		}
		j++;
	}
	return i+1;
}
int main(){
	int arr[]={1,1,1,2,3,3,3,3,3,4,5,5,5,5,5,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	int newsize = removeDuplis(arr,n);
	for(int i=0;i<newsize;i++) cout<<arr[i]<<" ";
	return 0;
}