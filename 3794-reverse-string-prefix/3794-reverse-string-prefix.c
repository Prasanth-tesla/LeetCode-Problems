char* reversePrefix(char* s, int k) {
    int left = 0, right = k - 1;

    while(left < right) {
        s[left] = s[left] ^ s[right];
        s[right] = s[left] ^ s[right];
        s[left] = s[left] ^ s[right];

        left++;
        right--;
    }

    return s;
}