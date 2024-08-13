int minSubArrayLen(int target, vector<int>& nums) {
        int winLen = INT_MAX;
        int currSum=0;

        int left=0,right=0;
        while(right<nums.size()){
            currSum+=nums[right];

            while(currSum>=target){
                winLen = min(winLen, right-left+1);
                currSum-=nums[left];
                left++;
            }
            right++;
        }
        if(winLen == INT_MAX){
            return 0;
        }
        return winLen;
    }