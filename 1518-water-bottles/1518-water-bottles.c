int numWaterBottles(int numBottles, int numExchange) {
    int count = 0, filled = numBottles, empty = 0;
    while (filled) {
        count += filled;
        empty += filled;
        filled = empty / numExchange;
        empty -= filled * numExchange;
    }
    return count;
}