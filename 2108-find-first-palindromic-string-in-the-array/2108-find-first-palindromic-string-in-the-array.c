char* firstPalindrome(char** words, int wordsSize) {

    for(int i = 0; i < wordsSize; i++) {
        int left = 0, right = strlen(words[i]) - 1;
        bool isPal = true;

        while(left < right) {
            if(words[i][left] != words[i][right]) {
                isPal = false;
                break;
            }
            left++;
            right--;
        }

        if(isPal) {
            return words[i];
        }
    }

    return "";
}