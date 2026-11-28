int getLeastFrequentDigit(int n) {
    int hash[10] = {0};
    while(n){
        hash[n%10]++;
        n /= 10;
    }
    int min = INT_MAX, index = 0;
    for (int i = 0; i < 10; i++){
        if (hash[i] && hash[i] < min){
            min = hash[i];
            index = i;
        }
    }
    return index;
}