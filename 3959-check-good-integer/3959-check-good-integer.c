bool checkGoodInteger(int n) {
    int digitSum = 0, squareSum = 0;
    while (n){
        digitSum += n % 10;
        squareSum += (n % 10) * (n % 10);
        n /= 10;
    }
    if (squareSum - digitSum >= 50){
        return true;
    }
    return false;
}