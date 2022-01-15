//Find All Four Sum Numbers
//https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        set<vector<int>> s;
        
        for(int i=0; i<n-3; i++){
            for(int j=i+1 ; j<n-2 ; j++){
                int low=j+1;
                int high = n-1;
                while(low<high){
                    int sum = arr[i] + arr[j] + arr[low] + arr[high];
                    if(sum<k){
                        low++;
                    }
                    else if(sum>k){
                        high--;
                    }
                    else{
                        s.insert({arr[i],arr[j],arr[low],arr[high]});
                        low++;
                        high--;
                    }
                }
            }
        }
        
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
            
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends