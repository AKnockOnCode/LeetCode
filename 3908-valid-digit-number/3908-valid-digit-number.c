bool validDigit(int n, int x) {
    int arr[6];
    int i=0;
    int a = n;
    int count = 0;
    while (a){
        arr[i++]=a%10;
        a/=10;
        count++;
    }
    int check = 0;
    for (i=0;i<count;i++){
        if (arr[i]==x){
            check = 1;
        }
    }
    if (n!=0 && arr[count-1]!=x && check ==1)return true;
    return false;
}