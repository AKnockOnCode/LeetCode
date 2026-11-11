int totalMoney(int n) {
    int w = n / 7;
    int r = n % 7;
    int weeks = w * 28 + 7 * w * (w - 1) / 2;
    int days = r * w + r * (r + 1) / 2;
    return weeks + days;
}