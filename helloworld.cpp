#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin>>n;
	//int a[n];
	vector<int>nums
	for(int i=0;i<n;i++) {
		int t;
		cin>>t;
		nums.push_back(t);
	}
	vector<vector<int>>v;
	permutations(nums,n,0,v);
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	//cout<<"u entered "<<n;
}
//permutations of a unique numsbes ex: 1,2,3 
void permutations(vector<int>&nums,int n,int level,vector<vector<int>>&v) {

	if(level==n) {
		v.push_back(nums);
	}
	//if nums=1,1,2 here 1 is repeating so
	//set<int>unique
	for(int i=level;i<n;i++) {
		//before swaping check the is the number is unique or not?
		//if(unique.find(nums[i])==unique.end())
		//unique.insert(nums[i])
		//do the all the operations bellow
		swap(nums[i],nums[level]);
		permutations(nums,n,level+1,v);
		swap(nums[i],nums[level]);
	}
}