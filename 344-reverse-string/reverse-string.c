void reverseString(char* s, int sSize) {
    char temp;
    int right = sSize - 1;
    for(int left = 0; left<right; left++,right--){
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
    }
}