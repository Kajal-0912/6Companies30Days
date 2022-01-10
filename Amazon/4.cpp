//Brackets in Matrix Chain Multiplication
//https://practice.geeksforgeeks.org/problems/brackets-in-matrix-chain-multiplication1024/1/#




// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    map<string, pair<int,string>> mp;
public:
    string matrixChainOrder(int A[], int n){
        // code here
        return matrixChainOrderUtil(A,0,n-1).second;
        
    }
    pair<int , string>matrixChainOrderUtil(int p[], int l,int r){
        if(l+1==r){
            return{0,""+ string(1, l+'A')};
        }
        string key = to_string(l)+ ";"+to_string(r);
        if(mp.count(key)){
            return mp[key];
        }
        
        int currMin = INT_MAX;
        string minString;
        for(int k=l+1;k<r;k++){
            auto p1 = matrixChainOrderUtil(p,l,k), p2= matrixChainOrderUtil(p,k,r);
            if(p1.first +p2.first +p[l]*p[k]*p[r]<currMin){
                currMin = p1.first + p2.first +p[l] * p[k] * p[r];
                
                minString = p1.second + p2.second;
            }
        }
        
        return mp[key] = {currMin, "(" + minString + ")" };
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i = 0;i < n;i++)
            cin>>p[i];
        
        Solution ob;
        cout<<ob.matrixChainOrder(p, n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends