
//                          ❌❌❌❌❌ ARRAY ❌❌❌❌❌

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

// 🔴 3SUM : https://leetcode.com/problems/3sum/

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> ans;

//         for(int i = 0; i<n; i++)
//         {
//             if(i>0 && nums[i-1] == nums[i]) continue;
//             int j = i+1;
//             int k = n-1;
//             while(j<k)
//             {
//                 int sum = nums[i]+nums[j]+nums[k];
//                 if(sum>0) k--;
//                 else if(sum<0)j++;
//                 else
//                 {
//                     ans.push_back({nums[i],nums[j],nums[k]});
//                     j++;
//                     k--;
//                     while(j<k&&nums[j]==nums[j-1]) j++;
//                     while(k>j&&nums[k]==nums[k+1])k--;
//                 }
//             }
//         }
//         return ans;
//     }
// };

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

// 🔴 Container With Most Water:  https://leetcode.com/problems/container-with-most-water/

// intuition :
// Two-Pointer
// Area = width*height
// Update the max Area on each steps
// Reduce the width based on smaller height.

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxAns = 0;
//         int left = 0;
//         int right = height.size()-1;

//         while(left < right){
//             int capacity = min(height[left], height[right]) * (right-left);
//             maxAns = max(maxAns, capacity);

//             if(height[left] < height[right]){
//                 left++;
//             }
//             else{
//                 right--;
//             }
//         }

//         return maxAns;
//     }
// };

//                          ❌❌❌❌❌ STRING ❌❌❌❌❌
// 🔥 EASY : 🔥🔥🔥🔥

// 🔴 Valid Anagram : https://leetcode.com/problems/valid-anagram/

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length() != t.length()) return false;

//         unordered_map<char, int> mp;
//         unordered_map<char, int> mp2;
//         for(char ch:s) mp[ch]++;
//         for(char ch:t) mp2[ch]++;

//         if(mp == mp2) return true;
//         else return false;
//     }
// };

// Another Solution:
// class Solution {
// public:
//     int map[26] = {};
//
//     bool isAnagram(string s, string t) {
//         if (s.size() != t.size()) {
//           return false;
//         }

//         for (int i = 0; i < s.size(); i++) {
//             int idx = s[i] - 'a';
//             map[idx]++;
//         }

//         for (int j = 0; j < t.size(); j++) {
//             int idx = t[j] - 'a';
//             map[idx]--;
//         }

//         for (int k = 0; k < 26; k++) {
//             if (map[k] != 0)
//                 return false;
//         }
//         return true;
//     }
// };

// 🔴 Reverse String : https://leetcode.com/problems/reverse-string/

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int i = 0, j = s.size()-1;
//         while(i<j){
//             char temp = s[i];
//             s[i] = s[j];
//             s[j] = temp;
//             i++; j--;
//         }
//     }
// };

// 🔴 First Unique Characters in a String : https://leetcode.com/problems/first-unique-character-in-a-string/

// class Solution {
// public:
//     int firstUniqChar(string s) {
//        vector<int> charFreq(26, 0);

//        for(auto i:s) {
//            charFreq[i - 'a']++ ;
//        }

//        for(int i=0; i<s.length() ;i++){
//            if(charFreq[s[i] - 'a'] == 1){
//                return i;
//            }
//        }

//         return -1;
//     }
// };

// 🔥 MEDIUM : 🔥🔥🔥🔥

// 🔴 longest Substring Without Repeating Characters :  https://leetcode.com/problems/longest-substring-without-repeating-characters

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         if(s.length() == 0) return 0;

//         vector<int> temp;
//         unordered_map<char, int> mp;

//         for(int i=0; i<s.length(); i++){
//             mp[s[i]]++;
//             int count = 1;
//             for(int j=i+1; j<s.length(); j++){
//                 if(mp.find(s[j]) != mp.end()){
//                     break;
//                 }
//                 else{
//                     mp[s[j]]++;
//                     count++;
//                 }
//             }
//              temp.push_back(count);
//              mp.clear();
//         }

//         return *max_element(temp.begin(), temp.end());
//     }
// };

// OPTIMISED :

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         if(s.length() == 0) return 0;

//         unordered_map<char, int> charMap;
//         int left = 0, maxLength = 0;

//     for (int right = 0; right < s.length(); right++) {
//         if (charMap.find(s[right]) != charMap.end()) {
//             left = max(left, charMap[s[right]] + 1);
//         }

//         charMap[s[right]] = right;
//         maxLength = max(maxLength, right - left + 1);
//     }

//         return maxLength;
//     }
// };

//                          ❌❌❌❌❌ LINKEDIN LIST ❌❌❌❌❌
// 🔥 EASY : 🔥🔥🔥🔥
// 🔥 MEDIUM : 🔥🔥🔥🔥