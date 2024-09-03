class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>a;
        for(int i=1;i<=n;i++){
            a.push_back(i);
        }
        int p=0;
        while(a.size()>1){
            p=(p+k-1)%a.size();
            a.erase(a.begin()+p);
        }

        return a[0];
    }
};