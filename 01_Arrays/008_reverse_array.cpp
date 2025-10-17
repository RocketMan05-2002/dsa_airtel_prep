// reverse array
#include<bits/stdc++.h>
using namespace std;
void reverseArr(int arr[], int n){
	int i=0,j=n-1;
	while(i<=j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	reverseArr(arr,n);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}