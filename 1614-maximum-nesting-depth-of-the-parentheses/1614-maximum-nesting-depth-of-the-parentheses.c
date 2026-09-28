int maxDepth(char* s) {
    int depth = 0;
    int max = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            depth++;
        }
        if (depth > max) {
            max = depth;
        }
        if (s[i] == ')') {
            depth--;
        }
    }
    return max;
}