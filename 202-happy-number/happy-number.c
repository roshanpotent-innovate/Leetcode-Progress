int sumOfDigitSq(int n){
    int sum = 0;
    while(n != 0){
        int rem = n%10;
        n = n/10;
        sum += (rem*rem);
    }
    return sum;
}
bool isHappy(int n) {
    while(true){
        if(n == 1 || n == 7) return true;
        if(n < 10) return false;
        n = sumOfDigitSq(n);
    }


}