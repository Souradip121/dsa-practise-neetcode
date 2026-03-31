class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(auto str:strs)
        {
            result = result + to_string(str.size()) + '#' + str; 
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i<s.size())
        {
            int j = i;
            while(s[j]!='#')
            {
                j++;
            }

            int length = stoi(s.substr(i,j-i));
            i = j+1;
            ans.push_back(s.substr(i,length));
            i+=length;
        }
        
        return ans;
    }
};
