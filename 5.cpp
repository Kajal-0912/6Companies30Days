//Stock span problem
//https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> ans(n);
       stack<pair<int,int>> st;
       
       for(int i=0; i<n; i++){
           while(!st.empty()&&st.top().first<=price[i]){
               st.pop();
           }
           
           if(st.empty()){
               ans[i] = i+1;
           }else{
               ans[i] = abs(st.top().second - i);
           }
           
           st.push({price[i],i});
       }
       
       return ans;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends