char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    char *res = malloc((wordsSize + 1) * sizeof(char));
    
    for(int i = 0; i < wordsSize; i++) {
        int weight = 0;
        for(int j = 0; words[i][j] != '\0'; j++)
            weight += weights[words[i][j] - 'a'];
        res[i] = 122 - weight % 26;
    }

    res[wordsSize] = '\0';
    return res;
}