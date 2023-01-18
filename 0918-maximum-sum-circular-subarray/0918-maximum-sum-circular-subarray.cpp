class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int max_sum = INT_MIN;
        int min_sum = INT_MAX;
        
        int array_sum = 0;

        int temp_maxSum = 0;
        int temp_minSum = 0;

        for(int i=0;i<n;i++){
            array_sum += nums[i];
            
            temp_maxSum += nums[i];
            if(max_sum < temp_maxSum)
            {
                max_sum = temp_maxSum;
            }
            else{
                max_sum = max_sum;
            }

            if(temp_maxSum < 0){
                temp_maxSum = 0;
            }
            else{
                temp_maxSum = temp_maxSum;
            }

            temp_minSum += nums[i];
            if(min_sum > temp_minSum)
            {
                min_sum = temp_minSum;
            }
            else{
                min_sum = min_sum;
            }

            if(temp_minSum > 0){
                temp_minSum = 0;
            }
            else{
                temp_minSum = temp_minSum;
            }
        }

        if(array_sum == min_sum){
            return max_sum;
        }
        else{
            return max(max_sum, (array_sum - min_sum));
        }
    }
};

