#include<iostream>
using namespace std;
int deleteByVal(int arr[], int n, int val){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==val){
			break;
		}
	}
	for(int j=i;j<n;j++){
		arr[j]=arr[j+1];
	}
	return n-1;
}
int main(){
	int arr[]={1,3,5,2,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	int val;
	cin>>val;
	int newsize = deleteByVal(arr,n,val);
	for(int i=0;i<newsize;i++) cout<<arr[i]<<" ";
	return 0;
}