//Number following a Pattern
//https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int> st;
        string res = "";
        int n=1;
        for(int i=0; i<S.size(); i++){
            if(S[i] == 'D'){
                st.push(n++);
            }
            else{
                st.push(n++);
                while(!st.empty()){
                    res += to_string(st.top());
                    st.pop();
                }
            }
        }
        
        st.push(n++);
        while(!st.empty()){
            res += to_string(st.top());
            st.pop();
        }
        return res;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends