int reverseDegree(char* s) {
    int deg = 0;
    for(int i = 0; s[i] != '\0'; i++)
        deg += (i + 1) * (123 - s[i]);
    return deg;
}