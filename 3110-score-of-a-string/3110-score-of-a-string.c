int scoreOfString(char* s) {
    int left = 0, score = 0;

    for(int right = 1 ; s[right] != '\0' ; right++) {
        score += s[left] > s[right] ? s[left] - s[right] : s[right] - s[left];
        left++;
    }

    return score;
}