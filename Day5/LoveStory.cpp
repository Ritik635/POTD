#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};

    string ref = "codeforces";
    for(int i = 0  ; i < n ; i++)
    {
        string str;
        cin >> str;
        int count = 0;

        for(int j = 0 ; j < 10 ; j++)
        {
            if(str[j] != ref[j]) count++;
        }

        arr[i] = count;
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << endl;
    }
   
}