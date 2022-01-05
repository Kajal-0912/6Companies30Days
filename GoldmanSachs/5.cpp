//Ugly Numbers
//https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/


// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    long long res;
	    
	    set <long long> s;
	    s.insert(1);
	    for(int i=1; i<= n; i++){
	        res =*(s.begin());
	        s.insert(2*res);
	        s.insert(3*res);
	        s.insert(5*res);
	        s.erase(s.begin());
	    }
	    return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends