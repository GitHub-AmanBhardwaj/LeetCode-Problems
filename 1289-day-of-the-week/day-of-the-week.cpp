class Solution {
public:
    string dayOfTheWeek(int d, int m, int y) {
        static int a[] ={0,3,2,5,0,3,5,1,4,6,2,4};
        if(m<3){
            y--;
        }
        int c=(y+y/4-y/100+y/400+a[m-1]+d)%7;
        string w[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        return w[c];
    }
};