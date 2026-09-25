int xorOperation(int n, int start) {
    int arr[n];
    int i;
    for (i=0;i<n;i++){
        arr[i]=start+2*i;
    }
    int result = arr[0];
    for (i=1;i<n;i++){
        result ^= arr[i];
    }
    return result;
}