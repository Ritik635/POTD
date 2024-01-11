
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
#include <bits/stdc++.h>

class Solution{
public:	
	// Function returns the second
	// largest elements
	
	// Time Complexity O(n)
	// Space Complexity O(1)
	
	
	int print2largest(int arr[], int n) {
	    
	    int largest = arr[0];
	    int SecondLargest = -1;
	    
	    for(int i = 1 ; i < n  ; i++ )
	    {
	        // if new number is greater than both numbers then update both numbers
	        if(arr[i] > largest && arr[i] > SecondLargest)
	        {
	            SecondLargest = largest;
	            largest = arr[i];
	        }
	        
	        // if new number comes between largest and secondLargest then we have yo update secondLargest
	        else if(arr[i] < largest && arr[i] > SecondLargest)
	        {
	           SecondLargest = arr[i]; 
	        }
	    }
	    
	    return SecondLargest;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends