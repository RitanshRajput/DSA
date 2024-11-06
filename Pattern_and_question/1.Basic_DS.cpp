// 🔥 EASY : 🔥🔥🔥🔥

// 🔴 TWO SUM : https://leetcode.com/problems/two-sum/

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> mp;

//         for(int i=0; i<nums.size(); i++){
//             int remainingSum = target-nums[i];

//             if(mp.find(remainingSum) != mp.end()){
//                 return {mp[remainingSum] , i };
//             }

//             mp[nums[i]] = i;
//         }

//         return  {};
//     }
// };

// 🔴 Contains Duplicate : https://leetcode.com/problems/contains-duplicate/

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         for(int i:nums){
//             mp[i]++;
//             if(mp[i] == 2) return true;
//         }

//         return false;
//     }
// };

// 🔴 Best Time to Buy and Sell Stock :  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxi = 0 ;
//         int mini = INT_MAX ;

//       for(int i=0; i<prices.size(); i++) {
//          mini = min(mini, prices[i]);
//          maxi = max(maxi, prices[i]-mini) ;
//       }

//       return maxi ;
//     }
// };

// 🔥 MEDIUM: 🔥🔥🔥🔥🔥

// 🔴 Product of Array Except Self:  https://leetcode.com/problems/product-of-array-except-self/

// class Solution {
// public:
//      vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();

//         vector<int> prefix(n, 1);
//         vector<int> suffix(n, 1);

//         for (int i = 1; i < n; ++i) {
//             prefix[i] = prefix[i - 1] * nums[i - 1];
//         }

//         for (int i = n - 2; i >= 0; --i) {
//             suffix[i] = suffix[i + 1] * nums[i + 1];
//         }

//         vector<int> answer(n);
//         for (int i = 0; i < n; ++i) {
//             answer[i] = prefix[i] * suffix[i];
//         }

//         return answer;
//     }
// };