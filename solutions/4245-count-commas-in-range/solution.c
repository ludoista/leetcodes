int countCommas(int n) {
    if ( n < 1000 ) {
        return 0;
    }

    int r = 0;
    if ( n >= 1000 && n < 1000000 ) {
        r = n-999;
        return r;
    }
    return 0;
}
