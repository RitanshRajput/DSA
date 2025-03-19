class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int n=nums.size();
            int c=0;
            for(int i=0;i<n-1;i++){
                if(nums[i]==0){
                    if((i+2)>=n)return -1;
                    nums[i]=!nums[i];
                    nums[i+1]=!nums[i+1];
                    nums[i+2]=!nums[i+2];
                    c++;
                }
            }
            for(int i=0;i<n;i++){
                if(nums[i]==0)return -1;
            }
            return c;
        }
    };