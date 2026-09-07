bool consecutiveSetBits(int n) {
    long long bin = 0;
    while (n){
        bin = bin*10+n%2;
        n/=2;
    }
    int temp = 0;
    while (bin/10){
        if (bin%100==11){
            temp++;
        }
        bin/=10;
    }
    if (temp == 1){
        return true;
    }
    return false;
}