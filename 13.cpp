//Decode the String
//https://practice.geeksforgeeks.org/problems/decode-the-string2444/1


// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack <char> st;
        for(char c: s){
            if(c==']'){
                string temp;
                while(st.top()!='['){
                    temp += st.top();
                    st.pop();
                }
                reverse(temp.begin(), temp.end());
                st.pop();
                string n;
                while(!st.empty() and isdigit(st.top())){
                    n += st.top();
                    st.pop();
                }
                reverse(n.begin(), n.end());
                int num = stoi(n);
                string temp2;
                for(int i=0; i<num; ++i){
                    temp2 += temp;
                }
                for(char ch:temp2){
                    st.push(ch);
                }
            }
            else {
                st.push(c);
            }
        }
        
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends