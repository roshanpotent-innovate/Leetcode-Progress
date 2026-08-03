// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    long left = 1;
    long right = n;
    long temp;
    while(left <= right){
        long mid = (left + right)/2;
        if(isBadVersion(mid)){
            temp = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return temp;
}