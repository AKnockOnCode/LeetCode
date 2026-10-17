int pivotInteger(int n) {
    int sum1 = 0, sum2 = 0;
    int pivot=-1;
    for (int i = 1; i <= n; i++) {
        sum1 += i;
        sum2 = 0;
        for (int j = n; j >= i; j--) {
            
            sum2 += j;
        }
        if (sum1 == sum2) {
                pivot = i;
                break;
            }
    }
    return pivot;
}