//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int minMoves(int a[], int n, int k);

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int a[n];
    	for(int i=0;i<n;i++)
    	    cin>>a[i];
	   
    	cout<<minMoves(a,n,k)<<"\n";
	}
	return 0;
}

// } Driver Code Ends

// Time Complexity O(n)
// Space Complexity O(1)


int minMoves(int a[], int n, int k)
{
   
   long op = 0;
   
   int i = 1;
   while(i < n)
   {
      if(a[i-1] - a[i] >= 0) // element already in decreasing order
      {
          i++;
      }
      else
      {                                            // ceil function gives greatest integer 
          int num = ceil((a[i] - a[i-1])*1.0/k);  // first find difference then divide with k 
          a[i] = a[i] - (k*num);                 // update the value
          op  += num;                             // update operation
         
      }
   }
   
   return op % 1000000007 ;
}