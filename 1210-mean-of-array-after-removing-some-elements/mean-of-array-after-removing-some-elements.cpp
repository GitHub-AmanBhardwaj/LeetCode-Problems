class Solution {
public:
    double trimMean(vector<int>& arr) {
        int k=arr.size()*0.05;
        sort(arr.begin(),arr.end());
        arr.erase(arr.begin(),arr.begin()+k);
        arr.erase(arr.end()-k,arr.end());
        double c=0;
        for(int i:arr){
            c+=i;
        } 
        double m=c/arr.size();
        return m;
    }
};