//Count the subarrays having product less than k
//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0, j=0,count =0;
        long long product = 1;
        
        while(j<n){
            product *= a[j];
            while(i<n && product >= k){
                product /= a[i];
                i++;
            }
            if(product < k){
                count += j - i + 1;
                
            }
            j++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends