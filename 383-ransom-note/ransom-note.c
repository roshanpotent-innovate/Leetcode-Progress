#include<string.h>
bool canConstruct(char* ransomNote, char* magazine) {
    int rl = strlen(ransomNote);
    int ml = strlen(magazine);
    int count[26];
    for(int i = 0; i < 26; i++){
        count[i] = 0;
    }
    for(int i = 0; i < rl; i++){
        count[ransomNote[i] - 'a']++;
    }
    for(int j = 0; j<ml; j++){
        count[magazine[j] - 'a']--;
    }
    for(int i = 0; i<rl; i++){
        if(count[ransomNote[i] - 'a'] > 0){
            return false;
        }
    }
    return true;
}