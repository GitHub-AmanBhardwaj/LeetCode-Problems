class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> a(2);
        a[1]=celsius*1.80+32.00;
        a[0]=celsius+273.15;
        return a;
    }
};