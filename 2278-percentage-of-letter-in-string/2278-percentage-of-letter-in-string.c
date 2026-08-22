int percentageLetter(char* s, char letter) {
    int size = 0, occ = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == letter) occ++;
        size++;
    }

    return (int)((double)occ / size * 100);
}