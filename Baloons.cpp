class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int curr_index = 0;
        int ans = 0;

        while(curr_index < colors.size() ){
            int next_index = curr_index +1;
            
            int sum = neededTime[curr_index];
            int maxiTime = sum;
            
            while(next_index < colors.size()  && colors[next_index] == colors[curr_index]){
                sum += neededTime[next_index];
                maxiTime = max(maxiTime , neededTime[next_index]);
                next_index++;
            }
            ans += sum - maxiTime;
            curr_index = next_index;
        }
        return ans;
    }
};