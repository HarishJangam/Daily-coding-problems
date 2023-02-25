#include<bits/stdc++.h>
using namespace std;
void combinatons(int i,int n,vector<vector<int>>&v,vector<int>&nums,vector<int>&ans,int t);
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin>>n;
	vector<int>nums;
	for(int i=0;i<n;i++) {
		int t;
		cin>>t;
		nums.push_back(t);
	}
	int target;
	cin>>target;
	vector<vector<int>>v;
	vector<int>ans;
	combinatons(0,n,v,nums,ans,target);
	int m=v.size();
	for(int i=0;i<m;i++) {
		int t=v[i].size();
		for(int j=0;j<t;j++) {
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}


}
void combinatons(int i,int n,vector<vector<int>>&v,vector<int>&nums,vector<int>&ans,int t) {
	if(i==n){
            if(t==0 ){
                v.push_back(ans);
            }
            return;
        }
        if(nums[i]<=t) {
            ans.push_back(nums[i]);
            combinatons(i,n,v,nums,ans,t-nums[i]);
            ans.pop_back();
        }
        combinatons(i+1,n,v,nums,ans,t);
}