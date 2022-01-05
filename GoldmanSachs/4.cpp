//Run length Encoding
//https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  char ch = src[0];
  string res;
  int count =1;
  for(int i=1; i<src.size();i++){
      if(src[i]==ch){
          count++;
      }
      else{
          res = res + ch + to_string(count);
          ch = src[i];
          count = 1;
      }
  }
  res = res + ch + to_string(count);
  return res;
  
}     
 
