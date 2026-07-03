class Solution {
public:
    double minimumAverage(vector<int>& nums) {
      
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        double min_avg = 100.0; 
        
              for (int i = 0; i < n / 2; ++i) {
                       double current_avg = (nums[i] + nums[n - 1 - i]) / 2.0;
            
                       if (current_avg < min_avg) {
                min_avg = current_avg;
            }
        }
        
        return min_avg;
    }
};