class Solution {
public:

// Time Complexity O(n)
// Space Complexity O(1)

    int jump(vector<int>& nums) {

        int jump = 0;
        int index = nums.size()-1;

        while(index > 0 )
        {
            int temp;
            for(int j = index-1 ; j >=0 ; j--)
            {
                if(nums[j] >= index - j) // if value of jump is greater than equal to difference between index
                {                        // it can be a valid jump
                    temp = j;             // temp  store maximum j from where we get maximum jump
                }
            }

            jump++;
            index = temp;
            
        }

        return jump;
    }
};