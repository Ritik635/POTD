
// Approach 1

class Solution {
public:

// Time Complexity O(n2)
// Space Complexity O(1)

    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            for(int j = i+1 ; j < nums.size() ; j++)
            {
                if(nums[i] == nums[j]) // if pair find then count
                {
                    count++;
                }
            }
        }

        return count;
    }
};


//Approach 2

class Solution {
public:
// Time Complexity O(n)
// Space Complexity O(n)
// use map

    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int , int> mp;
        int count = 0;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]++;  // store frequency of elements
        }

        for(auto i:mp)
        {
            if(i.second >= 2)
            {
                count += (i.second)*(i.second-1)/2; // n(n-1)/2
            }
        }

        return count;
    }
};