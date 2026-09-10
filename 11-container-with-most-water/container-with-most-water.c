int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int maxarea = 0;
    while(left < right){
        int wid = right - left;
        int hig = fmin(height[left], height[right]);
        int area = wid*hig;
        maxarea = fmax(maxarea, area);
        if(height[left] < height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxarea;
}