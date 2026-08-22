int numberOfSpecialChars(char* word) {
    bool* chars = calloc(26, sizeof(int));
    int spec = 0;
    for(int i = 0; word[i] != '\0'; i++) {
        for(int j = i + 1; word[j] != '\0'; j++) {
            if(word[i] <= 90 && word[j] == word[i] + 32 && !chars[word[i] - 'A']) {
                chars[word[i] - 'A'] = true;
                spec++;
                break;
            }
            else if(word[i] >= 97 && word[j] == word[i] - 32 && !chars[word[i] - 'a']) {
                chars[word[i] - 'a'] = true;
                spec++;
                break;
            }
        }
    }
    return spec;
}