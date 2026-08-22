char* removeTrailingZeros(char* num) {
    int size = 0;

    while(num[size] != '\0') size++;

    int i = size - 1;

    while(i >= 0 && num[i] == '0') i--;

    num[i + 1] = '\0';

    num = realloc(num, (i + 2) * sizeof(char));

    return num;
}