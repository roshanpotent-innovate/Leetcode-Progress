bool ispal(char *s,int i, int j){
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
bool validPalindrome(char* s) {
    int l = 0;
    int r = strlen(s) - 1;
    int count = 0;
    while(l < r){
        if(s[l] == s[r]){
            l++;
            r--;
        }else{
            return ispal(s,l+1,r) || ispal(s,l,r-1);
        }
    }
    return true;
}