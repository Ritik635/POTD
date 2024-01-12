class Solution {
public:
// Time Complexity O(l)
// Space Complexity O(n)

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool eow ;
    int countchild;

    TrieNode(char val)   // constructor
    {
        this -> data = val;
        for(int i = 0 ; i < 26 ; i++)
        {
            children[i] = NULL; 
        }
        countchild = 0;
        eow = false;
    }
};

void insert(TrieNode* root, string word)
{
    if(word.length()==0)
    {
        root -> eow = true;
        return;
    }

    TrieNode* child;
    int index = word[0] - 'a';
    if(root -> children[index] != NULL)  // means already letter is present so we just move forword
    {
        child = root -> children[index];
    }
    else
    {
        child = new TrieNode(word[0]);  // make new node
        (root -> countchild)++;  // increase childcount
        root -> children[index] = child;
    }

    insert(child,word.substr(1));
}

void search(TrieNode* root,string word,string& ans)
{
    if(word.length() == 0)
    {
        return;
    }

    int index = word[0] - 'a';
    TrieNode* child;

    if(root -> children[index] != NULL) // if letter is present
    {
        if(root -> countchild == 1) // if it have only one child
        {
            ans.push_back(word[0]);   // store the letter in  the ans
         child = root -> children[index];
        }
        else
        {
            return;
        }
    }
    else
    {
        return;
    }

    search(child,word.substr(1),ans);
    
}
    string longestCommonPrefix(vector<string>& strs) {
       
        string ans;
        int len = INT_MAX;
        string str;
        TrieNode* root = new TrieNode('\0');
        for(int i = 0 ; i < strs.size() ; i++)
        {
            if(strs[i].length() < len)
            {
                len = strs[i].length();    // find smallest string and its length because that string will be used ti find comman prefix
                str = strs[i];
            }
            insert(root,strs[i]);  // inserting strings into trie data structure
        }

       if(str.length() == 0) return "";
        search(root,str,ans); // sarching comman prefix
        return ans;
    }
};