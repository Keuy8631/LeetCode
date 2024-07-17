#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))
int maxArea(int* height, int heightSize) {
    int i=0, j=heightSize-1, area=0;
    while(i<j){
        area = max(area, (j-i)*min(height[i], height[j]));
        height[i]<height[j] ? i++ : j--;
    }
    return area;
}