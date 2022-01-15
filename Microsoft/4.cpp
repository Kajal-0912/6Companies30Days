//Spirally traversing a matrix 
//https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/


// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int left=0, right = c-1, top=0, bottom = r-1;
        int k=0;
        vector<int>v (r*c,0);
        int j=0;
        while(left<=right && top<=bottom){
            if(k==0){
                for(int i=left; i<=right;i++){
                    v[j]= matrix[top][i];
                    j++;
                }
                top++;
                k=1;
            }
            else if(k==1){
                for(int i=top; i<=bottom;i++){
                    v[j] = matrix[i][right];
                    j++;
                }
                right--;
                k=2;
            }
            else if(k==2){
                for(int i=right; i>=left;i--){
                    v[j] = matrix[bottom][i];
                    j++;
                }
                bottom--;
                k=3;
            }
            else if(k==3){
                for(int i=bottom; i>=top; i--){
                    v[j] = matrix[i][left];
                    j++;
                }
                left++;
                k=0;
            }
        }
        return v;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends