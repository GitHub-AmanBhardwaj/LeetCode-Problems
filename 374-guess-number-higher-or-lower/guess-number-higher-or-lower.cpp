/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int h=n;
        int l=0;
        while(l<=h){    
            int g=l+(h-l)/2;
            int a=guess(g);
            if(a==0){
                return g;
            }else if(a==1){
                l=g+1;
            }else{
                h=g-1;
            }
        }
        return -1;
    }
};