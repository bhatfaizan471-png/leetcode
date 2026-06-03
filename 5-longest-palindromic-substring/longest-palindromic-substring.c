char* longestPalindrome(char* s) {
    int start = 0, maxLen = 1;

    for (int i = 0; s[i] != '\0'; i++) {
        // Odd length palindrome
        int left = i, right = i;
        while (left >= 0 && s[right] != '\0' && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;
        while (left >= 0 && s[right] != '\0' && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    s[start + maxLen] = '\0';
    return s + start;
}
