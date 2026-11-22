bool checkString(char* s) {
    int flag = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'b') {
            flag = 1;
        }
        if (flag && s[i] == 'a') {
            return false;
        }
    }
    return true;
}