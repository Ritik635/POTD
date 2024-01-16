// Time Complexity O(n)
// Space Complexity O(1)



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int num;
        cin >> num;
        int mini = INT_MAX;

        if(num / 100 == 0) // if num length is 2 then return last digit
        {
            cout << num % 10 << endl;
        }

        else
        {
            while(num != 0 )   // return minimum digit
            {
                mini = min(mini,num%10);
                num = num / 10;
            }

            cout << mini << endl;
        }
    }
     return 0;
}