//Find the position of M-th item
//Find the kid which gets tha damaged toy

// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        if(N==1) return 1;
        int element = M+K-1;
        if(element%N  == 0){
           //cycle completed 
           return N;
        }
        return element%N ;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}  // } Driver Code Ends