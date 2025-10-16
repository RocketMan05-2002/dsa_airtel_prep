#include<iostream>
using namespace std;
int insertByPosition(int arr[], int n, int cap, int pos, int val){
	if(n==cap) return n;
	int index = pos-1; // 0 - based indexing
	for(int i=n;i>=index;i--){
		arr[i+1]= arr[i];
	}
	arr[index] = val;
	return n+1;
}
int main(){
	int arr[5];
	arr[0]=0;
	arr[1]=2;
	arr[2]=3;
	arr[3]=4;
	int n=4;
	int pos,val;
	cin>>pos>>val;
	// pos =2, val=1
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	int newsize = insertByPosition(arr,n,5,pos,val);
	cout<<newsize<<endl;
	for(auto it:arr) cout<<it<<" ";
	return 0;
}