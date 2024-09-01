class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;
        for(int asteroid:asteroids){
            bool d=0;
            while(!stack.empty()&&asteroid<0&&stack.back()>0){
                if(stack.back()<-asteroid){
                    stack.pop_back();
                    continue;
                }else if(stack.back()==-asteroid){
                    stack.pop_back();
                }
                d=1;
                break;
            }
            
            if(!d){
                stack.push_back(asteroid);
            }
        }
        return stack;
    }
};
