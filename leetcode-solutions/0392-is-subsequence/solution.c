bool isSubsequence(char* s, char* t) {
    int i = 0, j = 0, sSize, tSize;
    sSize = strlen(s);
    tSize = strlen(t);

    while(i < sSize && j < tSize) {
        if(s[i] == t[j])
            i++;
        j++;
    }
    return i == sSize;
    
}
