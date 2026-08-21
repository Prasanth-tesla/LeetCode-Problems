char* reversePrefix(char* word, char ch) {
    int left = 0, right = 0;
    bool detected = false;

    while(word[right] != '\0') {
        if(word[right] == ch) {
            detected = true;
            break;
        }
        right++;
    } 

    if(detected) {
        while(left < right) {
            word[left] = word[left] ^ word[right];
            word[right] = word[left] ^ word[right];
            word[left] = word[left] ^ word[right];

            left++;
            right--;
        }
    }

    return word;
}