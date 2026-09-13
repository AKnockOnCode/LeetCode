int digitFrequencyScore(int n) {
    if (n==0) return 0;
    return n%10 + digitFrequencyScore(n/10);
}