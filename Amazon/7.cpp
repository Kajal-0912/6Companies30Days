//first non-repeating character in a stream
//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    vector<int> chaar(26,0);
		    queue<char>Q;
		    string ans;
		    
		    for(int i=0; s[i]; i++){
		        Q.push(s[i]);
		        chaar[s[i] - 'a']++ ;
		        
		        while(!Q.empty()){
		            if(chaar[Q.front() - 'a'] > 1)Q.pop();
		            else{
		                ans += Q.front();
		                break;
		            }
		        }
		        
		        if(Q.empty()){
		            ans  +="#";
		        }
		    }
		    
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends