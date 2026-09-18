int mirrorDistance(int n) {
    int rev = 0;
    int num = n;
    while(num){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return abs(n - rev);
}