int lengthOfLastWord(char* s) {
    int length = 0, i;
    for(i = 0 ; s[i] != '\0' ; i++);

    while(i >= 0) {
        if((s[i] == ' ' && length == 0) || s[i] == '\0') {
            i--;
            continue;
        } else if(s[i] == ' ') return length;
        else length++;
        i--;
    }

    return length;
}