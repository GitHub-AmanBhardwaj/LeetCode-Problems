class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int m=0;
        while(i<j){
            int t=(j-i)*((height[i]<height[j])?height[i]:height[j]);
            if(t>m){
                m=t;
            }
            if(height[i]<height[j]){
                ++i;
            }else{
                --j;
            }
        }
        return m;   
    }
};