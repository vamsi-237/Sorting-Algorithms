#include<bits/stdc++.h>
using namespace std;

void merge(int l,int mid, int h, vector<int>&vec){
	vector<int>v;
	int i=l;
	int j=mid+1;
	while(i<=mid and j<=h){
		if(vec[i]<vec[j]){
			v.push_back(vec[i]);
			i++;
		}
		else{
			v.push_back(vec[j]);
			j++;
		}
	}
	while(i<=mid){
		v.push_back(vec[i]);
		i++;
	}
	while(j<=h){
		v.push_back(vec[j]);
		j++;
	}
	for(int k=l;k<=h;k++){
		vec[k]=v[k-l];
	}


}
void merge_sort(int l,int h,vector<int>&vec){
	if(l>=h) return ;
	int mid=(l+h)/2;
	merge_sort(l,mid,vec);
	merge_sort(mid+1,h,vec);
	merge(l,mid,h,vec);
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

	int n=vec.size();
	merge_sort(0,n-1,vec);
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
	return 0;
}