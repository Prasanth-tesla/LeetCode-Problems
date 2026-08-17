/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findAnagrams(char* s, char* p, int* returnSize) {
    *returnSize = 0;
    int idx = 0, sLen = strlen(s), pLen = strlen(p);
    int* result = malloc(sLen * sizeof(int));

    if(sLen < pLen) return result;
    
    int sFreqs[26] = {0};
    int pFreqs[26] = {0};

    for(int i = 0 ; i < pLen ; i++) {
        sFreqs[s[i] - 'a']++;
        pFreqs[p[i] - 'a']++;
    }

    if(memcmp(pFreqs, sFreqs, 26 * sizeof(int)) == 0) result[idx++] = 0;

    for(int i = pLen ; s[i] != '\0' ; i++) {
        sFreqs[s[i] - 'a']++;
        sFreqs[s[i - pLen] - 'a']--;

        if(memcmp(sFreqs, pFreqs, 26 * sizeof(int)) == 0) result[idx++] = i - pLen + 1;
    }

    *returnSize = idx;

    return result;
}