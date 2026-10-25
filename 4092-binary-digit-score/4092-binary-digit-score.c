int calculateScore(int a, int b) {
    int A = 0, B = 0;
    while (a) {
        A = A * 10 + a % 2;
        a /= 2;
    }
    while (b) {
        B = B * 10 + b % 2;
        b /= 2;
    }
    int countA = 0, countB = 0;
    while (A) {
        if (A % 10) {
            countA++;
        }
        A /= 10;
    }
    while (B) {
        if (B % 10) {
            countB++;
        }
        B /= 10;
    }
    if (countA >= countB) {
        return countA * countB;
    }
    return countB / countA;
}