int findComplement(int num) {
    long result = 0, power = 1;
    while(num > 0){
        int bit = num%2;
        int flipped = 1 - bit;
        result = result + flipped * power;
        power = power*2;
        num = num/2;
    }
    return result;
}