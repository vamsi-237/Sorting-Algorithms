#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int n,vector<int>&vec){
	for(int i=1;i<n;i++){
		int j=i-1;
		int temp=vec[i];
		while(j>=0 and temp<vec[j]){
			vec[j+1]=vec[j];
			j--;
		}
		vec[j+1]=temp;
	}
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	insertion_sort(n,vec);
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
	return 0;
}