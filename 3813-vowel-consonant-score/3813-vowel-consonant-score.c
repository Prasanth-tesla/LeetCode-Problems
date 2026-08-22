bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int vowelConsonantScore(char* s) {
    int v = 0, c = 0;
    
    for(int i = 0; s[i] != '\0'; i++) {
        if(isVowel(s[i])) v++;
        else if(s[i] <= 122 && s[i] >= 97) c++;
    }

    return c ? v / c : 0;
}