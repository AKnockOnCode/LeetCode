int minimumChairs(char* s) {
    int count = 0, max = 0;
    for (int i = 0; s[i]!='\0';i++){
        if (s[i]=='E'){
            count++;
        }
        else{
            count--;
        }
        if (count>max){
            max = count;
        }
    }
    return max;
}