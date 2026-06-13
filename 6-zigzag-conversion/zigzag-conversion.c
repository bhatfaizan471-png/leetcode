#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    int n = strlen(s);
    if (numRows == 1 || numRows >= n) return s;

    // Allocate buffers for each row
    char** rows = (char**)malloc(numRows * sizeof(char*));
    int* sizes = (int*)calloc(numRows, sizeof(int));
    for (int i = 0; i < numRows; i++) {
        rows[i] = (char*)malloc((n + 1) * sizeof(char));
    }

    int currRow = 0, dir = 1; // dir: 1 = down, -1 = up

    for (int i = 0; i < n; i++) {
        rows[currRow][sizes[currRow]++] = s[i];

        if (currRow == 0) dir = 1;
        else if (currRow == numRows - 1) dir = -1;

        currRow += dir;
    }

    // Combine rows
    char* result = (char*)malloc((n + 1) * sizeof(char));
    int k = 0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            result[k++] = rows[i][j];
        }
        free(rows[i]);
    }
    result[k] = '\0';
    free(rows);
    free(sizes);
    return result;
}
