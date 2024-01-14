// Aproach 1

class Solution {
public:

// Time Complexity O(n)
// Space Complexity O(n)

    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        string temp = "";
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
                temp.push_back('(');
            }
            else
            {
                st.pop();
                temp.push_back(')');
                if(st.size() == 0)
                {                                // Removing outer paranthesis
                    int size = temp.size();
                    temp = temp.substr(1,size-2);
                    ans += temp;
                    temp.clear();
                }
            }
        }
        return ans;
    }
};


// Approach 2

class Solution {
public:
// Time Complexity O(n)
// Space Complexity O(1)

    string removeOuterParentheses(string s) {
       
        int open = 0;
        int close = 0;
        int start = 0;
        string ans = "";
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
                if(open == close)
                {
                    ans += s.substr(start + 1,i-(start+1));
                    open = 0;
                    close = 0;
                    start = i+1;     
                }
            }
        }
        return ans;
    }
};


