//Count ways to N'th Stair(Order does not matter)
//https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1/


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        int dp[m+1];
        
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i=3; i<=m; i++){
            dp[i] = dp[i-2] + 1;
        }
        
        return dp[m];
        
    }
};

// { Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}  // } Driver Code Ends