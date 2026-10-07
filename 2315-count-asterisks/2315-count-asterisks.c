int countAsterisks(char* s) {
   int count = 0, close = 0;
    for (int i = 0;s[i]!='\0';i++){
        if (s[i]=='|'){
            close ^= 1;
        }
        if (s[i]=='*' && !close){
            count++;
        }
    }
    return count;
}