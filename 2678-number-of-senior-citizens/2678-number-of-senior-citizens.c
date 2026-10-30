int countSeniors(char** details, int detailsSize) {
    int count = 0;
    for (int i = 0; i< detailsSize;i++){
        if ((details[i][11]-48)*10+(details[i][12]-48)>60){
            count++;
        }
    }
    return count;
}