int longestPalindromeSubseq(char* s) {
    int n = strlen(s);
    char *r = malloc((n) * sizeof(char));
    int j = n-1;
    for(int i = 0; s[i]!= '\0'; i++){
        r[i] = s[j];
        j--;
    }
    int arr[n+1][n+1];
    for(int i = 0; i<=n; i++){
        arr[0][i] = 0;
        arr[i][0] = 0;
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(s[i-1] == r[j-1]){
            arr[i][j] = arr[i-1][j-1]+1;
        }else{
            int top = arr[i-1][j];
            int left = arr[i][j-1];
            if(top > left){
                arr[i][j] = top;
            }else{
                arr[i][j] = left;
            }
        }
        }
    }
    return arr[n][n];
}