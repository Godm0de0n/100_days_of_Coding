int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
        int ms = 0;
        for (size_t i = 0; i < accountsSize; i++) {
            int s = 0;
            for (size_t j = 0; j < *accountsColSize; j++) {
                s += accounts[i][j];
        }
        if (s > ms) {
            ms = s;
        }
    }
    return ms;
}