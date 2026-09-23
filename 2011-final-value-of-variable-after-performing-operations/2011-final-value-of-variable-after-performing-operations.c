int finalValueAfterOperations(char** operations, int operationsSize) {
    int i;
    int count = 0;
    for (i=0;i<operationsSize;i++){
        if (operations[i][1]=='-'){
            count--;
        }
        else{
            count++;
        }
    }
    return count;
}