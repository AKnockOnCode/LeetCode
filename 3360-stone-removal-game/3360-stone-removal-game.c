bool canAliceWin(int n) {
    int check = 10;
    int turn = 0;
    while (n) {
        if (n >= check) {
            n -= check--;
        } else {
            break;
        }
        turn++;
    }
    if (turn % 2) {
        return true;
    } else {
        return false;
    }
}