class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i!=j){
            area= max(area,min(height[i],height[j])*(j-i));
            if(height[i]>height[j])j--;
            else i++;
        }
        return area;
         
    }
};