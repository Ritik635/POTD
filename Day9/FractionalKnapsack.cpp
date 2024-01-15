//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    // Time Complexity O(nlogn)
    // Space Complexity O(n)
    
    // we get maximum output if we add higher ratio btw(value/weight) values
    
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<double,int>> store;
        
        
        for(int i = 0 ; i < n ; i++)
        {
            double x = arr[i].value*1.0/arr[i].weight*1.0; // finding ratio btw value/weight
            store.push_back({x,i}); // store ratio with index
        }
        
        sort(store.begin(),store.end(),greater<pair<double,int>>());  // sort in decreasing order because we need higher ratio value first
        
        double ans = 0.0;
        double sum = 0.0;
        for(int i = 0 ; i < n ; i++)
        {
            double w = arr[store[i].second].value/store[i].first;  // weight = val / ratio
            if(sum + w < W)                   // if less than W means we take full value
            {
                ans += arr[store[i].second].value*1.0;
                sum += w;
            }
            else                  
            {
                ans += store[i].first * (W-sum);
                break;
            }
        }
        
        return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends