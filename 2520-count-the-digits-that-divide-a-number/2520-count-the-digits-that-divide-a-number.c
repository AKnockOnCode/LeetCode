int countDigits(int num) {
    int n = num, count = 0;
    while (n){
        if (num%(n%10)==0){
            count++;
        }
        n /= 10;
    }
    return count;
}