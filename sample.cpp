#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++) {
		int t;
		cin>>t;
		v.push_back(t);

	}
	vector<int>s;
	for(int i=0;i<n;i++) {
		int t;
		cin>>t;
		s.push_back(t);
	}
	//s.pop_back();
	if(s==v) cout<<"true";
	else cout<<"false";
}
class Solution{
    public:
     vector<string>ans;
     
     vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        fnc(m,n,0,0,"");
        return ans;
    }
    
    void fnc(vector<vector<int>> &m, int n, int i, int j, string curstr)
    {   
        if(i<0 || j<0 || i>=n || j>=n || m[i][j]==0) return;
        
        if(i==n-1 && j==n-1)
        {   
            ans.push_back(curstr);
            return;
        }
        
        m[i][j] = 0;     
        //down cell
        fnc(m, n, i+1, j, curstr+'D');
        
        //right
        fnc(m, n, i, j+1, curstr+'R');
        
        //up
        fnc(m, n, i-1, j, curstr+'U');
        
        //left
        fnc(m, n, i, j-1, curstr+'L');
        
        m[i][j] = 1;
        
    }
};

