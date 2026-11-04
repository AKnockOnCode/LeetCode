int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = 0;
    int harshad = x;
    while (harshad){
        sum += harshad % 10;
        harshad /= 10;
    }
    if (x % sum){
        return -1;
    }
    return sum;
}