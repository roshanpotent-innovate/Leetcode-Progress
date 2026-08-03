bool isPalindrome(int x) {
  long int rev = 0,temp=x,ld;
    if(x<0){
        return false;
    }else{
    while(x!=0){
        ld=x%10;
        rev = (rev*10)+ld;
        x=x/10;
    }
    if(temp==rev){
        return true;
    }else{
        return false;
    }
}
}