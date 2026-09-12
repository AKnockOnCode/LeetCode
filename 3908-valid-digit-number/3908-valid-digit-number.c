bool validDigit(int n, int x) {
    int a = n;
    while (a) {
        if (a / 10 == 0 && a == x)
            return false;
        a /= 10;
    }
    a = n;
    while (a) {
        if (a % 10 == x)
            return true;
        a /= 10;
    }
    return false;
}