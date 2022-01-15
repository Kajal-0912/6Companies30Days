//Prerequisite Tasks
//https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int num, vector<pair<int, int> >& preq) {
	    // Code here
	    vector<vector<int>> adj(num);
	    vector<int> indeg(num,0);
	    queue<int> q;
	    
	    for(auto a: preq){
	        adj[a.second].push_back(a.first);
	        indeg[a.first]++;
	    }
	    
	    for(int i=0; i<num;i++){
	        if(indeg[i]==0){
	            q.push(i);
	        }
	    }
	    
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        for(auto it : adj[node]){
	            indeg[it]--;
	            if(indeg[it]==0){
	                q.push(it);
	            }
	        }
	        num--;
	    }
	    
	    if(num==0){
	        return true;
	    }else{
	        return false;
	    }
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends