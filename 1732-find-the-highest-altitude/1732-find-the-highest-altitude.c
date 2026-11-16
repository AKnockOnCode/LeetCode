int largestAltitude(int* gain, int gainSize) {
    int sum = 0;
    int max = 0;
    for (int i = 0; i < gainSize; i++){
        sum += gain[i];
        if (sum > max){
            max = sum;
        }
    }
    return max;
}