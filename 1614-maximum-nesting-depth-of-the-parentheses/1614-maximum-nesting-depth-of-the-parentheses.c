int maxDepth(char* s) {
   int length = strlen(s);
   int depth = 0;
   int max = 0;
   for (int i = length - 1; i >= 0; i--){
    if (s[i]==')'){
        depth++;
    }
    if (depth > max){
        max  = depth;
    }
    if (s[i]=='('){
        depth--;
    }
   }
   return max;
}