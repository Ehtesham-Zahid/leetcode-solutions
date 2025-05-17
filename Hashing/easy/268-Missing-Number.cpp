class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() + 1;
        vector<int> hashArray(n, 0);

        for(int i = 0; i < nums.size(); i++){
            hashArray[nums[i]]++;
        }

        for(int i = 0; i < n; i++){
            if(hashArray[i] == 0){
                return i;
            }
        }
        
        return 0;
    }
};