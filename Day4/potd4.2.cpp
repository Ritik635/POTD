class Solution {
public:
// Time Complexity O(n)
// Space Complexity O(n)

    bool rotateString(string s, string goal) {
        queue<char> q1;
        queue<char> q2;

        for(int i = 0 ; i < s.length() ;i++) // store s string in queue 1
        {
            q1.push(s[i]);
        }

         for(int i = 0 ; i < goal.length() ;i++) // store goal string in queue 2
        {
            q2.push(goal[i]);
        }

        int length = goal.length();

        while(length !=0)
        {
            char ch = q2.front(); // rotate characters one by one and check it is equal to other string or not
            q2.pop();
            q2.push(ch);

            if(q1==q2) // if equal return true
            {
                return true;
            }

            length--;
        }

        return false;  // means string will never be same

    }
};