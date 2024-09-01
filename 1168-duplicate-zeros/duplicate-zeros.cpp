class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> a;
        int i=0;
        while(a.size()<arr.size()&&i<arr.size()){
            if(arr[i]==0){
                a.push_back(0);
                if(a.size()!=arr.size())
                a.push_back(0);
            }else{
                a.push_back(arr[i]);
            }
            i++;
        }
        arr.clear();
        arr=a;
    }
};