#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(1)
// Space Complexity O(1)

int main()
{
    int n;
    cin >> n;
    string ref = "abc";
    for(int i = 0 ; i < n ; i++)
    {
        string input ;
        cin >> input;

        string temp = input;
        bool flag = true;

        if(input == ref)
        {
            cout << "YES" << endl;
            flag = false;
        }

        if(flag)           // swap 0th and 1st index then check it is equal or not
        {
             swap(temp[0],temp[1]);
             if(temp == ref)
             {
                 cout << "YES" << endl; 
                 flag = false;
             }
                
              else temp = input;
        }

        if(flag)    // swap 1st and 2nd index then check it is equal or not
        {
             swap(temp[1],temp[2]);
             if(temp == ref)
             {
                 cout << "YES" << endl; 
                 flag = false;
             }
                
              else temp = input;
        }

        if(flag)    // swap 0th and 2nd index then check it is equal or not
        {
             swap(temp[0],temp[2]);
             if(temp == ref)
             {
                 cout << "YES" << endl; 
                 flag = false;
             }
                
              else temp = input;
        }

        if(flag)  cout << "NO" << endl; // means after 1 operation we did'nt get same string so return no
       
    }
}