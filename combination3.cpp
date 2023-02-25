#include<bits/stdc++.h>
using namespace std;
void helper(int i,vector<vector<int>>&v,vector<int>&ans,int k,int n,vector<int>&nums) {
        if(k<i || nums[i]>n) {
            return;

        }
        if(k==(i-1) && n==0) {
            v.push_back(ans);
        }
        if(nums[i]<=n) {
            ans.push_back(nums[i]);
            helper(i+1,v,ans,k,n-nums[i],nums);
            ans.pop_back();
            helper(i+1,v,ans,k,n,nums);
        }
    }
int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int>nums;
	for(int i=1;i<10;i++) {
		nums.push_back(i);

	}
	vector<vector<int>>v;
	vector<int>ans;
	helper(0,v,ans,k,n,nums);

	int m=v.size();
	for(int i=0;i<m;i++) {
		int size=v[i].size();
		for(int j=0;j<size;j++) {
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}