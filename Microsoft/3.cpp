//Rotate by 90 degree
//https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/


// { Driver Code Starts
//Initial Template for C



#include<stdio.h>

 // } Driver Code Ends
//User function Template for C


void rotate(int n,int a[][])
{
    //code here
    for(int i=0; i<n; i++){
        for(int j =i+1; j<n; j++){
            int x = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = x;
        }
    }
    
    for(int i=0; i<n; i++){
        int low =0, high = n-1;
        while(low<high){
            int x = a[low][i];
            a[low][i] = a[high][i];
            a[high][i] = x;
            low++;
            high--;
        }
    }
}

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d",&t); 
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        }
        rotate(n,a);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                printf("%d ",a[i][j]);
            printf("\n");
        }
    }
    return 0;
}

  // } Driver Code Ends