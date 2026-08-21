int mostWordsFound(char** sentences, int sentencesSize) {
    int bigCount = 0;
    for(int i = 0; i < sentencesSize; i++) {
        int count = 1;
        for(int j = 0; sentences[i][j] != '\0'; j++) {
            if(sentences[i][j] == ' ') count++;
        }
        bigCount = (bigCount < count) ? count : bigCount;
    }
    return bigCount;
}