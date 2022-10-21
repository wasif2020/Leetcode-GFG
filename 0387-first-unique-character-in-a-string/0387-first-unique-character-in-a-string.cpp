class Solution {
public:
    int firstUniqChar(string s) {
        int count[26]={0};
        for(auto x:s)
            count[x-'a']++;
        for(int i=0; i<s.size(); i++)
            if(count[s[i]-'a']==1)
                return i;
        return -1;
    }
};