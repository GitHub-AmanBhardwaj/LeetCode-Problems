class Solution {
public:
    int thirdMax(vector<int>& a) {
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());

        if(a.size()<3){
            return *max_element(a.begin(), a.end());
        }else if(a.size()==3){
            return *min_element(a.begin(), a.end());
        }
        return a[a.size()-3];
    }
};