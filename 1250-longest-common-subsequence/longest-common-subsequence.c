#include<string.h>
int longestCommonSubsequence(char* text1, char* text2) {
    int n = strlen(text1);
    int m = strlen(text2);
    int arr[n+1][m+1];
    for(int i = 0; i<=m;i++){
        arr[0][i] = 0;
    }
    for(int i = 0; i<=n;i++){
        arr[i][0] = 0;
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(text1[i-1] == text2[j-1]){
                arr[i][j] = arr[i-1][j-1] + 1;
            }
            else{
                int top = arr[i-1][j];
                int left = arr[i][j-1];
                if(top>left){
                    arr[i][j] = top;
                }else{
                    arr[i][j] = left;
                }
            }
        }
    }
    return arr[n][m];
}