long long countCommas(long long n) {
    if (n<1000) return 0;
    else if (n<1000000) return n-999;
    else if (n<1000000000) return 2*n-999999-999;
    else if (n<1000000000000) return 3*n-999999999-999999-999;
    else if (n<1000000000000000) return 4*n-999999999999-999999999-999999-999;
    else return 4*n-999999999999-999999999-999999-999+1;
}