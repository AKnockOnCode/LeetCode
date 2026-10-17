int pivotInteger(int n) {
    int sum = n*(n+1)/2;
    int sum1 = 0, pivot = -1;
    for (int i = 1; i <= n; i++) {
        sum1 = i*(i+1)/2;
        if (2*sum1==sum+i){
            return i;
        }
    }
    return pivot;
}