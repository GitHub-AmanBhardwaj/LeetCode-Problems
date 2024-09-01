class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int t=arr.size()/4;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>t){
                return it->first;
            }
        }
        return -1;
    }
};