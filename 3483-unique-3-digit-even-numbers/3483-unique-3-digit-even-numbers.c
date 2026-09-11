int totalNumbers(int* digits, int digitsSize) {
    int i = 100, check = 0, count = 0;
    int a, b, c, found = 0;
    while (i < 999) {
        found = 0;
        for (a = 0; a < digitsSize && !found; a++) {
            for (b = 0; b < digitsSize && !found; b++) {
                for (c = 0; c < digitsSize && !found; c++) {
                    if (a == b || b == c || a == c)
                        continue;
                    check = digits[a] * 100 + digits[b] * 10 + digits[c];
                    if (check == i) {
                        count++;
                        found = 1;
                    }
                }
            }
        }
        i += 2;
    }
    return count;
}