int lengthOfLastWord(char* s) {
    int n = strlen(s) -1;
    int c =0;
    while(n>=0 && s[n] == ' '){
        n--;
    }
    while (n>=0 && s[n] != ' '){
        c++;
        n--;
    }
    return c;
}