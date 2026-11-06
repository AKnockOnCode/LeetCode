int secondsBetweenTimes(char* startTime, char* endTime) {
    int secs = 0;
    int hours = endTime[0]*10 + endTime[1] - startTime[0]*10 - startTime[1];
    secs += hours * 3600;
    int mins = endTime[3]*10 + endTime[4] - startTime[3]*10 - startTime[4];
    secs += mins * 60;
    int sec = endTime[6]*10 + endTime[7] - startTime[6]*10 - startTime[7];
    secs += sec;
    return secs;
}