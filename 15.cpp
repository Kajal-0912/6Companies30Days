//Array Pair Sum Divisibility Problem
//https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        vector<int> v(k,0);
        for(int i=0; i<nums.size();i++){
            int t = nums[i]%k;
            if(t==0){
                if(v[t]==0){
                    v[t]++;
                }
                else{
                    v[t]--;
                }
                continue;
            }
            
            if(v[t]==0){
                v[k-t]++;
            }
            else{
                v[t]--;
            }
        }
        for(int i=0;i<k;i++){
            if(v[i]>0){
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends