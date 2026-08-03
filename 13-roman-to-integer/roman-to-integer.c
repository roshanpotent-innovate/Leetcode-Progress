int romanToInt(char* s) {
    int count = 0;
    int len = strlen(s);
    printf("%d",len);
    for(int i = 0; i < len; i++){
        switch(s[i]){
            case 'I':
            if(s[i+1] == 'V'){
                count = count + 5 - 1;
                i++;
            }else if(s[i+1] == 'X'){
                count = count + 10 - 1;
                i++;
            }
            else{
                count += 1;
            }
            break;
            case 'V':
            count += 5;
            break;
            case 'X':
            if(s[i+1] == 'L'){
                count = count + 50 - 10;
                i++;
            }else if(s[i+1] == 'C'){
                count = count + 100 - 10;
                i++;
            }
            else{
                count += 10;
            }
            break;
            case 'L':
            count += 50;
            break;
            case 'C':
            if(s[i+1] == 'D'){
                count = count + 500 - 100;
                i++;
            }else if(s[i+1] == 'M'){
                count = count + 1000 - 100;
                i++;
            }
            else{
                count += 100;
            }
            break;
            case 'D':
            count += 500;
            break;
            case 'M':
            count += 1000;
            break;
        }
    }
    return count;
}