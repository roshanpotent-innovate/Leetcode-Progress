bool isIsomorphic(char* s, char* t) {
    int sl = strlen(s);
    int tl = strlen(t);

    if(sl != tl){
        return false;
    }

    int map1[256], map2[256];
    
    for(int i = 0; i < 256; i++){
        map1[i] = 0;
        map2[i] = 0;
    }

    for(int i = 0; s[i] != 0; i++){
        if(map1[s[i]] != 0 && map1[s[i]] != t[i]){
            return false;
        }

        if(map2[t[i]] != 0 && map2[t[i]] != s[i]){
            return false;
        }

        map1[s[i]] = t[i];
        map2[t[i]] = s[i];
    }
    return true;
}