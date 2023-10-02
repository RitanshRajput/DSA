
//                     //🔘🔘 Searching and Sorting 🔘🔘//


//                    //❓Question: First and last occurrences of x

// Given a sorted array arr containing n elements with possibly duplicate  is to find indexes of first elements, the taskand last occurrences of an element x in the given array.
// Note: If the number x is not found in the array then return both the indices as -1.

// Example 1:

// Input:
// n=9, x=5
// arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
// Output:  
// 2 5
// Explanation: 
// First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5. 
// Example 2:

// Input:
// n=9, x=7
// arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
// Output:  
// 6 6
// Explanation: 
// First and last occurrence of 7 is at index 6.
// Your Task:
// Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function find() that takes array arr, integer n and integer x as parameters and returns the required answer.

// Expected Time Complexity: O(logN)
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 106
// 1 ≤ arr[i],x ≤ 109

//🔴approach : brute force

//  vector<int> find(int arr[], int n , int x )
//     {
//         int start = 0;
//         int end = n-1 ;
//         vector<int> ans ;
        
//         while(start < n){
//             if(arr[start] == x) {
//                 ans.push_back(start);
//                 break;
//             }
//             start++ ;
//         }
        
//         while(end >= 0){
//             if(arr[end] == x) {
//                 ans.push_back(end);
//                 break;
//             }
//             end--;
//         }
        
//         if(ans.size() == 0) {
//             ans.push_back(-1);
//             ans.push_back(-1);
//         }
        
//         return ans;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                        //❓Question: Value equal to index value

// Given an array Arr of N positive integers. Your task is to find the elements whose value is equal to 
// that of its index value ( Consider 1-based indexing ).

// Note: There can be more than one element in the array which have the same value as its index. 
// You need to include every such element's index. Follows 1-based indexing of the array.

// Example 1:
// Input:
// N = 5
// Arr[] = {15, 2, 45, 12, 7}
// Output: 2
// Explanation: Only Arr[2] = 2 exists here.

// Example 2:
// Input: 
// N = 1
// Arr[] = {1}
// Output: 1
// Explanation: Here Arr[1] = 1 exists.

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function valueEqualToIndex() which takes the array of integers arr[] and n as parameters and returns an array of indices where the given conditions are satisfied. When there is no such element exists then return an empty array of length 0.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)
 
// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ Arr[i] ≤ 106

//🔴approach :

//    vector<int> valueEqualToIndex(int arr[], int n) {
       
//        vector<int> ans;
//        for(int i=0; i<n; i++){
//            if(i+1 == arr[i]){
//                ans.push_back(i+1);
//            }
//        }
       
//        return ans;
//    }
//🔸time complexity: O(N)
//🔸space complexity: O(N)


//                    //❓Question: Search in a rotated sorted array

// There is an integer array nums sorted in ascending order (with distinct values).
// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length)
// such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
// For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

 
// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Example 2:
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

// Example 3:
// Input: nums = [1], target = 0
// Output: -1
 
// Constraints:
// 1 <= nums.length <= 5000
// -104 <= nums[i] <= 104
// All values of nums are unique.
// nums is an ascending array that is possibly rotated.
// -104 <= target <= 104

//🔴approach : brute force linear search
// int search(vector<int>& nums, int target) {
//         int ans = -1;
        
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] == target){
//                 ans = i;
//                 return ans;
//             }
//         }
        
//         return ans;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1)


//🔴approach : Optimised binary search
// int search(vector<int>& nums, int target) {
//         int start = 0;
//         int end = nums.size()-1;
        
//         while(start <= end){
//             int mid = start+(end-start)/2;
            
//             if(nums[mid] == target){
//                 return mid;
//             }
            
//             if(nums[start] <= nums[mid]) {
//                 if(nums[start] <= target && target < nums[mid]) {
//                     end = mid -1;
//                 }
//                 else{
//                     start = mid + 1;
//                 }
//             }
//             else{
//                 if(target > nums[mid] && target <= nums[end]){
//                     start = mid + 1;
//                 }
//                 else{
//                     end = mid -1 ;
//                 }
//             }
//         }
        
//         return -1;
//     }
//🔸time complexity: O(log n)
//🔸space complexity: O(1)



//                         //❓Question: Count Square

// Consider a sample space S consisting of all perfect squares starting from 1, 4, 9 and so on. 
// You are given a number N, you have to output the number of integers less than N in the sample space S.

// Example 1:
// Input :
// N = 9
// Output:
// 2
// Explanation:
// 1 and 4 are the only Perfect Squares
// less than 9. So, the Output is 2.

// Example 2:
// Input :
// N = 3
// Output:
// 1
// Explanation:
// 1 is the only Perfect Square
// less than 3. So, the Output is 1.
 
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function countSquares() which takes an Integer N as input and returns the answer.

// Expected Time Complexity: O(sqrt(N))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 108


//🔴approach : 
// int countSquares(int N) {
        
//         int count = 0;
//         for(int i=1; i*i<N; i++){
//             count++ ;
//         }
        
//         return count;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                       //❓Question: Middle of three

// Given three distinct numbers A, B and C. Find the number with value in middle 
// (Try to do it with minimum comparisons).

// Example 1:
// Input:
// A = 978, B = 518, C = 300
// Output:
// 518
// Explanation:
// Since 518>300 and 518<978, so 
// 518 is the middle element.

// Example 2:
// Input:
// A = 162, B = 934, C = 200
// Output:
// 200
// Exaplanation:
// Since 200>162 && 200<934,
// So, 200 is the middle element.

// Your Task:
// You don't need to read input or print anything.Your task is to complete the function middle() which takes three integers A,B and C as input parameters and returns the number which has middle value.

// Expected Time Complexity:O(1)
// Expected Auxillary Space:O(1)

// Constraints:
// 1<=A,B,C<=109
// A,B,C are distinct. 

//🔴approach: Brute force

// int middle(int A, int B, int C){
//     int mini = min(A, min(B, C)) ;
//     int maxi = max(A, max(B, C)) ;
    
//     if(mini == A && maxi == B) return C ;
//     else if(mini == A && maxi == C) return B;
//     else if(mini == B && maxi == A) return C;
//     else if(mini == B && maxi == C) return A;
//     else if(mini == C && maxi == A) return B;
//     else if(mini == C && maxi == B) return A;
// }
//🔸time complexity: O(1)
//🔸space complexity: O(1)

//🔴approach: optimised 

// int middle(int A, int B, int C){ 

//         if(A>=B && A>=C)
//         {
//            if(B>=C) return B;
//            else return C;
//         }
//         if(B>=C && B>=A)
//         {
//            if(C>=A) return C;
//            else return A;
//         }
//         if(C>=A && C>=B)
//         {
//             if(A>=B) return A;
//             else return B;
//         } 
//     }
//🔸time complexity: O(1)
//🔸space complexity: O(1)



//                 //❓Question: Optimum location of point to minimize total distance  (HARD)

// Given a set of coordinates points of the form [p, q] and a line L of the form ax + by + c = 0. 
// The task is to find a point on a given line for which the sum of distances from a given set of coordinates is minimum. 
 
// Example 1:
// Input:
// L = {1, -1, -3}
// points[] = {{-3, 2}, {-1, 0}, 
//             {-1, 2}, {1, 2}, {3, 4}}
// Output: 20.77
// Explanation: In above figure optimum location of 
// point of x - y - 3 = 0 line is (2, -1), whose 
// total distance with other points is 20.77, 
// which is minimum obtainable total distance.

// Example 2:
// Input:
// L = {2, 1, 4}
// points[] = {{-1, 2}, {1, 3},{2, 4}}
// Output: 11.20
 
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function findOptimumCost() which takes a line L and coordinates and returns an double up to 2 decimal places as output.

// Expected Time Complexity: O(NlogN)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 105
// -103 <= point[i] <= 103


//🔴approach: 
// double  findTotalDistance(tuple<int,int,int>&l, vector<pair<int,int>>&p, int n,double x )
//     {
//         double a= get<0>(l);
//         double b= get<1>(l);
//         double c= get<2>(l);
//         double y= -1*((a*x)+c)/b;
//         double dist=0;
//         for(auto it:p)
//         {
//             double x1=it.first;
//             double y1= it.second;
//             dist+=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
//         }
//         return dist;
//     }
//     double findOptimumCost(tuple<int,int,int>l, vector<pair<int,int>>p, int n){
//         //Write your code here
//       double low= -1e6;
//       double high= 1e6;
//       double eps=1e-6;
//       while(high-low>eps)
//       {
//           double mid1= low+(high - low)/3;
//           double mid2= high-(high-low)/3;
//           double d1= findTotalDistance(l,p,n,mid1);
//           double d2=  findTotalDistance(l,p,n,mid2);
//           if(d1>d2)  low=mid1;
//           else if(d2>d1) high=mid2;
//           else{
//               low=mid1;
//               high=mid2;
//           }
//       }
//       return ( findTotalDistance(l,p,n,low));
      
//     }
//🔸time complexity: O(N log n)
//🔸space complexity: O(N)



//                      //❓QUestion: Find Missing and Repeating Number

// Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2,....,N} 
// is missing and one number 'B' occurs twice in array. Find these two numbers.

// Example 1:
// Input:
// N = 2
// Arr[] = {2, 2}
// Output: 2 1
// Explanation: Repeating number is 2 and 
// smallest positive missing number is 1.

// Example 2:
// Input:
// N = 3
// Arr[] = {1, 3, 3}
// Output: 3 2
// Explanation: Repeating number is 3 and 
// smallest positive missing number is 2.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findTwoElement() which takes the array of integers arr and n as parameters and returns an array of integers of size 2 denoting the answer ( The first index contains B and second index contains A.)

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 2 ≤ N ≤ 105
// 1 ≤ Arr[i] ≤ N


//🔴approach:
// vector<int> findTwoElement(vector<int> arr, int n) {
     
//         int arr1[n+1] = {0};
//         vector<int> v;
        
//         // mapping every element
//         for(int i=0;i<n;i++){
//             arr1[arr[i]]+=1;
//         }
        
//         // if after mapping any element has map > 1 then repeatation is there
//         for(int i=1;i<n+1;i++){
//             if(arr1[i]>1){
//                 v.push_back(i);
//                 break;
//             }
//         }
        
//         // if any element position has mapping of zero means that element is missing
//         for(int i=1;i<n+1;i++){
//             if(arr1[i]==0){
//                 v.push_back(i);
//                 break;
//             }
//         }
    
//         // if size is 0 then return {0,0}
//         if(v.size()==0){
//             return {0,0};
//         }
//         return v;
//     }
//🔸time complexity: O(3N)
//🔸space complexity: O(N+1)


//🔴approach: Optimised
//  vector<int> findTwoElement(vector<int> arr, int n) 
//     {
//         map<int,int>m;
//         int re=0;
//         int ms=0;
//         int element=1;
        
//         for(int i=0; i<n; i++)
//         {
//             m[arr[i]]++;
//         }
        
//         for(auto it : m)
//         {
//             //repeating element
//             if(it.second>1)
//             {
//                 re=it.first;
//             }
//             //missing element
//             if(m.find(element)!=m.end())
//             {
//                 element++;
//             }
//         }
//         ms=element;
//         return{re,ms};
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)


//                  //❓Question: Majority Element

// Given an array A of N elements. Find the majority element in the array. 
// A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 
// Example 1:
// Input:
// N = 3 
// A[] = {1,2,3} 
// Output:
// -1
// Explanation:
// Since, each element in {1,2,3} appears only once so there is no majority element.

// Example 2:
// Input:
// N = 5 
// A[] = {3,1,3,3,2} 
// Output:
// 3
// Explanation:
// Since, 3 is present more than N/2 times, so it is the majority element.

// Your Task:
// The task is to complete the function majorityElement() which returns the majority element in the array. If no majority exists, return -1.
 
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).
 
// Constraints:
// 1 ≤ N ≤ 107
// 0 ≤ Ai ≤ 106


//🔴approach:
//  int majorityElement(int a[], int size) {    
//       int count =-1;
//       unordered_map<int,int>ans;
//        for(int i=0;i<size;i++)
//        {
//            ans[a[i]]++;
//        }
       
//        size=size/2;
//        for(auto i:ans)
//        {
//            if(i.second>size){
//              count=i.first;
//              break;
//            }
//        }
//         // your code here
//         return count;
//     }
//🔸time complexity: O(2N)
//🔸space complexity: O(N)



//🔴approach: optimised
//  int majorityElement(int a[], int size){
//         int count = 0;
//         int elem;

//         for(int i=0; i<size; i++)
//         {
//             if(count==0){
//                 count = 1; 
//                 elem = a[i];
//             }
//             else if(a[i]==elem){
//                 count++;
//             }
//             else count--;
//         }
//         int cnt=0;
//         for(int i=0; i<size; i++)
//         {
//             if(a[i]==elem) cnt++;
//         }
//         if(cnt>size/2) return elem;
//         return -1;
//  }
//🔸time complexity: O(2N)
//🔸space complexity: O(1)


//                 //❓Question: Searching in an array where adjacent differ by at most

// A step array is an array of integers where each element has a difference of at most k with its neighbor.
// Given a key x, we need to find the index value of x if multiple elements exist, 
// and return the first occurrence of the key.

// Example 1:
// Input : arr[ ] = {4, 5, 6, 7, 6}, K = 1 
//         and X = 6
// Output : 2
// Explanation:
// In an array arr 6 is present at index 2.
// So, return 2.

// Example 2:
// Input : arr[ ] = {20 40 50}, K = 20 
//         and X = 70
// Output :  -1 
 
// Your Task:
// This is a function problem. The input is already taken care of by the driver code. You only need to complete the function search() that takes an array (arr), sizeOfArray (n), an integer value X, another integer value K, and return an integer displaying the index of the element X in the array arr. If the element is not present in the array return -1. The driver code takes care of the printing.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ K ≤ 102
// 1 ≤ arr[i], X ≤ 105

//🔴approch:
// int search(int arr[], int n, int x, int k)
// {
//     // Complete the function	
//     for(int i=0; i<n; i++){
//         if(arr[i] == x){
//             return i ;
//         }
//     }
//     return -1;
// }
//🔸time complexity:  O(N)
//🔸space complexity: O(1)



//                 //❓Question: Find pair given difference

// Given an array Arr[] of size L and a number N, you need to write a program to find if there exists 
// a pair of elements in the array whose difference is N.

// Example 1:
// Input:
// L = 6, N = 78
// arr[] = {5, 20, 3, 2, 5, 80}
// Output: 1
// Explanation: (2, 80) have difference of 78.

// Example 2:
// Input:
// L = 5, N = 45
// arr[] = {90, 70, 20, 80, 50}
// Output: -1
// Explanation: There is no pair with difference of 45.

// Your Task:
// You need not take input or print anything. Your task is to complete the function findPair() which takes array arr, size of the array L and N as input parameters and returns True if required pair exists, else return False.

// Expected Time Complexity: O(L* Log(L)).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1<=L<=104 
// 1<=Arr[i]<=105 
// 0<=N<=105

//🔴approach :
// bool findPair(int arr[], int n, int k){
    
//     // set =  5, 20, 3, 2, 5, 
//     // c1 = 5-78(73) , 20-78(58), 3-78(75), 2-78(76), 5-78(73), 80-78(2)
//     // c2 = 5+78(83) , 20+78(98), 3+78(81), 2+78(80), 5+78(83), 80+78(158)
    
//     unordered_set<int>mp;    
//    for(int i=0;i<size;i++){
//        int c1=arr[i]-n;
//        int c2=arr[i]+n;
       
//        if(mp.find(c1)!=mp.end() ||  mp.find(c2)!=mp.end()){
//            return true;
//        }
//        mp.insert(arr[i]);
//    }
//    return false;
// }
//🔸time complexity: O(N^2 + N)
//🔸space complexity: O(N)

//🔴approach :
// bool findPair(int arr[], int size, int n){
    
//     sort(arr,arr+size);
//     int left=0,right=1;
    
//     while(left<=right && right<=size-1){
        
//         int diff=arr[right]-arr[left];
        
//         if(diff==n && left!=right) {
//             return true;
//         }
//         else if(diff>n) {
//             left++;
//         }
//         else{
//             right++;
//         }
//     }
//     return false;
// }
//🔸time complexity: O(N * logN)        // N is diff to be found
//🔸space complexity: O(1)



//                //❓Question: Find All four sum numbers

// Given an array A of integers and another number K. 
// Find all the unique quadruple from the given array that sums up to K.
// Also note that all the quadruples which you return should be internally sorted, 
// ie for any quadruple [q1, q2, q3, q4] the following should follow: q1 <= q2 <= q3 <= q4.

// Example 1:
// Input:
// N = 5, K = 3
// A[] = {0,0,2,1,1}
// Output: 0 0 1 2 
// Explanation: Sum of 0, 0, 1, 2 is equal to K.

// Example 2:
// Input:
// N = 7, K = 23
// A[] = {10,2,3,4,5,7,8}
// Output: 2 3 8 10 
//         2 4 7 10 
//         3 5 7 8 
// Explanation: Sum of 2, 3, 8, 10 = 23,
// sum of 2, 4, 7, 10 = 23 and sum of 3,
// 5, 7, 8 = 23.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function fourSum() which takes the array arr[] and the integer k as its input and returns an array containing all the quadruples in a lexicographical manner. In the output each quadruple is separate by $. The printing is done by the driver's code.

// Expected Time Complexity: O(N3).
// Expected Auxiliary Space: O(N2).

// Constraints:
// 1 <= N <= 100
// -1000 <= K <= 1000
// -100 <= A[] <= 100


//🔴approach :
// vector<vector<int> > fourSum(vector<int> &arr, int k) {
//   int n = arr.size();
//    vector<vector<int>> ans;
//    sort(arr.begin(), arr.end());
   
//    for(int i = 0; i<n; i++){
//        if(i > 0 && arr[i] == arr[i-1]) continue;
       
//        for(int j = i+1; j< n; j++){
//            if(j > i+1 && arr[j] == arr[j-1]) continue;
//            int z = j+1;
//            int l = n-1;
           
//            while(z < l){
//                long long sum = arr[i];
//                sum += arr[j];
//                sum += arr[z];
//                sum += arr[l];
               
//                if(sum == k){
//                    vector<int>temp = {arr[i], arr[j], arr[z], arr[l]};
//                    ans.push_back(temp);
//                    z++;
//                    l--;
                   
//                    while(z<l && arr[z] == arr[z-1]) z++;
//                    while(z<l && arr[l] == arr[l+1]) l--;
//                }
//                else if(sum < k){
//                    z++;
//                }
//                else{
//                    l--;
//                }
//            }
//        }
//    }
//    return ans;
// }
//🔸time complexity: (N^3)
//🔸space complexity: (N^2)


//                         //❓Question: Stickler Thief 

// Stickler the thief wants to loot money from a society having n houses in a single line. 
// He is a weird person and follows a certain rule when looting the houses. According to the rule, 
// he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. 
// The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy.
// He asks for your help to find the maximum money he can get if he strictly follows the rule. 
// ith house has a[i] amount of money present in it.

// Example 1:
// Input:
// n = 5
// a[] = {6,5,5,7,4}
// Output: 
// 15
// Explanation: 
// Maximum amount he can get by looting 1st, 3rd and 5th house. Which is 6+5+4=15.

// Example 2:
// Input:
// n = 3
// a[] = {1,5,3}
// Output: 
// 5
// Explanation: 
// Loot only 2nd house and get maximum amount of 5.

// Your Task:
// Complete the functionFindMaxSum() which takes an array arr[] and n as input which returns the maximum money he can get following the rules.

// Expected Time Complexity:O(N).
// Expected Space Complexity:O(N).

// Constraints:
// 1 ≤ n ≤ 105
// 1 ≤ a[i] ≤ 104

//🔴approach :
//  int FindMaxSum(int arr[], int n)
//     {
//         // Your code here
//         long prev1=0, prev2=0;
//         for(long i=0;i<n;i++){
//             long temp = prev1;
//             prev1 = max(prev2 + arr[i], prev1);
//             prev2 = temp;
//         }
//         return prev1;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1)


//🔴approach : dp
// int solve(int arr[], int ind, vector<int> &tamatar){
//       if(ind==0){
//           return arr[ind];
//       }
//       if(ind<0){
//           return 0;
//       }
//       if(tamatar[ind]!=-1){
//           return tamatar[ind];
//       }
//       int pick = arr[ind]+solve(arr, ind-2, tamatar);
//       int not_pick = solve(arr, ind-1, tamatar);
//       return tamatar[ind] = max(pick, not_pick);
//   }

//     int FindMaxSum(int arr[], int n)
//   {
//       // Your code here
//       vector<int>tamatar(n+1);
//       for(int i=0; i<n; i++){
//           tamatar[i] = -1;
//       }
//       return solve(arr, n-1, tamatar);
//   }
//🔸time complexity: O(2^n)
//🔸space complexity: O(2N+1)


//               //❓Question: Count triplets with sum smaller than sum

// Given an array arr[] of distinct integers of size N and a value sum, the task is to find the count of triplets (i, j, k), having (i<j<k) with the sum of (arr[i] + arr[j] + arr[k]) smaller than the given value sum.

// Example 1:
// Input: N = 4, sum = 2
// arr[] = {-2, 0, 1, 3}
// Output:  2
// Explanation: Below are triplets with 
// sum less than 2 (-2, 0, 1) and (-2, 0, 3). 
 
// Example 2:
// Input: N = 5, sum = 12
// arr[] = {5, 1, 3, 4, 7}
// Output: 4
// Explanation: Below are triplets with 
// sum less than 12 (1, 3, 4), (1, 3, 5), 
// (1, 3, 7) and (1, 4, 5).

// Your Task:
// This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function countTriplets() that take array arr[], integer N  and integer sum as parameters and returns the count of triplets.

// Expected Time Complexity: O(N2).
// Expected Auxiliary Space: O(1).

// Constraints:
// 3 ≤ N ≤ 103
// -103 ≤ arr[i] ≤ 103

//🔴approach :
// long long countTriplets(long long arr[], int n, long long sum)
// 	{
// 	    sort(arr,arr+n);
//         long long count  = 0;
//         // will go till third last element
//         for(int i = 0;i<n-2;i++)  {
//             // always remains 1 step ahead to i
//             int left = i+1;
//             // remains at end
//             int right = n-1;
           
//             while(left < right) {
//                 if(arr[i]+ arr[left] + arr[right] < sum) {
//                     // if above condition is satisfied then the number of possible triplets
//                     // in the range i to right will be? => right - left
//                     count+=(right-left);
//                     left++;
//                 }
//                 else
//                 right--;
//             }
//         }  
//         return count;
// 	}
//🔸time complexity: O(N^2)
//🔸space complexity: O(1)




//                     //❓Question: Product array puzzle

// Given an array nums[] of size n, construct a Product Array P (of same size n) 
// such that P[i] is equal to the product of all the elements of nums except nums[i].

// Example 1:
// Input:
// n = 5
// nums[] = {10, 3, 5, 6, 2}
// Output:
// 180 600 360 300 900
// Explanation: 
// For i=0, P[i] = 3*5*6*2 = 180.
// For i=1, P[i] = 10*5*6*2 = 600.
// For i=2, P[i] = 10*3*6*2 = 360.
// For i=3, P[i] = 10*3*5*2 = 300.
// For i=4, P[i] = 10*3*5*6 = 900.

// Example 2:
// Input:
// n = 2
// nums[] = {12,0}
// Output:
// 0 12

// Your Task:
// You do not have to read input. Your task is to complete the function productExceptSelf() that takes array nums[] and n as input parameters and returns a list of n integers denoting the product array P. If the array has only one element the returned list should should contains one value i.e {1}
// Note: Try to solve this problem without using the division operation.
 
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)
 
// Constraints:
// 1 <= n <= 1000
// 0 <= numsi <= 200
// Array may contain duplicates.


//🔴approach : brute force
//  vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
//         vector<long long int> ans;
        
//         for(int i=0; i<n; i++){    
//           long long int temp = 1;
//             for(int j=0; j<n; j++){
//                if( j == i ) {
//                    continue;
//                }
//                else{        
//                    temp *= nums[j];
//                }
//             }
//             ans.push_back(temp) ;
//         }
        
//         return ans;
//     }
//🔸time complexity: O(N^2)
//🔸space complexity: O(N)


//🔴approach : Optimal
//  vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
//         //code here 
//         vector<long long int> ans;
//         int zero=0;
//         long long int multiply=1;

//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]!=0)
//             {
//                 multiply=multiply*nums[i];
//             }
//             else{
//                 zero++;
//             }
//         }

//         for(int i=0;i<n;i++){
//             if(nums[i]!=0 && zero<1)
//             {
//                 ans.push_back(multiply/nums[i]);
//             }
//             else if(nums[i]==0 && zero<2)
//             {
//                 ans.push_back(multiply);
//             }
//             else
//             {
//                 ans.push_back(0);
//             }
//         }
//         return ans;   
//     }
//🔸time complexity: O(2N)
//🔸space complexity: O(N)


//                    //❓Question: Sort by Set bit Count

// Given an array of integers, sort the array (in descending order) according to count of set bits in binary representation of array elements. 
// Note: For integers having same number of set bits in their binary representation, sort according to their position in the original array i.e., a stable sort.

// Example 1:
// Input: 
// arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
// Output:
// 15 7 5 3 9 6 2 4 32
// Explanation:
// The integers in their binary
// representation are:
// 15 - 1111
// 7  - 0111
// 5  - 0101
// 3  - 0011
// 9  - 1001
// 6  - 0110
// 2  - 0010
// 4  - 0100
// 32 - 10000
// hence the non-increasing sorted order is:
// {15}, {7}, {5, 3, 9, 6}, {2, 4, 32}
 
// Example 2:
// Input: 
// arr[] = {1, 2, 3, 4, 5, 6};
// Output: 
// 3 5 6 1 2 4
// Explanation:
// 3  - 0011
// 5  - 0101
// 6  - 0110
// 1  - 0001
// 2  - 0010
// 4  - 0100
// hence the non-increasing sorted order is
// {3, 5, 6}, {1, 2, 4}

// Your Task:
// You don't need to print anything, printing is done by the driver code itself. You just need to complete the function sortBySetBitCount() which takes the array arr[] and its size N as inputs and sort the array arr[] inplace. Use of extra space is prohibited.
 
// Expected Time Complexity: O(N.log(N))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ A[i] ≤ 106

//🔴approach : TLE
// static bool comp(pair<int,int> a,pair<int,int> b){
//         if(a.first==b.first){
//             return a.second<b.second;
//         }
//         return a.first>b.first;
//     }
//     int count(int n){
//         int count=0;
//         while(n){
//             if(n&1){
//                 count++;
//             }
//             n=n>>1;
//         }
//         return count;
//     }
//     void sortBySetBitCount(int arr[], int n)
//     {
//         vector<int>copy;
//         for(int i=0;i<n;i++){
//             copy.push_back(arr[i]);
//         }
//         vector<pair<int,int>>vec;
//         for(int i=0;i<n;i++){
//             vec.push_back({count(arr[i]),i});
//         }
//         sort(vec.begin(),vec.end(),comp);
//         for(int i=0;i<copy.size();i++){
//             arr[i]=copy[vec[i].second];
//         }
//     }
//🔸time complexity: O(3N^2 + N logn)
//🔸space complexity: O(2N)


//🔴approach: TLE
// int setbit(int n) {
        
//         int count=0;
//         while(n>0)
//         {
//           if(n%2==1) count++;
//           n=n/2;
//         }
//         return count;
//     }
    
//     void sortBySetBitCount(int arr[], int n)
//     {   
//         for(int i=1; i<n; i++) {
//           for(int j=i; j>0; j--) {
//             int prevCount = setbit(arr[j-1]) ;
//             int currCount = setbit(arr[j]) ;
            
//               if(prevCount < currCount) {
//                   swap(arr[j], arr[j-1]) ;
//               }
//           }
//         }  
//     }
//🔸time complexity: O(N^2)
//🔸space complexity: O(1)



//                //❓Question: Combination Sum IV

// Given an array of distinct integers nums and a target integer target, 
// return the number of possible combinations that add up to target.
// The test cases are generated so that the answer can fit in a 32-bit integer.

// Example 1:
// Input: nums = [1,2,3], target = 4
// Output: 7
// Explanation:
// The possible combination ways are:
// (1, 1, 1, 1)
// (1, 1, 2)
// (1, 2, 1)
// (1, 3)
// (2, 1, 1)
// (2, 2)
// (3, 1)
// Note that different sequences are counted as different combinations.

// Example 2:
// Input: nums = [9], target = 3
// Output: 0
 
// Constraints:
// 1 <= nums.length <= 200
// 1 <= nums[i] <= 1000
// All the elements of nums are unique.
// 1 <= target <= 1000

//🔴approach :  Recursion (TLE)
//  int solve(vector<int>&nums, int target){
//         if(target < 0) return 0;
//         if(target == 0)return 1;
//         int ans=0;
//         for(int i=0;i<nums.size();i++){
//             ans+=solve(nums, target-nums[i]);
//         }
//         return ans;
//     }

//     int combinationSum4(vector<int>& nums, int target) {
//         return solve(nums, target);
//     }
//🔸time complexeity: O(exponential)
//🔸space complexity: O(N)        //distinct possible answer


//🔴approach : Memoization (top-down)
//   int solve(vector<int>&nums, int target, vector<int>& dp){
//         if(target < 0) return 0;
//         if(target == 0)return 1;
//         if(dp[target]!=-1) return dp[target];
//         int ans=0;
//         for(int i=0;i<nums.size();i++){
//             ans+=solve(nums, target-nums[i], dp);
//         }
//         dp[target] = ans;
//         return dp[target];
//     }

//     int combinationSum4(vector<int>& nums, int target) {
//         vector<int> dp(target+1, -1);
//         return solve(nums, target, dp);
//     }
//🔸time complexity: O(N^2)
//🔸space complexity: O(target+1)

//🔴approach : Tabulation (bottom-up)
//   int combinationSum4(vector<int>& nums, int target) {
//       vector<unsigned int> dp(target+1, 0);
//       dp[0]=1;
//       for(int i=1;i<=target;i++){
//           for(int j=0;j<nums.size();j++){
//               if(i-nums[j]>=0)
//                   dp[i]+=dp[i-nums[j]];
//           }
//       }
//       return dp[target];
//   }
//🔸time complexity:  O(N^2)
//🔸space complexity: O(target+1)



//              //❓Question: Bishu and Soldier

// Bishu went to fight for Coding Club. There were N soldiers with various powers.
// There will be Q rounds to fight and in each round, Bishu's power will be varied. 
// With power M, Bishu can kill all the soldiers whose power is less than or equal to M(<=M). 
// After each round, All the soldiers who are dead in the previous round will reborn. 
// Such that in each round there will be N soldiers to fight. As Bishu is weak in mathematics, 
// help him to count the number of soldiers that he can kill in each round and the total sum of their powers.

// INPUT:
// The first line of the input contains N, the number of soldiers.
// The second line contains an array of N numbers denoting the power of each soldier
// This third line contains Q, which denotes the number of rounds.
// Q lines follow, each line having one number denoting the power of Bishu.

// OUTPUT:
// For each round, the output should be an array of two numbers. 
// The first number should be the number of soldiers that Bishu can beat, 
// and the second number denotes the cumulative strength of all the soldiers that Bishu can beat.

// CONSTRAINTS:
// 1<=N<=10000
// 1<=power of each soldier<=100
// 1<=Q<=10000
// 1<=power of bishu<=100

// Sample Input
// 7
// 1 2 3 4 5 6 7
// 3
// 3
// 10
// 2
// Sample Output
// 3 6
// 7 28
// 2 3

// Time Limit: 1
// Memory Limit: 256
// Source Limit:
// Explanation
// There are 7 soldiers, each with the indicated power.
// There are 3 rounds.
// In the first round, Bishu's power is 3, which is greater than 3 soldiers, 
// with the cumulative power of 6. Hence, the answer is 3 6
// Similarly for the next round

//🔴approach :
// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main()
// {

//     int n;
//     cin>>n;

//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//     }
// 	sort(ar, ar+n) ;

//     int t;
//     cin>>t;

//     while(t--)
//     {
//         int sum=0,count=0;
//         int p;
//         cin>>p;

//         for(int i=0;i<n;i++)
//         {
//             if(ar[i]<=p){
//              sum+=ar[i];
//              count++;
// 			}
// 			else{
// 				break;
// 			}
//         }

//         cout<<count<<" "<<sum<<endl;
//     }
// }
//🔸time complexity:  O(N LogN + N^2)
//🔸space complexity: O(N)



//                     //❓Question: Kth smallest number again

// Dexter was good in finding the K th smallest number from a set of numbers. 
// He thought he could solve any problem related to K th smallest number. 
// His friend Pipi challenged him with a problem.
// He gave him various ranges of number, 
// These numbers were arranged in increasing order(only distinct numbers to be taken into account). 
// Now he asked him to find the K th smallest number in the sequence, again and again.

// Input Format
// The first line contains T, the number of test cases.
// For each test case, there will be two integers N and Q.
// Then N lines follow each line containing two integers A and B (denoting the range A-B)
// Then Q lines follow each line containing a non-negative integer K .

// Output Format
// For each query output the K th smallest number.

// Constraints
// 1 <= T <= 100
// 1 <= N <= 100
// 1 <= Q <= 1000
// -10^18 <= A <= B <= 10^18
// K >= 1

// N.B. If Kth smallest number is not present in the series, print -1

// Sample Input
// 1
// 1 3
// 1 5
// 1
// 3
// 6
// Sample Output
// 1
// 3
// -1
// Time Limit: 5
// Memory Limit: 256
// Source Limit:
// Explanation
// The numbers are "1 2 3 4 5". The 1st smallest number is 1
// The 3rd smallest number is 3 The 6th smallest number is not present. Hence answer is -1

//🔴approach :
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//   int t;  
//   cin>> t;

//    while (t--){
//     long long int n, q; 
//   	cin >> n >> q;

//     vector<pair<long long int, long long int>> v;

//       for(long long int i=0; i< n; i++){
//        long long int x,y; 
// 	      cin >> x >> y;

//         v.push_back ({x,y});
//       }

//        sort(v.begin(), v.end()); // sort

//         long long int idx=0; // merge

//         for(long long int i=1; i< v.size(); i++) {
//             if(v[idx].second >= v[i].first){
//                 v[idx].second=  max(v[idx].second, v[i].second);
//             }else{
//                 idx++;
//                 v[idx]= v[i];
//             }
//         }    

// 		while (q--){
//            	long long int k;
// 			cin >> k;
			
//             long long int ans=-1;

//             for(long long int i=0; i<= idx; i++){
//                 if((v[i].second - v[i].first + 1) >= k) {
// 					ans= v[i].first + k -1;
// 					break; 
// 				}else {
// 					k = k - (v[i].second - v[i].first + 1);
// 				}
//             }
//             cout << ans << endl;
//         }

//     }

//     return 0;  
// }
//🔸time complexity : O(N logn + T*N)         //  O( N LogN + (T * (2N + Q*idx)) )    // t=testcases, n=num of ranges, q=num of k elem to find, ind = index of answer vector
//🔸space complexity: O(N)



//            //❓Question: COunt All valid Pickup and Delivery Options

// Given n orders, each order consist in pickup and delivery services. 
// Count all valid pickup/delivery possible sequences such that delivery(i) is always after of pickup(i). 
// Since the answer may be too large, return it modulo 10^9 + 7.

// Example 1:
// Input: n = 1
// Output: 1
// Explanation: Unique order (P1, D1), Delivery 1 always is after of Pickup 1.

// Example 2:
// Input: n = 2
// Output: 6
// Explanation: All possible orders: 
// (P1,P2,D1,D2), (P1,P2,D2,D1), (P1,D1,P2,D2), (P2,P1,D1,D2), (P2,P1,D2,D1) and (P2,D2,P1,D1).
// This is an invalid order (P1,D2,P2,D1) because Pickup 2 is after of Delivery 2.

// Example 3:
// Input: n = 3
// Output: 90
 
// Constraints:
// 1 <= n <= 500

//🔴Intuition :
// let (ABC) are the pickup and (abc) are the delivery
// there are two things we have to do
// 1/ pickup the item's
// so there are no condition in pickup so we can pickup up the package's in "n!" ways
// 2/. deliver the item's
// let's take one posibility ABC
// now we have to deliver the pakage one by one
// let's start from the last pickup we made c ,there are only 1 valid slot which is
// ABCc
// then second one have 3 valid slot
// AB_C_c_
// let's take one possibility from here then third one have 5 valid slot
// A_B_C_c_b_.
// so in conclusion we have total (1) mul (3) mul (5) mul.........(2n-1) possibility to deliver the package(always an odd number)
// thus total posibility (pickup+delivery) = n!*{(1) mul (3) mul (5) mul.........(2n-1)}
// and we know how to find the factorial then just multiply it by possibility to deliver the package.

//🔴Approach : Recursion

//  int mod = 1000000000+7;

//     int f(long long n){
//         if(n == 1)  return 1;
//         return (n*f(n-1)*(2*n-1))%mod;  
        
//     }
//     int countOrders(int n) {
//         return f(n);
//     }
//🔸Time complexity: O(N)
//🔸space complexity: O(N)


//🔴Approach : Memoization (top-bottom) approach 

//  int mod = 1000000000+7;

//     int f(long long n,vector<int> &dp){
//         if(n == 1)  return 1;
//         if(dp[n] != -1)  return dp[n];
//         return dp[n] = (n*f(n-1,dp)*(2*n-1))%mod;
        
//     }
//     int countOrders(int n) {
//         // size = n;
//         vector<int> dp(n+1,-1);
//         return f(n,dp);
//     }
//🔸time complexity: O(n)
//🔸space complexity: O(N)



//.                   //❓Question: Find pivot element in a sorted element

// Given an sorted rotated array, find pivot element in that array
//🔸input:
// 8, 9, 10, 1, 2, 3 
// output:
// 10

//🔸input :
// 8, 9, 10, 11, 12, 1, 2, 3
// output:
// 12


//🔴Approach : Binary Search 
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> ans, int start, int end) {
     
//     if(end < start) {
//         return -1;
//     }

//     if(start == end) {
//         return start ;
//     }

//     int mid = start+(end-start)/2;

//     if(mid < end && ans[mid] > ans[mid + 1]) {
//         return mid;
//     }
    
//     if(mid > start && ans[mid] < ans[mid - 1]){
//         return mid - 1;
//     }

//     return solve(ans, mid + 1, end) ;
// }

// int main() {

//     int size;
//     cin>>size;

//     vector<int> ans;
//     for(int i=0; i<size; i++){
//         int temp;
//         cin>> temp;
//         ans.push_back(temp) ;
//     }

//     int start = 0;
//     int end = size-1;
//     cout << solve(ans, start, end) ;
    
//     return 0;
// }


//             /❓Question: k-th element of two arrays

// Given two arrays arr1 and arr2 of size N and M respectively and an element K. 
// The task is to find the element that would be at the kth position of the final sorted array.
 
// Example 1:
// Input:
// arr1[] = {2, 3, 6, 7, 9}
// arr2[] = {1, 4, 8, 10}
// k = 5
// Output:
// 6
// Explanation:
// The final sorted array would be -
// 1, 2, 3, 4, 6, 7, 8, 9, 10
// The 5th element of this array is 6.

// Example 2:
// Input:
// arr1[] = {100, 112, 256, 349, 770}
// arr2[] = {72, 86, 113, 119, 265, 445, 892}
// k = 7
// Output:
// 256
// Explanation:
// Final sorted array is - 72, 86, 100, 112,
// 113, 119, 256, 265, 349, 445, 770, 892
// 7th element of this array is 256.

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function kthElement() which takes the arrays arr1[], arr2[], its size N and M respectively and an integer K as inputs and returns the element at the Kth position.

// Expected Time Complexity: O(Log(N) + Log(M))
// Expected Auxiliary Space: O(Log (N))

// Constraints:
// 1 <= N, M <= 106
// 0 <= arr1i, arr2i < INT_MAX
// 1 <= K <= N+M

//🔴approach:
// int kthElement(int arr1[], int arr2[], int n, int m, int k)
//     {
//         vector<int> ans;
//         for(int i=0; i<n; i++){
//             ans.push_back(arr1[i]);
//         }
//         for(int i=0; i<m; i++){
//             ans.push_back(arr2[i]);
//         }
        
//         sort(ans.begin(), ans.end()) ;
        
//         return ans[k-1];
//     }
//🔸time complexity : O(n+m * logn)
//🔸space complexity : O(n+m)


//🔴approach : optimised
// int kthElement(int arr1[], int arr2[], int n, int m, int k)
//     {
//         int left = n-1;
//         int right = 0;
            
//         while( right < m && left >= 0 ) {
//             if(arr1[left] >= arr2[right]) {
//                 swap(arr1[left], arr2[right]) ;
//                 left--;
//                 right++ ;
//             }
//             else break;
//         }
//         sort(arr1, arr1+n) ;
//         sort(arr2, arr2+m) ; 
        
//         if(k<=n){
//             return arr1[k-1];
//         }
//         else{
//            return arr2[k-n-1];
//         }
//     }
//🔸time complexity : O(N+M logn)
//🔸space complexity: O(1)


//                   //❓Question: Candy 

// There are n children standing in a line. 
// Each child is assigned a rating value given in the integer array ratings.
// You are giving candies to these children subjected to the following requirements:

// Each child must have at least one candy.
// Children with a higher rating get more candies than their neighbors.
// Return the minimum number of candies you need to have to distribute the candies to the children.

 
// Example 1:
// Input: ratings = [1,0,2]
// Output: 5
// Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.

// Example 2:
// Input: ratings = [1,2,2]
// Output: 4
// Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
// The third child gets 1 candy because it satisfies the above two conditions.
 

// Constraints:
// n == ratings.length
// 1 <= n <= 2 * 104
// 0 <= ratings[i] <= 2 * 104


//🔴approach : Greedy

//  int candy(vector<int>& ratings) {
//         int n = ratings.size(); // Get the number of children
        
//         vector<int> candies(n, 1); // Initialize a vector to store the number of candies for each child
        
//         // First pass: Check ratings from left to right
//         for(int i = 1; i < n; i++){
//             if(ratings[i - 1] < ratings[i] && candies[i - 1] >= candies[i]){
//                 // If the current child has a higher rating and fewer or equal candies than the previous child,
//                 // give them one more candy than the previous child
//                 candies[i] = candies[i - 1] + 1;
//             }
//         }
        
//         // Second pass: Check ratings from right to left
//         for(int i = n - 2; i >= 0; i--){
//             if(ratings[i + 1] < ratings[i] && candies[i + 1] >= candies[i]){
//                 // If the current child has a higher rating and fewer or equal candies than the next child,
//                 // give them one more candy than the next child
//                 candies[i] = candies[i + 1] + 1;
//             }
//         }
        
//         int totalCandies = 0;
        
//         // Calculate the total number of candies needed
//         for(int i = 0; i < n; i++){
//             totalCandies += candies[i];
//         }
        
//         return totalCandies;
//     }
//🔸time complexity: O(3N)
//🔸space complexity: O(N)



//                                //❓Question: Aggressive Cow


// Given an array of length 'N', where each elements denotes the position of a arr. now you have 'N' stalls and
// an integer 'K' which denotes the number of cows that are aggresive. to prevent the cows from hurting each other, 
// you need to assign the cows to the stalls such that the minimun distance between any two of them is as large as possible. 
// return the largest minimum distance.

// input : {4, 2, 1, 3, 6} ;  //stalls positions
// no. of stalls N = 5 ;
// no. of cows  k = 2 ;

// output: 5             // because in this case we need to obtain maximum distance between two cows placed in the stalls

// explaination :

// stalls   4    2    1    3     6
//              |    |    |    |  
//case1.    k1  | k2 |    |    |             // distance between k1 - k2 => 4 - 2 =>  2
//case1.    k1  |    | k2 |    |             // distance between k1 - k2 => 4 - 1 =>  3  
//case1.    k1  |    |    | k2 |             // distance between k1 - k2 => 4 - 3 =>  1  
//case1.    k1  |    |    |    |  k2         // distance between k1 - k2 => 4 - 6 =>  2

//case2.        | k1 |k2  |    |             // distance between k1 - k2 => 2 - 1 =>  1  
//case2.        | k1 |    | k2 |             // distance between k1 - k2 => 2 - 3 =>  1  
//case2.        | k1 |    |    |k2           // distance between k1 - k2 => 2 - 6 =>  4  

//case3.        |    | k1 | k2 |             // distance between k1 - k2 => 1 - 3 =>  2  
//case3.        |    | k1 |    | k2          // distance between k1 - k2 => 1 - 6 =>  5    // Found the largest distance between two aggresive cow

//case4         |    |    | k1 |k2           // distance between k1 - k2 => 3 - 6 =>  3


// MAximum distance  =>  5

// Constraints :
// 2 <= 'n' <= 10 ^ 5
// 2 <= 'k' <= n
// 0 <= 'arr[i]' <= 10 ^ 9
// Time Limit: 1 sec.


//🔴approach : Binary search 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std; 

// bool possible(vector<int>&stall , int k , int mid){

//     int countCow = 1 ;
//     int last = stall[0];

//     for(int i=1;i<stall.size();i++){
//         if(stall[i] - last >= mid){    
//             countCow++;                 
//             last = stall[i];             
//         }
//         if(countCow >= k)   return true;   
//     }
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k) {

//     sort(stalls.begin(),stalls.end());              
//     int n = stalls.size();                          
//     int low = 1;
//     int high = stalls[n-1] - stalls[0];           

//     while(low<= high ){                             
//         int mid =(low+high)/2;                      
//         if(possible(stalls,k,mid)){                 
//             low = mid+1;                            
//         }
//         else{
//             high = mid-1;
//         }
//     }
//     return high;
// }
//🔸time compplexity: O(n* logn)
//🔸space complexity: O(1)



//                  //❓Question: Allocate Minimum number of pages

// You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, 
// with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where 
// the student with the most books allocated to him gets the minimum number of pages,
// out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order
// (see the explanation for better understanding).

// Example 1:
// Input:
// N = 4
// A[] = {12,34,67,90}
// M = 2
// Output:113
// Explanation:Allocation can be done in 
// following ways:
// {12} and {34, 67, 90} Maximum Pages = 191
// {12, 34} and {67, 90} Maximum Pages = 157
// {12, 34, 67} and {90} Maximum Pages =113.
// Therefore, the minimum of these cases is 113,
// which is selected as the output.

// Example 2:
// Input:
// N = 3
// A[] = {15,17,20}
// M = 2
// Output:32
// Explanation: Allocation is done as
// {15,17} and {20}
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findPages() which takes 2 Integers N, and m and an array A[] of length N as input and returns the expected answer.

// Expected Time Complexity: O(NlogN)
// Expected Auxilliary Space: O(1)

// Constraints:
// 1 <= N <= 105
// 1 <= A [ i ] <= 106
// 1 <= M <= 105

//🔴approach : binary search

// int isPosssible(int maxi, int arr[], int n, int m){
//         int cnt=0;
//         int sum=0;
//         for(int i=0; i<n; i++){
//             if(sum+arr[i]<=maxi){
//                 sum+=arr[i];
//             }else{
//                 cnt++;
//                 sum=arr[i];
//             }
//         }
//         return cnt;
//     }
    
//     //Function to find minimum number of pages.
//     int findPages(int A[], int N, int M) 
//     {
//         //code here
//         if(N<M) return -1;
//         int end=A[0];
//         int start=A[0];

//         for(int i=1; i<N; i++){
//             end+=A[i];
//             start= max(start, A[i]);
//         }
        
        
//         while (start<=end){
//             int mid = start+(end - start)/2;
//             if(isPosssible(mid, A, N, M)>=M){
//                 start=mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
//         return start;
//     }
//🔸time complexity: O(n*logn)
//🔸 space complexity: O(n)        //sum of all element



//                          //❓Question: EKO EKO

// Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a 
// nifty new woodcutting machine that can take down forests like wildfire. However, 
// Mirko is only allowed to cut a single row of trees.

// Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), 
// and the machine raises a giant sawblade to that height and cuts off all tree parts higher than 
// H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. 
// For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, 
// and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, 
// respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree
// (7 metres of wood in total).

// Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. 
// That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height 
// of the sawblade that still allows him to cut off at least M metres of wood.

// Input
// The first line of input contains two space-separated positive integers, N (the number of trees, 1 ≤ N ≤ 1 000 000) and M (Mirko‟s required wood amount, 1 ≤ M ≤ 2 000 000 000).
// The second line of input contains N space-separated positive integers less than 1 000 000 000, the heights of each tree (in metres). The sum of all heights will exceed M, thus Mirko will always be able to obtain the required amount of wood.
// Output
// The first and only line of output must contain the required height setting.

// Example
// Input:
// 4 7
// 20 15 10 17

// Output:
// 15
// Input:
// 5 20
// 4 42 40 26 46

// Output:
// 36

//🔴approach : 

// #include<iostream>
// #include<vector>
// using namespace std;

// bool find(vector<int> tree, int n, int k, int mid){
//     int sum =0;
//     for(int i=0; i<n; i++){
//         if(tree[i] > mid){
//             sum += tree[i]-mid;
//         }
//     }

//     (sum <= k) ? true : false;
// }

// int solve(vector<int> tree, int n,  int k) {
//         int low = 0;
//         int high = 0;

//         for(auto i:tree){
//             high = max(high, i) ;
//         }

//         int ans = 0;

//         while(low <= high) {
//             int mid = (low+high)/2 ;
//             if( find(tree, n, k, mid)) {
//                 ans = mid;
//                 low = mid+1;
//             }
//             else{
//                 high = mid-1;
//             }
//         }

//         return low;
// } 
//🔸time complexity: O(N logn)
//🔸space complexity: O(1)



//                  //❓Question: Tribonnacci sequence (Count number of Hops)

// A frog jumps either 1, 2, or 3 steps to go to the top. 
// In how many ways can it reach the top of Nth step. 
// As the answer will be large find the answer modulo 1000000007.

// Example 1:
// Input:
// N = 1
// Output: 1

// Example 2:
// Input:
// N = 4
// Output: 7
// Explanation:Below are the 7 ways to reach
// 4
// 1 step + 1 step + 1 step + 1 step
// 1 step + 2 step + 1 step
// 2 step + 1 step + 1 step
// 1 step + 1 step + 2 step
// 2 step + 2 step
// 3 step + 1 step
// 1 step + 3 step
// Your Task:
// Your task is to complete the function countWays() which takes 1 argument(N) and returns the answer%(10^9 + 7).

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 105

//🔴approach :
//  long long countWays(int n)
//     {
//         if(n==1) return 1;
//         if(n==2) return n;
        
//         int mod = 1000000007 ;
//         long long first = 1;
//         long long sec = 1;
//         long long third = 2;
        
//         for(int i=3; i<=n; i++) {
//             long long ans = (first+sec+third)%mod;
//             first = sec;
//             sec = third;
//             third = ans;
//         }
//         return third;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                          //❓ Path with minimum effort

// You are a hiker preparing for an upcoming hike. You are given heights, a 2D array of size rows x columns,
// where heights[row][col] represents the height of cell (row, col). 
// You are situated in the top-left cell, (0, 0), and you hope to travel to the bottom-right cell, (rows-1, columns-1) 
// (i.e., 0-indexed). You can move up, down, left, or right, and you wish to find a route that requires the minimum effort.
// A route's effort is the maximum absolute difference in heights between two consecutive cells of the route.

// Return the minimum effort required to travel from the top-left cell to the bottom-right cell.

// Example 1:

//      1   2   2
//      3   8   2
//      5   3   5

// Input: heights = [[1,2,2],[3,8,2],[5,3,5]]
// Output: 2
// Explanation: The route of [1,3,5,3,5] has a maximum absolute difference of 2 in consecutive cells.
// This is better than the route of [1,2,2,2,5], where the maximum absolute difference is 3.

// Example 2:

//      1   2   3
//      3   8   4
//      5   3   5

// Input: heights = [[1,2,3],[3,8,4],[5,3,5]]
// Output: 1
// Explanation: The route of [1,2,3,4,5] has a maximum absolute difference of 1 in consecutive cells, which is better than route [1,3,5,3,5].

// Example 3:

//  1   2   1   1   1
//  1   2   1   2   1
//  1   2   1   2   1
//  1   2   1   2   1
//  1   1   1   2   1

// Input: heights = [[1,2,1,1,1],[1,2,1,2,1],[1,2,1,2,1],[1,2,1,2,1],[1,1,1,2,1]]
// Output: 0
// Explanation: This route does not require any effort.
 

// Constraints:
// rows == heights.length
// columns == heights[i].length
// 1 <= rows, columns <= 100
// 1 <= heights[i][j] <= 106

//🔴approach : DFS

//Class Solution {
// private:
//     int effort[105][105];    // Store effort for each cell
//     int dx[4] = {0, 1, -1, 0};  // Changes in x coordinate for each direction
//     int dy[4] = {1, 0, 0, -1};  // Changes in y coordinate for each direction

// public:
//     // Dijkstra's Algorithm to find minimum effort
//     int dijkstra(vector<vector<int>>& heights) {
//         int rows = heights.size();
//         int cols = heights[0].size();

//         // Priority queue to store {effort, {x, y}}
//         std::priority_queue<std::pair<int, std::pair<int, int>>> pq;
//         pq.push({0, {0, 0}});  // Start from the top-left cell
//         effort[0][0] = 0;  // Initial effort at the starting cell

//         while (!pq.empty()) {
//             auto current = pq.top().second;
//             int cost = -pq.top().first;  // Effort for the current cell
//             pq.pop();

//             int x = current.first;
//             int y = current.second;

//             // Skip if we've already found a better effort for this cell
//             if (cost > effort[x][y])
//                 continue;

//             // Stop if we've reached the bottom-right cell
//             if (x == rows - 1 && y == cols - 1)
//                 return cost;

//             // Explore each direction (up, down, left, right)
//             for (int i = 0; i < 4; i++) {
//                 int new_x = x + dx[i];
//                 int new_y = y + dy[i];

//                 // Check if the new coordinates are within bounds
//                 if (new_x < 0 || new_x >= rows || new_y < 0 || new_y >= cols)
//                     continue;

//                 // Calculate new effort for the neighboring cell
//                 int new_effort = std::max(effort[x][y], std::abs(heights[x][y] - heights[new_x][new_y]));

//                 // Update effort if a lower effort is found for the neighboring cell
//                 if (new_effort < effort[new_x][new_y]) {
//                     effort[new_x][new_y] = new_effort;
//                     pq.push({-new_effort, {new_x, new_y}});
//                 }
//             }
//         }
//         return effort[rows - 1][cols - 1];  // Minimum effort for the path to the bottom-right cell
//     }

//     // Function to find the minimum effort path
//     int minimumEffortPath(vector<vector<int>>& heights) {
//         // Initialize effort for each cell to maximum value
//         for (int i = 0; i < heights.size(); i++) {
//             for (int j = 0; j < heights[i].size(); j++) {
//                 effort[i][j] = INT_MAX;
//             }
//         }
//         return dijkstra(heights);  // Find minimum effort using dijkstra
//     }
// };

//🔸time complexity : O(2n*m)
//🔸space complexity : O(n)      // pq.size()



//                      //❓Question: Job sequencing Problem  (Job scheduling problem)

// Given a set of N jobs where each jobi has a deadline and profit associated with it.
// Each job takes 1 unit of time to complete and only one job can be scheduled at a time. 
// We earn the profit associated with job if and only if the job is completed by its deadline.
// Find the number of jobs done and the maximum profit.

// Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job.

// Example 1:
// Input:
// N = 4
// Jobs = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)}
// Output:
// 2 60
// Explanation:
// Job1 and Job3 can be done with
// maximum profit of 60 (20+40).

// Example 2:
// Input:
// N = 5
// Jobs = {(1,2,100),(2,1,19),(3,2,27),(4,1,25),(5,1,15)}
// Output:
// 2 127
// Explanation:
// 2 jobs can be done with
// maximum profit of 127 (100+27).

// Your Task :
// You don't need to read input or print anything. Your task is to complete the function JobScheduling() which takes an integer N and an array of Jobs(Job id, Deadline, Profit) as input and returns the count of jobs and maximum profit as a list or vector of 2 elements.

// Expected Time Complexity: O(NlogN)
// Expected Auxilliary Space: O(N)

// Constraints:
// 1 <= N <= 105
// 1 <= Deadline <= N
// 1 <= Profit <= 500

//🔴approach :  priorit_queue 

//  bool static cmp(Job a, Job b){
//         return a.dead < b.dead;
//     }
//     vector<int> JobScheduling(Job arr[], int n) 
//     { 
//         // your code here
//         sort(arr, arr+n, cmp) ;
//         priority_queue<int, vector<int> , greater<int> > pq;
//         int curr = 1;
        
//         for(int i=0; i<n; i++) {
            
//             if(arr[i].dead >= curr) {
//                 pq.push(arr[i].profit) ;
//                 curr++ ;
//             }
//             else{
//                 if(arr[i].profit > pq.top()) {
//                     pq.push(arr[i].profit) ;
//                     pq.pop() ;
//                 }
//             }
//         }
        
//         int job = pq.size();
//         int total = 0;
        
//         while( !pq.empty()) {
//             total += pq.top() ;
//             pq.pop() ;
//         }
        
//         return {job, total};
//     }
//🔸time complexity : O(N logn)              // O(2n+pq logn)  == pq =  pq.size() ;
//🔸space complexity: o(n)



//              //🔴Question: Arithemetic Number

// Given three integers  'A' denoting the first term of an arithmetic sequence , '
// C' denoting the common difference of an arithmetic sequence and an integer 'B'. 
// you need to tell whether 'B' exists in the arithmetic sequence or not. 
// Return 1 if B is present in the sequence. Otherwise, returns 0.

// Example 1:
// Input: A = 1, B = 3, C = 2
// Output: 1
// Explaination: 3 is the second term of the 
// sequence starting with 1 and having a common 
// difference 2.

// Example 2:
// Input: A = 1, B = 2, C = 3
// Output: 0
// Explaination: 2 is not present in the sequence.
// Your Task:
// You do not need to read input or print anything. Your task is to complete the function inSequence() which takes A, B and C and returns 1 if B is present in the sequence. Otherwise, returns 0.

// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

// Constraints:
// -109 ≤ A, B, C ≤ 109  

//🔴approach :
// Let's Understand the Problem And Approach:
// Jaisa ki question kehta h  A kisi arithmatic sequence ka first element hai and C common difference hai , hmko B ke liye check krna hai ki ye arithmatic sequence ka hissa hai ye nhi
//    Agar hm ek general n terms ka arithmatic sequence lekr smjhe to 

// A , A + C , A + 2C , ........... , A + (n-1)C 

// and nth term of arithmetic sequence = A + (n-1)C
// to hm B ko iss form me likh skte h

//        B = A + ( n - 1 )*C;

// Question me A , B , C given hai then n ki value se decide krenge ki B sequence ka part h ya nhi 
//         n = (B - A) / C + 1;

//  Agar ye n ki value positive integer aati h to B       sequence ka part jarur hoga 

// But n +ve integer hi ku aaega ?

// question me given hai ki A , B and C integers hai that's why n bhi integer hoga( because itn / int == int)
// n positive hoga kuki squence to type ki ho skti hai increasing and decreasing
//  Jb common difference (C) +ve hoga to sequence increasing hogi iss condition me (B - A) +ve milega
// Jb common difference(C)  -ve hoga to sequence decreasing hogi uss conditon me  (B- A) -ve milega 

//  Corner Case :
// when ,  C == 0  and  A == B  

//🔴Implementation :

// int inSequence(int A, int B, int C){
//         // code here
        
//         if (C == 0 && A == B)  return 1;

//         double n = (double)(B - A) / C + 1;
    
//         if (n != int(n)) return 0;

//         return n > 0 ? 1 : 0;
        
//     }
//🔸time complexity: O(1)
//🔸space complexity: O(1)



//                      //❓Question: Smallest Factorial Number

// Given a number n. The task is to find the smallest number whose factorial contains at least n trailing zeroes.

// Example 1:
// Input:
// n = 1
// Output: 5
// Explanation : 5! = 120 which has at
// least 1 trailing 0.

// Example 2:
// Input:
// n = 6
// Output: 25
// Explanation : 25! has at least
// 6 trailing 0.

// User Task:
// Complete the function findNum() which takes an integer N as input parameters, and returns the answer.

// Expected Time Complexity: O(log2 N * log5 N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= n <= 104

//🔴apporach : Math

//   int findNum(int n) {
            
//         for(int i=0; i<1e5; i++) {
//             int x = i/5 + i/25 + i/125 + i/625 + i/3125 + i/15625 ;
//             if( x >= n) {
//                 return i ;
//             }
//         } 

//         return 0 ;
//    }
//🔸time complexity: O(1e5)
//🔸space complexity: O(1)

//🔴approach : binary search

// int findNum(int n)
//     {
//         int low = 1;
//         int high = 5*n;
//         int ans = 0;
        
//         while(low <= high) {
//             int mid = low + (high-low)/2;
//             int count = 0;
//             int pow = 5;
            
//             while(mid/pow != 0) {
//                 count += mid/pow; 
//                 pow = pow*5;
//             }
            
//             if(count >= n) {
//                 high = mid-1;
//                 ans = mid;
//             } else if(count < n) {
//                 low = mid+1;
//             }
//         }
        
//         return ans;
//     }
//🔸time complexity: O(log2 N * log5 * n)
//🔸space complexity: O(1)



//                 //  ❓Question : Painter's Partition Problem :

// Given an arrayList of length 'N'. where the arrayList represents the boards and each element of the given arraylist represents the length of each board . 
// Some 'K' numbers of painters are available to paint these boards.consider that each unit of a board takes 1 unit of time to paint.  

// You are supposed to return the area of the minimum time to get this job done of painting all the 'N' boards under a contraint that any painter will only paint the continous section of boards .

// In the below figure where array/list elements are {2, 1, 5, 6, 2, 3}
// A painter can paint blocks {5, 6} or {1, 5, 6, 2} together but not {2, 5, 6} or {5,6,3}        // Means allotment will be in contingous manner just like book allocation problem

// Input : {5, 5, 5, 5}
// no. of pianter 'k' = 2; 
//output : 10 ;

// Input : {10,20, 30, 40}
// no. of pianter 'k' = 2; 
//output : 60 ;


// #include<iostream>
// using namespace std ;

// int isPossible(int arr[], int k, int n, int mid){
              
//               int painterCount = 1;
//               int blockSum = 0;

//               for(int i=0; i<n; i++){

//                 if(blockSum + arr[i] <= mid){
//                     blockSum += arr[i] ;
//                 }
//                 else{
//                     painterCount++ ;

//                     if(painterCount > k || arr[i] > mid) {
//                         return false ;
//                     }
//                     blockSum = arr[i] ;
//                 }
//               }
//               return true ;
// }


// int partition(int arr[], int k, int n){

//              int start = 0;
//              int sum = 0 ;

//              for(int i=0; i<n; i++){
//                 sum +=arr[i];
//              }
//          int end = sum ;
//          int ans = -1 ;
//          int mid = start + (end - start)/2 ;

//          while(start<=end){
//             if( isPossible(arr, k, n, mid)){
//                 end = mid - 1 ;
//                 ans = mid ;
//             }
//             else{
//                 start = mid + 1;
//             }
//             mid = start + (end - start)/2 ;
//          }
//       return ans ;
// }

// int main(){

//     int arr[4] = {5,5,5,5} ;
//     int n = 4 ;                //no of blocks
//     int k = 2 ;                // no. of painters; 

//     cout<<" Answer of painter parition problem : "<<partition(arr, k, n)<<endl ;

//     return 0 ;
// }




//                //❓Question: Minimum operations to reduce X to zero 

// You are given an integer array nums and an integer x. In one operation, 
// you can either remove the leftmost or the rightmost element from the array nums and subtract its value from x.
// Note that this modifies the array for future operations.
// Return the minimum number of operations to reduce x to exactly 0 if it is possible, otherwise, return -1.

// Example 1:
// Input: nums = [1,1,4,2,3], x = 5
// Output: 2
// Explanation: The optimal solution is to remove the last two elements to reduce x to zero.

// Example 2:
// Input: nums = [5,6,7,8,9], x = 4
// Output: -1

// Example 3:
// Input: nums = [3,2,20,1,1,3], x = 10
// Output: 5
// Explanation: The optimal solution is to remove the last three elements and the first two elements (5 operations in total) to reduce x to zero.
 
// Constraints:
// 1 <= nums.length <= 105
// 1 <= nums[i] <= 104
// 1 <= x <= 109

//🔴appraoch : Two POinter and sliding window
// int minOperations(vector<int>& nums, int x) {
        
//         int total = accumulate(nums.begin(), nums.end(), 0) ;
//         int target = total - x ;
        
//         if(target < 0 ) return -1;
//         if(target == 0) return nums.size() ;
        
//         int minSum = INT_MAX ;
//         int currSum = 0 ;
//         int left = 0 ;
//         int right = 0 ;
//         int n = nums.size() ;
        
//         while(right < n)  {
//             currSum += nums[right] ;
//             right++ ;
            
//             while(currSum > target && left < n) {
//                 currSum -= nums[left] ;
//                 left++ ;
//             }
            
//             if(currSum == target) {
//                 minSum = min(minSum, n-(right-left)) ;
//             }
//         }
        
//         return (minSum == INT_MAX) ? -1 : minSum ;
        
//     }

//🔸time complexity: O(N^2)
//🔸space complexity: O(N)



//                          //❓ Question: Roti-Paratha

// IEEE is having its AGM next week and the president wants to serve cheese prata after the meeting.
// The subcommittee members are asked to go to food connection and get P (P<=1000) pratas packed for the function.
// The stall has L cooks (L<=50) and each cook has a rank R (1<=R<=8).
// A cook with a rank R can cook 1 prata in the first R minutes 1 more prata in the next 2R minutes,
// 1 more prata in 3R minutes and so on (he can only cook a complete prata) (For example if a cook is ranked 2,
//  he will cook one prata in 2 minutes one more prata in the next 4 mins an one more in the next 
// 6 minutes hence in total 12 minutes he cooks 3 pratas in 13 minutes also he can cook only 3 pratas 
// as he does not have enough time for the 4th prata). The webmaster wants to know the minimum time to get the order done. 
// Please write a program to help him out.

// Input
// The first line tells the number of test cases. Each test case consist of 2 lines. 
// In the first line of the test case we have P the number of prata ordered. 
// In the next line the first integer denotes the number of cooks L and L integers follow in the same line each denoting the rank of a cook.

// Output
// Print an integer which tells the number of minutes needed to get the order done.

// Example
// Input:
// 3
// 10
// 4 1 2 3 4
// 8
// 1 1
// 8
// 8 1 1 1 1 1 1 1 1

// Output:
// 12
// 36
// 1

//🔴approach : Binary search 

// #include <bits/stdc++.h>
// using namespace std;

// bool valid(long long t, long long rank[], long long int P, int n)
// {
// 	long long cp = 0, tt, val, count = 0;
	
// 	for(int i = 0; i < n; i++)
// 	{
// 		tt = rank[i];
// 		count = 0;
// 		val = 1;
		
// 		while(tt <= t)
// 		{
// 			count++;
// 			val++;
// 			tt += (val*rank[i]);
// 		}
		
// 		cp += count;
		
// 		if(cp >= P) return true;
// 	}
// 	return false;
// }

// int main() 
// {
// 	long long t, P, n;
// 	cin >> t;
// 	while(t--)
// 	{
// 		cin >> P >> n;
	
// 		long long rank[n];
	
// 		for(int i = 0; i < n; i++)
// 			cin >> rank[i];
		
// 		long long low = 1, high = INT_MIN;
	
// 		for(int i = 0; i < n; i++)
// 			high = max(high, rank[i]*(P*(P+1)/2));
	
// 		long long ans = 0;
		
// 		while(low <= high)
// 		{
// 			long long mid = low + (high -low)/2;
			
// 			if(valid(mid, rank, P, n))
// 			{
// 				ans = mid;
// 				high = mid-1;
// 			}
// 			else 
// 				low = mid + 1;
// 		}
	
// 		cout << ans << endl;
// 	}
	
// 	return 0;
// }
//🔸time complexity: O(N* logN)
//🔸space complexity: O(n)


//                  //❓Question:  The Double HElix 

//Two ﬁnite, strictly increasing, integer sequences are given. 
//Any common integer between the two sequences constitute an intersection point.
//Take for example the following two sequences where intersection points are
// printed in bold:

// First= 3 5 [7] 9 20 [25] 30 40 [55] 56 [57] 60 62
// Second= 1 4 [7] 11 14 [25] 44 47 [55] [57] 100
// You can ‘walk” over these two sequences in the following way:

// You may start at the beginning of any of the two sequences. Now start moving forward.
// At each intersection point, you have the choice of either continuing with the same sequence you’re currently on, or switching to the other sequence.
// The objective is ﬁnding a path that produces the maximum sum of data you walked over. In the above example, the largest possible sum is 450, which is the result of adding 3, 5, 7, 9, 20, 25, 44, 47, 55, 56, 57, 60, and 62

// Input
// Your program will be tested on a number of test cases. Each test case will be speciﬁed on two separate lines. Each line denotes a sequence and is speciﬁed using the following format:

// n v1 v2 ... vn
// Where n is the length of the sequence and vi is the ith element in that sequence. Each sequence will have at least one element but no more than 10,000. All elements are between -10,000 and 10,000 (inclusive).
// The last line of the input includes a single zero, which is not part of the test cases.

// Output
// For each test case, write on a separate line, the largest possible sum that can be produced.

// Sample
// Input:
// 13 3 5 7 9 20 25 30 40 55 56 57 60 62
// 11 1 4 7 11 14 25 44 47 55 57 100
// 4 -5 100 1000 1005
// 3 -12 1000 1001
// 0

// Output:
// 450
// 2100


//🔴Approach :
// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
 
//     int i,j,k;
//     int x,y,z;
//     int n1,n2;
//     int result1,result2,result;
 
//     result=result1=result2=0;

//     cout<<"Enter the number of elements in the first sequence ";
//     cin>>n1;
 
//     vector<int> a(n1);

//     cout<<"Enter the values of the first sequence"<<endl;
//     for(i=0;i<n1;i++)
//     {
//         cin>>a[i];
//     }
 
 
//     cout<<"Enter the number of elements in the second sequence ";
//     cin>>n2;

//     vector<int> b(n2);
//     j=0;
 
//     cout<<"Enter the values of the second sequence"<<endl;
//     for(i=0;i<n2;i++)
//     {
//        cin>>b[i]; 
//        result2+=b[i];
 
//        while(j<n1 && a[j]<b[i])
//        {
//            result1+=a[j];
//            j++;
//        }
 
//        if(j<n1 && a[j]==b[i])
//        {
//             result1+=a[j];
//             result+=max(result1,result2);     
 
//             //reset
//             result1=0;
//             result2=0;
//             j++;
//        }
//     }
 
 
//     while(j<n1)
//     {
//         result1+=a[j];
//         j++;
//     }
 
//     result+=max(result1,result2);     
 
//     cout<<"The maximum sum of data obtained by walking over them is "<<endl;
//     cout<<result<<endl;
 
//     return 0;
// }
//🔸 time complexity: O(2n*m)
//🔸 space complexity: O(1)



//                  //❓Question: Subset Sum

// Given a sequence of N (1 ≤ N ≤ 34) numbers S1, ..., SN (-20,000,000 ≤ Si ≤ 20,000,000), 
// determine how many subsets of S (including the empty one) have a sum between 
// A and B (-500,000,000 ≤ A ≤ B ≤ 500,000,000), inclusive.

// Input
// The first line of standard input contains the three integers N, A, and B. 
// The following N lines contain S1 through SN, in order.

// Output
// Print a single integer to standard output representing the number of subsets satisfying the above property. 
// Note that the answer may overflow a 32-bit integer.

// Example
// Input:
// 3 -1 2
// 1
// -2
// 3

// Output:
// 5
// The following 5 subsets have a sum between -1 and 2:

// 0 = 0 (the empty subset)
// 1 = 1
// 1 + (-2) = -1
// -2 + 3 = 1
// 1 + (-2) + 3 = 2


//🔴Approach :
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void solve(int a[], int start, int end, vector<int>& v1) {
//     int s = 0 ;
//     int n = end-start+1;

//     for(int i=0; i<(1<<n); i++) {           // (1<<n) == 2^20
//         s = 0 ;
//         int j = start ;
//         int x = i ;

//         while(x) {
//             int l = x&1 ;
//             if(l){
//                 s += a[j] ;
//             }
//             j++ ;
//             x = x>>1 ;
//         }
//         v1.push_back(s) ;
//     }
// }

// int main() {

//     //taking input for test case
//     int n, a, b ;
//     cin>>n>>a>>b ;

//     //taking arr element
//     int arr[n] ;
//     for(int i=0; i<n; i++){
//         cin>>arr[i] ;
//     }

//     //create 2 vector to store subset of arr, v1 will store first half elem subsets
//     //and v2 will store second half elements subsets
//     vector<int> v1, v2 ;
//     solve(arr, 0, (n/2)-1, v1) ;  // passing first half elements
//     solve(arr, (n/2), n-1, v2) ;  // passsing second half elements

//     sort(v2.begin(), v2.end()) ;   //sorting v2 to apply binary search on it

//     // applying below search formula
//     //ex: 
//     // a = 1, 5, 3, 4, 2, 6 
//     // 0 is for empty subset
//     // v1 = 0, 1, 5, 3, 6, 4, 8, 9 
//     // v2 = 0, 2, 4, 6, 6, 8, 10, 12               //sorted to apply binary search

//     // A = 6, B = 10             // to search number of subset sum between A - B inclusive
//     // x = current element at v1 
//     // y = current element at v2
//     // 
//     // for lower bound A :
//     // x + y = A 
//     // y = A - x == 5       (lowerBound of 5 in v2 will be 6) gives just one bigger element 
//     //
//     // for upper bound B :
//     // x + y = B 
//     // y = B - x == 9       (upperBounf of 9 in v2 will be 10) gives just one bigger element

//     // 5 - 2 = 3 
//     // Add 3 in count and repeat and after loop ends return count

//     int count = 0 ;
//     for(int i=0; i<v1.size(); i++) {
//         int low = lower_bound(v2.begin(), v2.end(), a-v1[i]) - v2.begin() ;
//         int high = upper_bound(v2.begin(), v2.end(), b-v1[i]) - v1.begin() ;
//         count += (high - low) ;
//     }

//     count<<count;

//     return 0 ; 
// }

//🔸 time complexity  : O(2n*log n)
//🔸 space complexity : O(N)




//                //❓Question: In-Place Merge Sort

// You are given an array consisting of N integers. 
// Your task is to sort the array in non-descending order using merge sort. 
// Perform the task as in-place.

// Note:
// In-place means that your implementation does not require extra memory for merge operation, 
// unlike the standard implementation.
// Example:
// Let the array be [1, 2, -3, 4, -4, -5]. /
// On sorting the array in non-descending order we get the resulting array [-5, -4, -3, 1, 2, 4].
// Input Format:
// The very first line of input contains an integer ‘T’ denoting the number of test cases. 

// The first line of every test case contains an integer ‘N’ denoting the number of elements present in the array.

// The second line of every test case contains ‘N’ space-separated integers denoting the elements present in the array.
// Output Format:
// For each test case, the resulting sorted array is printed.

// Output for each test case is printed on a separate line.
// Note:
// You do not need to print anything, it has already been taken care of. Just return the sorted array. 
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 5000
// -10^5 <= Arr[i] <= 10^5

// Where  ‘T’ represents the number of test cases and ‘N’ represents the number of elements present in the array.

// Time Limit: 1 sec

//🔴approach :
// #include <iostream>
// using namespace std;
 
// // Merges two subarrays of arr[].
// // First subarray is arr[l..m]
// // Second subarray is arr[m+1..r]
// // Inplace Implementation

// void merge(int arr[], int start, int mid, int end)
// {
//     int start2 = mid + 1;
 
//     // If the direct merge is already sorted
//     if (arr[mid] <= arr[start2]) {
//         return;
//     }
 
// // Two pointers to maintain start of both arrays to merge
//     while (start <= mid && start2 <= end) {
 
//         // If element 1 is in right place
//         if (arr[start] <= arr[start2]) {
//             start++;
//         }
//         else {
//             int value = arr[start2];
//             int index = start2;
 
//             // Shift all the elements between element 1
//             // element 2, right by 1.
//             while (index != start) {
//                 arr[index] = arr[index - 1];
//                 index--;
//             }
//             arr[start] = value;
 
//             // Update all the pointers
//             start++;
//             mid++;
//             start2++;
//         }
//     }
// }
 
// /* l is for left index and r is right index of the sub-array of arr to be sorted */

// void mergeSort(int arr[], int l, int r)
// {
//     if (l < r) {
 
//         // Same as (l + r) / 2, but avoids overflow
//         // for large l and r
//         int m = l + (r - l) / 2;
 
//         // Sort first and second halves
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
 
//         merge(arr, l, m, r);
//     }
// }
 
// /* UTILITY FUNCTIONS Function to print an array */

// void printArray(int A[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         cout <<" "<< A[i];
//     cout <<"\n";
// }
 
// /* Driver program to test above functions */
// int main()
// {
//     int arr[] = { 12, 11, 13, 5, 6, 7 };
//     int arr_size = sizeof(arr) / sizeof(arr[0]);
 
//     mergeSort(arr, 0, arr_size - 1);
 
//     printArray(arr, arr_size);
//     return 0;
// }
//🔸time complexity : O(n2 * log(n)
//🔸space complexity : O(1)




//             //❓Question : Partitioning and sorting array with many repeating entriess


// Problem statement
// You’re given an array with many repeated values. Your task is to sort this array efficiently.

// Input Format :
// The first line of the input contains an integer T denoting the number of test cases.

// The first line of each test case contains an integer N, the size of the array.

// The second line of each test case contains N space-separated integers, the elements present in the array.
// Output Format :
// For every test case, the only line of output should contain N space-separated integers in sorted order.
// Note :
// You do not need to print anything, it has already been taken care of. Just implement the given function. 
// Constraints :
// 1 <= T <= 10
// 1 <=  N <= 10^5
// 10^-9<= arr[i] <= 10^9

// Time limit: 1 sec

//🔴approach : 
// #include <bits/stdc++.h>

// vector < int > sortArray(vector < int > & arr) {
//  map < int, int > m;
//  for (int i = 0; i < arr.size(); i++) {
//    m[arr[i]]++;
//  }
//  int idx = 0;
//  for (auto & val: m) {
//    while (val.second--) {
//      arr[idx++] = val.first;
//    }
//  }
//  return arr;
// }
//🔸time complexity: O(N logn)
//🔸space complexity: O(N)