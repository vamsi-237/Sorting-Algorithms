#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int n ,vector<int>&vec){
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n-i-1;j++){
			if(vec[j]>vec[j+1]){
				swap(vec[j],vec[j+1]);
				flag=1;
			}
			
		}
		if(!flag) break;
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
	bubble_sort(n,vec);
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
	return 0;
}