int equalSubstring(char* s, char* t, int maxCost) {
    int i = 0;
    int l = 0;
    int cost = 0;
    int lm = 0;
    for(i = 0; s[i] != '\0';i++){
        cost = cost + abs(s[i] - t[i]);
        while(cost>maxCost){
            cost = cost - abs(s[l] - t[l]);
            l++;
        }
        int len = i - l + 1;
        if(len > lm){
            lm = len;
        }
    }
    return lm;
}