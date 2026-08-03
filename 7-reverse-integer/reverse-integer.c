int reverse(int x){
    long int rev=0,ld;
    while(x!=0){
        ld=x%10;
        rev = (rev*10)+ld;
        x=x/10;
    }
    if(rev>2147483647 || rev<-2147483647)
        return 0;
    else
        return rev;
}