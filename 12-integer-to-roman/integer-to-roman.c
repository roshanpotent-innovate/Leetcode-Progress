char* intToRoman(int num) {
    char *rows[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *ans = malloc(20);
    ans[0] = '\0';
    for(int i = 0; i<13;i++){
        while(num>=value[i]){
            strcat(ans, rows[i]);
            num = num - value[i];
        }
    }
    return ans;
}