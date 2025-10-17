// right by 1
#include<iostream>
using namespace std;
void rightByOne(int arr[], int n, int D){
	int temp[D];
	for(int i=n-D;i<n;i++) temp[i-(n-D)] = arr[i];
	for(int i=D;i>=0;i--) arr[i+D]=arr[i];
	for(int i=0;i<D;i++) arr[i]=temp[i];
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int D;
	cin>>D;
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	rightByOne(arr,n,D);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}