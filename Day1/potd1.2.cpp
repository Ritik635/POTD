

// Approach 1

class Solution {
public:

// Time Complexity O(n)
// Space Complexity O(n)

    int missingNumber(vector<int>& nums) {

        // find max element of array
        int maxi = *max_element(nums.begin(),nums.end());
        int index;

        // create a vector of (max + 1) size and intialize with zero
        vector<int> ans((maxi+1),0);


        // if element is found mark it by 1 in ans vector
        for(int i = 0 ; i < nums.size() ;i++)
        {
            int num = nums[i];
            ans[num] = 1; 
        }

        // element which is marked by zero is the missing number
        for(int i = 0 ; i < ans.size() ; i++)
        {
            if(ans[i] == 0)
            {
                index = i;
                break;
               
            }
        }
        return index;
    }
};





// Approach 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size()+1;
        int xor1 = 0;
        int xor2 = 0;

        for(int i = 1 ; i < N  ; i++ )
        {
            xor1 = xor1 ^ i;
            xor2 = xor2 ^ nums[i-1];
        }

        return (xor1 ^ xor2);
    }
};