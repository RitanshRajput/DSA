
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

// 🔴 Group Anagrams : https://leetcode.com/problems/group-anagrams/

// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>> ans;
//         unordered_map<string, int> um;
//         int id = 0;

//         for (string s: strs) {
//             string k = s;
//             sort(k.begin(), k.end());

//             if (um.find(k) != um.end()){
//                 ans[um[k]].push_back(s);
//             }
//             else {
//                 um[k] = id++;
//                 ans.push_back({s});
//             }
//         }

//         return ans;
//     }
// };

// 🔴 Longest Palindromic Substring:   https://leetcode.com/problems/longest-palindromic-substring/
// class Solution {
// public:
//     string checkPalindrome(string s, int left, int right){
//         while(left >= 0 && right <s.length() && s[left] == s[right]){
//             left--;
//             right++;
//         }

//         return s.substr(left+1, right-left-1);
//     }

//     string longestPalindrome(string s) {
//        string longestAns = "";

//         for(int i=0; i<s.length(); i++){
//             string odd = checkPalindrome(s, i, i);
//             string even = checkPalindrome(s, i, i+1);

//             if(odd.length() > longestAns.length()) longestAns = odd;
//             if(even.length() > longestAns.length()) longestAns = even;

//         }

//         return longestAns;
//     }
// };

//                          ❌❌❌❌❌ LINKEDIN LIST ❌❌❌❌❌
// 🔥 EASY : 🔥🔥🔥🔥

// 🔴🔴 Reverse the Linked List : https://leetcode.com/problems/reverse-linked-list/
//  class Solution {
//  public:
// 🔴 Recursive Intuition:
//     ListNode* solveRecursively(ListNode* prev, ListNode* curr){
//         if(curr == NULL) return prev;

//        ListNode* nxt = curr->next;
//        curr->next = prev;

//        return solveRecursively(curr, nxt);
//    }
//    ListNode* reverseList(ListNode* head) {
//        return solveRecursively(NULL, head);
//     }

// 🔴Interative Intuition :
//      ListNode* reverseList(ListNode* head) {
//          ListNode* prev = NULL;
//          ListNode* curr = head;
//          ListNode* nxt = head;

//         while(nxt != NULL && curr != NULL){
//             nxt = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nxt;
//         }

//         return prev;
//     }
// };

// 🔴🔴 Linked List Cycle:  https://leetcode.com/problems/linked-list-cycle/

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* fast = head;
//         ListNode* slow = head;

//         while(fast != NULL && fast->next != NULL){

//             fast = fast->next->next;
//             slow = slow->next;

//             if(fast == slow) return true;
//         }

//         return false;
//     }
// };

// 🔴🔴  Merge Two Sorted Linked List:  https://leetcode.com/problems/merge-two-sorted-lists/

// 🔴Interative Intuition :
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

//         ListNode resultList(-1);
//         ListNode* curr = &resultList;

//         while(list1 != NULL && list2 != NULL){
//             if(list1->val < list2->val){
//                 curr->next = list1;
//                 list1 = list1->next;
//             }
//             else{
//                 curr->next = list2;
//                 list2 = list2->next;
//             }
//             curr = curr->next;
//         }

//         if(list1 != NULL) curr->next = list1;
//         else curr->next = list2;

//         return resultList.next ;
//     }
// };

// 🔴 Recursive Intuition:
// Time Complexity : O(N+M)
// Space Complexity : O(N)
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if (list1 == NULL) return list2;
//         if (list2 == NULL) return list1;

//         if (list1->val < list2->val) {
//             list1->next = mergeTwoLists(list1->next, list2);
//             return list1;
//         } else {
//             list2->next = mergeTwoLists(list1, list2->next);
//             return list2;
//         }
//     }
// };

// 🔥 MEDIUM : 🔥🔥🔥🔥

// 🔴🔴 Remove Nth node from the End of List : https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// class Solution {
// public:
// //🔴Intuition 3: (Recursive)
//  ListNode* solve(ListNode* head, int n, int& count) {
//         if (head == NULL) return NULL;
//         head->next = solve(head->next, n, count);
//         count++;
//         if (count == n)  return head->next;

//         return head;
//     }

//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int count = 0;
//         ListNode* newHead = solve(head, n, count);
//         return newHead == NULL ? head->next : newHead;
//     }

// //🔴Intuition 2: Iterative (Two Pointer)
//       ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* first = head;
//         ListNode* second = head;
//         ListNode* temp = head;

//         for(int i=0; i<n; i++){
//             first = first->next;
//         }

//         if(first == NULL) return head->next;

//         while(first->next != NULL){
//             second = second->next;
//             first = first->next;
//         }

//         ListNode* removeNode = second->next;
//         second->next = second->next->next;

//         delete removeNode;

//         return head;
//      }

// // 🔴Intuition 1: (Iteratvie)
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int size = 0;
//         ListNode* curr = head;

//         while(curr != NULL){
//             size++;
//             curr = curr->next;
//         }

//         if(size == n ) return head->next;
//         size = size- n;
//         curr = head;

//         while(size > 1) {
//             curr = curr->next;
//             size--;
//         }
//         curr->next = curr->next->next;

//         return head;
//     }
// };

// 🔴🔴 Add Two Numbers: https://leetcode.com/problems/add-two-numbers/

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* dummy = new ListNode(0);
//         ListNode* curr = dummy;
//         int carry = 0;

//         while(l1!=NULL || l2!=NULL || carry!=0)
//         {
//             int sum = carry;
//             if(l1!=NULL)
//             {
//                 sum+=l1->val;
//                 l1 = l1->next;
//             }
//             if(l2!=NULL)
//             {
//                 sum+= l2->val;
//                 l2 = l2->next;
//             }
//             carry = sum/10;
//             curr->next = new ListNode(sum%10);
//             curr = curr->next;
//         }
//         return dummy->next;
//     }
// };