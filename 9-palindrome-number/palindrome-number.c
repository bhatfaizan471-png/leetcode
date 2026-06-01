int isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
        return 0;

    int reversedHalf = 0;

    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    // For even length: x == reversedHalf
    // For odd length:  x == reversedHalf / 10
    return (x == reversedHalf || x == reversedHalf / 10);
}
