class Solution {
public:

    string encode(vector<string>& strs) {
        string j;
        
        for(string & st : strs)
            j = j + to_string(st.length()) +'#'+ st;
        
        cout<<j;
        return j;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        // cout<<s.size();
        while(i<s.size())
        {
            int j = i;
            while(s[j] != '#') j++;
           
            int len = stoi(s.substr(i, j - i));
            cout<<len;
            string word = s.substr(j + 1, len);
            
            ans.push_back(word);
            i = j+1+len;
        }
        return ans;

    }
};
