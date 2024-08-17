class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        int sum =0;
        int m = INT_MIN;
        while(end<nums.size()){
            sum = sum + nums[end];
            if(end>=k-1){
                m = max(sum,m);
                sum = sum + - nums[start];
                start++;
            }
            end++;
        }
        double s;
        
        s=(double)m/k;
        return s; 

    }
};
