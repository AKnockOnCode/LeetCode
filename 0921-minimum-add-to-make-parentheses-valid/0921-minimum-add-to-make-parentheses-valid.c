int minAddToMakeValid(char* s) {
    int left = 0, right = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            left++;
        }
        else if (s[i]==')' &&left>0){
            left--;
        }
        else{
            right++;
        }
    }
    return left + right;
}