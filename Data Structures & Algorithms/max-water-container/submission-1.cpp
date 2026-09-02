class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s = 0;
        int e = heights.size()-1;
        int water = 0;
        int ans = INT_MIN;
        while(s < e){
            water = 0;
            water = (e-s)*min(heights[s],heights[e]);
            ans= max(water,ans);
            if(heights[s] < heights[e]){
                s++;
            }
            else{
                e--;
            }
        }

        return ans;

    }
};
