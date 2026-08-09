int strStr(char* haystack, char* needle) {
    int strl = strlen(haystack);
    int strn = strlen(needle);
    for(int i = 0; i<=strl-strn; i++){
        int j = 0;
        while((i+j < strl) && (j < strn) && (haystack[i+j] == needle[j])){
            j++;
        }
        if(j == strn){
            return i;
        }
    }
    return -1;
}