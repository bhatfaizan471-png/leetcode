char* intToRoman(int num) {
    static char result[20];   // enough for max 3999
    int i = 0;

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* symbols[] = {"M", "CM", "D", "CD", "C", "XC",
                       "L", "XL", "X", "IX", "V", "IV", "I"};

    int k = 0;
    while (num > 0) {
        if (num >= values[k]) {
            result[i++] = symbols[k][0];
            if (symbols[k][1] != '\0')
                result[i++] = symbols[k][1];
            num -= values[k];
        } else {
            k++;
        }
    }

    result[i] = '\0';
    return result;
}
