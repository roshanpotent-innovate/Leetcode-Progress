int mySqrt(int x) {
    int left = 0;
    int right = x;
    long long mid;
    while(left <= right){
        mid = (left + right)/2;
        if(mid * mid == x){
            return mid;
        }else if(mid * mid > x){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return right;
}