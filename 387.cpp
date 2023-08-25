class Solution {
public:
    int firstUniqChar(string s) {
        if (s == "" || s.length() == 0) return -1;
        int count[26]={0};
        for (int i = 0; i < s.length(); i++)
          count[s[i] - 'a']++;
        for (int i = 0; i < s.length(); i++)
          if (count[s[i] - 'a'] == 1)
            return i;
        return -1;
    }
};