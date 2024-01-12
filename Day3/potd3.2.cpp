// Approach 1

class Solution {
public:
// Time Complexity O(n)
// Space Complexity O(n)

    int majorityElement(vector<int>& nums) {
        int element;
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            // store frequency of elements
            mp[nums[i]]++;
        }

        int maxfreq = 0 ;
        for(auto i:mp)
        {
            // return the element whose whave max frequency
            if(i.second > maxfreq)
            {
                maxfreq = i.second;
                element = i.first;
            }
        }

        return element;
    }
};


// Approach 2

class Solution {
public:

// Time Complexity O(n)
// Space Complexity O(1)

// one element is present in array which have frequency more than n/2  

    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element;

        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if(count == 0)   // means we have to take new element
            {
             element = nums[i];
             count = 1;
            }

            else if(element == nums[i] ) // if element is same then increase count
            {
                count++;
            }

            else   // if element is not same then decrease count
            {
                count--;
            }
        }

        return element;
    }
};