int totalMoney(int n) {
    int total = 0, start = 1, limit = 7, reset = 2;
    while (n) {
        if (start <= limit) {
            total += start++;
            n--;
        } else if (start > limit) {
            start = reset++;
            limit++;
        }
    }
    return total;
}