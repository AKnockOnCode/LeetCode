int earliestTime(int** tasks, int tasksSize, int* tasksColSize) {
    int sum = 0, max = 200;
    for (int i = 0;i<tasksSize;i++){
        sum += tasks[i][0] + tasks[i][1];
        if (sum<max){
            max = sum;
        }
        sum = 0;
    }
    return max;
}