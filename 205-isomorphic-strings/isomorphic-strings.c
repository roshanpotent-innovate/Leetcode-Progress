bool isIsomorphic(char* s, char* t) {
    int sl = strlen(s);
    int tl = strlen(t);

    if(sl != tl){
        return false;
    }

    int map1[256],map2[256];
    
    for(int i =0;i<256;i++){
        map1[i]=-1;
        map2[i]=-1;
    }

    for(int i=0;s[i] != 0;i++){
        char a=s[i];
        char b=t[i];
        if(map1[a] != -1 && map1[a] != t[i]){
            return false;
        }

        if(map2[b] != -1 && map2[b] != s[i]){
            return false;
        }

        map1[s[i]] = t[i];
        map2[t[i]] = s[i];
    }
    return true;
}