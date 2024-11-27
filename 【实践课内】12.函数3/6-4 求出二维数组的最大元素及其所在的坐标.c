// int Row, Col;

int fun(int array[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (array[i][j] > array[Row][Col]) {
                Row = i;
                Col = j;
            }
        }
    }

    return array[Row][Col];
}
