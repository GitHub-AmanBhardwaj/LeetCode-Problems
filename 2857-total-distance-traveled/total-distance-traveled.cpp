class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int c=0;
        while(mainTank>0){
            mainTank--;
            c++;
            if(c!=0&&c%5==0&&additionalTank>0){
                mainTank++;
                additionalTank--;
            }
        }
        return c*10;
    }
};