#include<string.h>
bool isAnagram(char* s, char* t) {
    int count[26] = {0};
    int sn = strlen(s);
    int tn = strlen(t);
    if(sn != tn){
        return false;
    }
    for(int i = 0; s[i] != '\0'; i++){
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for(int i = 0;i<26;i++){
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}