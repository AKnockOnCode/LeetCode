int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    int change = 0;
    qsort(seats, seatsSize, sizeof(int), compare);
    qsort(students, studentsSize, sizeof(int), compare);
    for (int i = 0; i < seatsSize; i++){
        change += abs(seats[i]-students[i]);
    }
    return change;
}