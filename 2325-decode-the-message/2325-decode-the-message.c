char* decodeMessage(char* key, char* message) {
    char *table = malloc(26 * sizeof(char)), ch = 97;
    bool *ide = calloc(26, sizeof(bool));

    for(int i = 0; key[i] != '\0'; i++) {
        if(key[i] != ' ') {
            if(ide[key[i] - 'a']) continue;
            table[key[i] - 'a'] = ch++;
            ide[key[i] - 'a'] = true;
        }
    }

    for(int i = 0; message[i] != '\0'; i++)
        if(message[i] != ' ') message[i] = table[message[i] - 'a'];

    return message;
}