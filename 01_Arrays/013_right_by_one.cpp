// right by 1
#include<iostream>
using namespace std;
void rightByOne(int arr[], int n){
	int temp = arr[n-1];
	for(int i=n-1;i>=1;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	rightByOne(arr,n);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}