bool isPalindrome(int x) {
    int original = x;
    long long reverso = 0;

    while(x > 0) {
        int digito = x % 10;
        reverso = reverso * 10 + digito;
        x /= 10;
    }

    return original == reverso;
}
