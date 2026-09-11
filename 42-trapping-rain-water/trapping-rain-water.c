int trap(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int leftm = 0;
    int rightm = 0;
    int water = 0;
    while(left < right){
        if(height[left] < height[right]){
            if(height[left] >= leftm){
                leftm = height[left]; 
            }else{
                water = water + leftm - height[left];
            }
            left++;
        }else{
            if(height[right] >= rightm){
                rightm = height[right];
            }else{
                water = water + rightm - height[right];
            }
            right--;
        }
    }
    return water;
}