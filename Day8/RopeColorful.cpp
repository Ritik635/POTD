class Solution {
public:
// Time Complexity O(n)
// Space Complexity O(1)

    int minCost(string colors, vector<int>& neededTime) {
        int Toataltime = 0 ;
        int i = 0;

        while(i < colors.length()-1)
        {
            if(colors[i] == colors[i+1]) // if adjacent colors are same
            {
                int j = i;
                int maxtime = -1;
                // Triverse till adjacent colors are same
                // calculate maxtime to remove one balloon
                while(colors[j] == colors[j+1] && j < colors.length()-1 )
                {
                    maxtime = max(maxtime,neededTime[j]);
                   Toataltime += neededTime[j];
                    j++;
                }
                // after exit one balloon of same collor left 
                     maxtime = max(maxtime,neededTime[j]);
                    Toataltime += neededTime[j];
                    Toataltime -= maxtime;  // we left that ballon which take maximum time
                    i = j;
            }
            i++;
        }

        return Toataltime;
    }
};