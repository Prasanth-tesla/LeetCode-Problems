int minAddToMakeValid(char* s) {
    int bal = 0, add = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == '(') bal++;
        else if(bal > 0) bal--;
        else add++;
    }

    return bal + add;
}