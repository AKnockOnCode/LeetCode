int numberOfSpecialChars(char* word) {
    int count = 0;
    int upper[26] = {0}, lower[26] = {0};
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            upper[word[i] - 65]++;
        } else if (word[i] >= 'a' && word[i] <= 'z') {
            lower[word[i] - 97]++;
        }
    }
    for (int j = 0; j < 26; j++) {
        if (lower[j] && upper[j]) {
            count++;
        }
    }
    return count;
}