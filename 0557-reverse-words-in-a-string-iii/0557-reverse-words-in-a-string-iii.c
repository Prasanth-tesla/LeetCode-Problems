void reverse(char* s, int left, int right) {
    while(left < right) {
        s[left] = s[left] ^ s[right];
        s[right] = s[left] ^ s[right];
        s[left] = s[left] ^ s[right];

        left++;
        right--;
    }
}

char* reverseWords(char* s) {
    int left = 0, right = 0;

    while(s[right] != '\0') {
        if(s[right] == ' ') {
            reverse(s, left, right - 1);
            left = right + 1;
            right++;
        }
        right++;
    }

    reverse(s, left, right - 1);

    return s;
}