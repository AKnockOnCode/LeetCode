int maxDistinct(char* s) {
    int hash[123]={0};
    for (int i = 0;s[i]!='\0';i++){
        hash[(int)s[i]]++;
    }
    int count = 0;
    for (int i='a';i<='z';i++){
        if (hash[i]){
            count++;
        }
    }
    return count;
}