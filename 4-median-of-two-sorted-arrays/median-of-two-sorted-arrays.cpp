class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        a.insert(a.end(),b.begin(),b.end());
        sort(a.begin(),a.end());
        if(a.size()%2!=0){
            return a[a.size()/2];
        }
        double ans=(double)(a[a.size()/2]+a[a.size()/2-1])/2;
        return ans;
    }
};