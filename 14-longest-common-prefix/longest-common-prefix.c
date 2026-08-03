char* longestCommonPrefix(char** strs, int strsSize) {
    int curr = strlen(strs[0]);
    for(int i = 1; i < strsSize; i++){
        int count = 0;
        for(int j = 0; strs[i][j] != '\0' && j < curr; j++){
            if(strs[0][j] == strs[i][j]){
                count++;
            }else{
                break;
            }
        }
        curr = count;
        if(count == 0){
            char *result = malloc(1);
            result[0] = '\0';
            return result;
        }
    }
    char *result = malloc(curr + 1);
    for(int i = 0; i<curr; i++){
        result[i] = strs[0][i];
    }
    result[curr] = '\0';
    return result;
}