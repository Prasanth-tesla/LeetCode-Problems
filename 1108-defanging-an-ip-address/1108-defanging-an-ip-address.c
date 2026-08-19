char *defangIPaddr(char *address){
    char *defang = NULL;
    int idx = 0;

    for(int i = 0; address[i] != '\0'; i++) {
        if(address[i] == '.') {
            defang = realloc(defang, (idx + 3) * sizeof(char));
            defang[idx++] = '[';
            defang[idx++] = '.';
            defang[idx++] = ']';
        } else {
            defang = realloc(defang, (idx + 1) * sizeof(char));
            defang[idx++] = address[i];
        }
    }

    defang = realloc(defang, (idx + 1) * sizeof(char));
    defang[idx] = '\0';
    return defang;
}