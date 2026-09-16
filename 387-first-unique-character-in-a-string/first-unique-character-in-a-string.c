int firstUniqChar(char* s) {
 int f[26];
 for(int i=0;i<26;i++){
    f[i]=0;
 }
 for(int i=0;i<strlen(s);i++){
    f[s[i] -'a']++;
 }
 for(int i=0;i<strlen(s);i++){
 if(f[s[i] - 'a'] == 1){
    return i;
 }
}
return -1;
}