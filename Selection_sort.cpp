#include<bits/stdc++.h>
using namespace std;


void selection_sort(vector<int>&vec){
	int n=vec.size();
	for(int i=0;i<n-1;i++){
		int mini=i;
		for(int j=i+1;j<n;j++){
			if(vec[mini]>vec[j]){
				mini=j;
			}
		}
		if(mini!=i) swap(vec[mini],vec[i]);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	vector<int>vec;
	int ele;
	while(cin>>ele){
		vec.push_back(ele);
	}

	selection_sort(vec);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}

	return 0;
}