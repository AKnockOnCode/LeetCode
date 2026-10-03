int numberOfMatches(int n){
    int total = 0;
    while (n != 1){
        total += n/2;
        n = (n - 1) / 2 + 1;
    }
    return total;
}