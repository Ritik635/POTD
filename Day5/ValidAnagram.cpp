
// Approach 1
class Solution {
public:

// Time Complexity O(nlogn)
// space Complexity O(n)
// Using Priority Queue

    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;

        priority_queue<char> pq1;
        priority_queue<char> pq2;

        for(int i = 0 ; i < s.length() ; i++)
        {
            pq1.push(s[i]);  // push s string elements in pq1 and t string elements in pq2
            pq2.push(t[i]);
        }

    // max heap arrange all the elements in alphabetical order
        while(!pq1.empty())
        {
            if(pq1.top() != pq2.top())  // if top is not same strings are not anagram
            {
                return false;
            }

            pq1.pop();
            pq2.pop();
        }

    return true;
    }
};


// Approach 2

class Solution {
public:

// Time Complexity O(n)
// space Complexity O(1)
// using Hashing

    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;
        
        int arr1[26] = {0};  // make two array which count the frequency of element
        int arr2[26] = {0};

        for(int i = 0 ; i < s.length() ; i++)
        {
            arr1[s[i] - 'a']++;
            arr2[t[i] - 'a']++;
        }

        for(int i = 0 ; i < 26 ; i++)
        {
            if(arr1[i] != arr2[i])  // if frequency is not same then it is not an anagram
            {
                return false;
            }
        }

        return true;
    }
};