#include <stdio.h>
#include <string.h>

#define MAXLEN 1000

void Solve(char s1[], char s2[], int m, int n) {
    int LCS[m+1][n+1];


    for (int i = 0; i <= m; ++i)
        LCS[i][0] = 0;
    for (int j = 0; j <= n; ++j)
        LCS[0][j] = 0;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i-1] == s2[j-1])
                LCS[i][j] = LCS[i-1][j-1] + 1;
            else
                LCS[i][j] = (LCS[i][j-1] > LCS[i-1][j]) ? LCS[i][j-1] : LCS[i-1][j];
        }
    }

    int index = LCS[m][n];
    char lcs[index+1];
    lcs[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) { 
        if (s1[i-1] == s2[j-1]) {
            lcs[index-1] = s1[i-1];
            --i;
            --j;
            --index;
        }
        else if (LCS[i-1][j] > LCS[i][j-1])
            --i;
        else
            --j;
    }

    printf("Longest Common Subsequence: %s\n", lcs);
    int count=0;
    for(int i=0;lcs[i] != '\0';i++){
        count++;
    }
    printf("the length of Longest Common Subsequence: %d\n", count);

}

int main() {
    char str1[MAXLEN], str2[MAXLEN];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int m = strlen(str1);
    int n = strlen(str2);

    Solve(str1, str2, m, n);

    return 0;
}