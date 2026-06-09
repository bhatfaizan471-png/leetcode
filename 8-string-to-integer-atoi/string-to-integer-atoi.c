int myAtoi(char* s) {
    int i = 0, sign = 1;
    long result = 0;

    // 1. Skip leading spaces
    while (s[i] == ' ') i++;

    // 2. Handle sign
    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') sign = -1;
        i++;
    }

    // 3. Convert digits
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');

        // 4. Handle overflow
        if (sign == 1 && result > 2147483647)
            return 2147483647;
        if (sign == -1 && -result < -2147483648)
            return -2147483648;

        i++;
    }

    return (int)(sign * result);
}
