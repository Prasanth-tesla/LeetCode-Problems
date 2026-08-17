class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int pLen = p.length(), sLen = s.length();

        if(sLen < pLen) return result;

        vector<int> sCount(26, 0);
        vector<int> pCount(26, 0);

        for(int i = 0 ; i < pLen ; i++) {
            sCount[s[i] - 'a']++;
            pCount[p[i] - 'a']++;
        }

        if(sCount == pCount) result.push_back(0);

        for(int i = pLen ; i < sLen ; i++) {
            sCount[s[i] - 'a']++;
            sCount[s[i - pLen] - 'a']--;

            if(pCount == sCount) result.push_back(i - pLen + 1);
        }

        return result;
    }
};