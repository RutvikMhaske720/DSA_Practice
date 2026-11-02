class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0];
        int hare = nums[0];
        
        do {
            tortoise = nums[tortoise];           
            hare = nums[nums[hare]];             
        } while (tortoise != hare);
        
        // Phase 2: Find the entrance to the cycle (the duplicate number).
        tortoise = nums[0];                      // reset tortoise to the start
        while (tortoise != hare) {
            tortoise = nums[tortoise];           // move both at the same speed
            hare = nums[hare];
        }
        
        return hare;
    }
};