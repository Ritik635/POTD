#include<bits/stdc++.h>
// Time Complexity O(n)
// Space Complexity O(1)

using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        string ref ;
        cin >> ref;

        if(ref.length() <= 3) // if length is 2 or 3 then after rearranging we never get different palindrome string
        {
            cout << "NO" << endl;
        }
        else
        {
            char ch = ref[0];
            bool flag = false;
            for(int i = 0 ; i < ref.length()/2 ; i++)
            {
                if(ch != ref[i])  // if characters are different in first half of string then we get different palindrome
                {                  // if character are same in first half then we dont get different palindrome
                    flag = true;
                    break;
                }
            }

            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;

        }
    }
}
