int maxDistinct(char* s) {
    int hash[26]={0};
    for (int i = 0;s[i]!='\0';i++){
        hash[s[i]-'a']++;
    }
    int count = 0;
    for (int i='a';i<='z';i++){
        if (hash[i-'a']){
            count++;
        }
    }
    return count;
}