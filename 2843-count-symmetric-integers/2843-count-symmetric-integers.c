int countSymmetricIntegers(int low, int high) {
    int count = 0;
    for (int i = low; i <= high; i++) {
        int sum1 = 0, sum2 = 0;
        int num = i;
        int digits = 0;
        while (num) {
            num /= 10;
            digits++;
        }
        if (digits % 2) {
            continue;
        }
        num = i;
        int check = digits / 2;
        digits /= 2;
        while (check--) {
            sum1 += num % 10;
            num /= 10;
        }
        while (digits--) {
            sum2 += num % 10;
            num /= 10;
        }
        if (sum1 == sum2) {
            count++;
        }
    }
    return count;
}