class Solution {
    public int maxVowels(String s, int k) {
        int size = s.length(), count = 0;

        for(int i = 0 ; i < k ; i++) {
            if(isVowel(s.charAt(i))) count++;
        }

        int maxCount = count;

        for(int i = k ; i < size ; i++) {
            if(isVowel(s.charAt(i))) count++;
            if(isVowel(s.charAt(i - k))) count--;

            maxCount = Math.max(maxCount, count);
        }

        return maxCount;
    }

    public boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
}