int ChickenRabbit(int *chicken, int *rabbit, int head, int foot) {
    if (head < 0 || foot < 0 || foot % 2 != 0 || foot > head * 4 || foot < head * 2) {
        return 0;
    }

    *chicken = (4 * head - foot) / 2;
    *rabbit = head - *chicken;

    if (*chicken < 0 || *rabbit < 0 || *chicken + *rabbit != head) {
        return 0;
    }

    return 1;
}
