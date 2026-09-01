class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ranLen = ransomNote.length();
        int magLen = magazine.length();

        vector<int> count(26, 0);

        for(int i = 0; i < magLen; i++)
            count[magazine[i] - 'a']++;
        
        for(int i = 0; i < ranLen; i++) {
            if(count[ransomNote[i] - 'a'] == 0) return false;
            count[ransomNote[i] - 'a']--;
        }

        return true;
    }
};