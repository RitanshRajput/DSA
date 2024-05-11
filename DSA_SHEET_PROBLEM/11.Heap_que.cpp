
//              🔴🔴 HEAP 🔴🔴 


// A Heap is a special Tree-based data structure in which the tree is a complete binary tree.

//                [10]                              [100]
//              /      \                          /       \ 
//           [15]      [30]                    [40]       [50]
//         /     \    /     \                /     \     /    \   
//      [40]   [50]  [100]  [40]           [10]   [15]  [30]  [40]
//
//           Min Heap                             Max Heap


//🔸Operations of Heap Data Structure:

// Heapify: a process of creating a heap from an array.
// Insertion: process to insert an element in existing heap time complexity O(log N).
// Deletion: deleting the top element of the heap or the highest priority element, and then organizing the heap and returning the element with time complexity O(log N).
// Peek: to check or find the first (or can say the top) element of the heap.

//🔴Types of heaps:
// Generally, heaps are of two types.

// Max-Heap: 
// In this heap, the value of the root node must be the greatest among all its child nodes and the same thing must be done for its left and right sub-tree also.
// The total number of comparisons required in the max heap is according to the height of the tree.
// The height of the complete binary tree is always (logn) 
// therefore, the time complexity would also be O(logn).
//                 [100]
//               /     \ 
//             [80]     [60]
//            /   \     /   \  
//          [50]  [40] [20] [30]
// Every child Node is smaller than parent Node

// Min-Heap: 
// In this heap, the value of the root node must be the smallest among all its child nodes and the same thing must be done for its left ans right sub-tree also.
// The total number of comparisons required in the min heap is according to the height of the tree. 
// The height of the complete binary tree is always (logn )
// therefore, the time complexity would also be O(logn).

//                 [1]
//               /     \ 
//             [20]     [30]
//            /   \     /   \   
//          [40] [50] [70] [60]
// Every child Node is greater than parent node


//
//                     //❓Question: Build Min-heap
//
// You are given an array 'ARR' of integers having 'N' elements. Your task is to convert the input array into a min-Binary Heap.
// A min-Binary heap is a complete binary tree in which the value of each internal node is smaller than or equal to the values of the children
// of that node.

// Notes:
//1. Input array follows 0 - based indexing.
// 2. After constructing the min-heap, the Left child of the 'i-th' node should be present at the (2*i + 1)-th index
// if it exists.
// 3. After constructing the min-heap, the Right child of the 'i-th' node should be present at the (2*i + 2)-th index
// if it exists.
// 4. Note that you do not need to create a tree, just update the array.

// Sample Input 1 :
// 2
// 5
// 9 3 2 6 7 
// 4
// 1 3 2 4
// Sample Output 1 :
// 1
// 1
// Explanation For Sample Input 1 :
// For the first test case:
// One possible min-heap representation of the input array is the array [ 2, 3, 6, 7, 9 ]. 
// Note that other arrays like [ 2, 6, 3, 9, 7 ], [ 2, 3, 6, 9, 7 ] also represent min-heap.

//        [9]                          [2]
//       /    \                      /     \ 
//     [3]   [2]         ==>        [3]    [6]
//    /    \                      /    \ 
//   [6]  [7]                    [7]   [9]


// Sample Input 2 :
// 2
// 5
// 1 3 5 4 6
// 3
// 8 9 0
// Sample Output 2 :
// 1 
// 1
// Explanation For Sample Input 2 :
// For the first test case:
// One possible min-heap representation of the input array is the array [ 1, 3, 5, 4, 6 ] which is the same as the input array. 

// For the second test case: 
// One possible min-heap representation of the input array is the array [ 0, 8, 9 ].

// #include<iostream>
// #include<vector>
// using namespace std ;

// //🔴heapify for Min-heap:
// void heapify( vector<int> &arr, int n, int i) {
//     int smallest = i; 
//     int left = 2*i + 1 ;
//     int right = 2*i + 2 ;

//     if(left < n && arr[smallest] > arr[left] ) {  // here in question indexing start from 0 therefore left < n
//         smallest = left ;
//     }

//     if(right < n && arr[smallest] > arr[right]) { // here in question indexing start from 0 therefore right < n
//         smallest = right ;
//     }

//     if(smallest != i) {
//         swap(arr[smallest], arr[i]) ;
//         heapify(arr, n, smallest) ;
//     }
// }

// vector<int> buildMinHeap(vector<int> &arr){

//     int n = arr.size();
//      for(int i=n/2-1 ; i>=0; i--) {
//         heapify(arr, n, i) ;
//     }

//     return arr ;
// } 
//
//🔸Time Complexity: O(N log n)
//🔸Space Complexity: O(log n)           // recursion space else O(1)
//

//
//                      ❓Question: Build Max-Heap
//
//🔴Approach :
//🔴heapify for Max-heap:
// void heapify( vector<int> &arr, int n, int i) {
//     int largest = i; 
//     int left = 2*i + 1 ;
//     int right = 2*i + 2 ;

//     if(left < n && arr[largest] < arr[left] ) {  
//         largest = left ;
//     }

//     if(right < n && arr[largest] < arr[right]) { 
//         largest = right ;
//     }

//     if(largest != i) {
//         swap(arr[largest], arr[i]) ;
//         heapify(arr, n, largest) ;
//     }
// }

// vector<int> buildMaxHeap(vector<int> &arr){

//     int n = arr.size();
//      for(int i=n/2-1 ; i>=0; i--) {
//         heapify(arr, n, i) ;
//     }

//     return arr ;
// } 
//
//🔸Time Complexity: O(N log n)
//🔸Space Complexity: O(log n)           // recursion space else O(1)
//

//
//                      ❓Question: Heap Sort
//
// Given an array of size N. The task is to sort the array elements by completing 
// functions heapify() and buildHeap() which are used to implement Heap Sort.

// Example 1:
// Input:
// N = 5
// arr[] = {4,1,3,9,7}
// Output:
// 1 3 4 7 9
// Explanation:
// After sorting elements
// using heap sort, elements will be
// in order as 1,3,4,7,9.

// Example 2:
// Input:
// N = 10
// arr[] = {10,9,8,7,6,5,4,3,2,1}
// Output:
// 1 2 3 4 5 6 7 8 9 10
// Explanation:
// After sorting elements
// using heap sort, elements will be
// in order as 1, 2,3,4,5,6,7,8,9,10.
// Your Task :
// You don't have to read input or print anything. Your task is to complete the functions heapify(), buildheap() and heapSort() where heapSort() and buildheap() takes the array and it's size as input and heapify() takes the array, it's size and an index i as input. Complete and use these functions to sort the array using heap sort algorithm.
// Note: You don't have to return the sorted list. You need to sort the array "arr" in place.

// Expected Time Complexity: O(N * Log(N)).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 106
// 1 ≤ arr[i] ≤ 106

//🔴Approach :
// class Solution
// {   
//     public:
//      void heapify(int arr[], int n, int i)  
//     {
//         int largest = i;
//         int l =  2*i+1;
//         int r= 2*i+2;
        
//         if( l<n && arr[l]>arr[largest] )
//         {
//             largest= l;
//         }
        
//         if( r<n && arr[r]>arr[largest] )
//         {
//             largest= r;
//         }
        
//         if(largest!=i)
//         {
//             swap(arr[i],arr[largest]);
//             heapify(arr,n,largest);
//         }
//     }

//     public:
//     //Function to build a Heap from array.
//     void buildHeap(int arr[], int n)  
//     { 
//         for(int i = n/2-1; i >= 0; i--) 
//         {
//             heapify(arr, n, i);
//         }
        
//         heapSort(arr,n);
//         // for(int i=0;i<n;i++) cout<<arr[i];
//     }

    
//     public:
//     //Function to sort an array using Heap Sort.
//     void heapSort(int arr[], int n)
//     {
//         int i;
//         for(i=n/2-1;i>=0;i--)
//         {
//             heapify(arr,n,i);
//         }
    
//          for(i=n-1;i>=0;i--)
//         {
//             swap(arr[0],arr[i]);
//             heapify(arr,i, 0);
//         }
//     }
// };

//
//🔸Time Complexity: O(N *log N)
//🔸Space Complexity: O(1)
//

//
//                      ❓Question: IPL 2021 - Match Day 2
//
// Due to the rise of covid-19 cases in India, this year BCCI decided to organize 
// knock-out matches in IPL rather than a league.
// Today is matchday 2 and it is between the most loved team Chennai Super Kings and 
// the most underrated team - Punjab Kings. Stephen Fleming, the head coach of CSK, 
// analyzing the batting stats of Punjab. He has stats of runs scored by all N players 
// in the previous season and he wants to find the maximum score for each and every 
// contiguous sub-list of size K to strategize for the game.

// Example 1:
// Input:
// N = 9, K = 3
// arr[] = 1 2 3 1 4 5 2 3 6
// Output: 
// 3 3 4 5 5 5 6 
// Explanation: 
// 1st contiguous subarray = {1 2 3} Max = 3
// 2nd contiguous subarray = {2 3 1} Max = 3
// 3rd contiguous subarray = {3 1 4} Max = 4
// 4th contiguous subarray = {1 4 5} Max = 5
// 5th contiguous subarray = {4 5 2} Max = 5
// 6th contiguous subarray = {5 2 3} Max = 5
// 7th contiguous subarray = {2 3 6} Max = 6

// Example 2:
// Input:
// N = 10, K = 4
// arr[] = 8 5 10 7 9 4 15 12 90 13
// Output: 
// 10 10 10 15 15 90 90
// Explanation: 
// 1st contiguous subarray = {8 5 10 7}, Max = 10
// 2nd contiguous subarray = {5 10 7 9}, Max = 10 
// 3rd contiguous subarray = {10 7 9 4}, Max = 10 
// 4th contiguous subarray = {7 9 4 15}, Max = 15
// 5th contiguous subarray = {9 4 15 12}, Max = 15 
// 6th contiguous subarray = {4 15 12 90}, Max = 90 
// 7th contiguous subarray = {15 12 90 13}, Max = 90 

// Your Task:  
// You don't need to read input or print anything. Complete the function max_of_subarrays() which takes the array, N, and K as input parameters and returns a list of integers denoting the maximum of every contiguous subarray of size K.

// Constraints:
// 1 ≤ N ≤ 106
// 1 ≤ K ≤ N
// 0 ≤ arr[i] ≤ 106

//🔴Approach :
// class Solution {
//   public:
//     vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        
//        priority_queue<pair<int,int>>pq;
//         for(int i=0; i<k-1; i++) {
//             pq.push({arr[i],i});
//         }
        
//         vector<int>ans;
        
//         for(int i = k-1;i<n ; i++) {
//             pq.push({arr[i],i});
            
//             while(!pq.empty() && pq.top().second < i-(k-1)){
//                 pq.pop();
//             }
            
//             ans.push_back(pq.top().first);
//         }
//         return ans;
//     }
// };
//
//🔸Time Complexity: O(N)
//🔸Space Complexity: O(k)
//

//
//                      ❓Question: K Largest Elements
//
// Given an array Arr of N positive integers and an integer K, find K largest elements 
// from the array.  The output elements should be printed in decreasing order.

// Example 1:
// Input:
// N = 5, K = 2
// Arr[] = {12, 5, 787, 1, 23}
// Output: 787 23
// Explanation: 1st largest element in the
// array is 787 and second largest is 23.

// Example 2:
// Input:
// N = 7, K = 3
// Arr[] = {1, 23, 12, 9, 30, 2, 50}
// Output: 50 30 23
// Explanation: 3 Largest element in the
// array are 50, 30 and 23.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function kLargest() which takes the array of integers arr, n and k as parameters and returns an array of integers denoting the answer. The array should be in decreasing order.

// Expected Time Complexity: O(K+(N-K)*logK)
// Expected Auxiliary Space: O(K+(N-K)*logK)

// Constraints:
// 1 ≤ K ≤ N ≤ 105
// 1 ≤ Arr[i] ≤ 106

//🔴Approach :
// class Solution{
// public:	
// 	vector<int> kLargest(int arr[], int n, int k) {
// 	    vector<int> ans;
// 	    priority_queue<int> pq;
	    
// 	    for(int i=0; i<n; i++){
// 	        pq.push(arr[i]);
// 	    }
	    
// 	    for(int i=0; i<k; i++){
// 	        ans.push_back(pq.top());
// 	        pq.pop();
// 	    }
	 
// 	 return ans;   
// 	}
// };

//
//🔸Time Complexity: O(N Log n)
//🔸Space Complexity: O(N)
//

//
//                      ❓Question: Kth Smallest Element
//
// Given an array arr[] and an integer k where k is smaller than the size of the array, 
// the task is to find the kth smallest element in the given array. It is given that 
// all array elements are distinct.
// Note:-  l and r denotes the starting and ending index of the array.

// Example 1:
// Input:
// n = 6
// arr[] = 7 10 4 3 20 15
// k = 3
// l=0 r=5
// Output : 
// 7
// Explanation :
// 3rd smallest element in the given array is 7.

// Example 2:
// Input:
// n = 5
// arr[] = 7 10 4 20 15
// k = 4 
// l=0 r=4
// Output : 
// 15

// Explanation :
// 4th smallest element in the given array is 15.
// Your Task:
// You don't have to read input or print anything. Your task is to complete the function kthSmallest() which takes the array arr[], integers l and r denoting the starting and ending index of the array and an integer k as input and returns the kth smallest element.
 
// Expected Time Complexity: O(n*log(n) )
// Expected Auxiliary Space: O(log(n))
// Constraints:
// 1 <= n <= 105
// l = 0
// r = N-1
// 1<= arr[i] <= 105
// 1 <= k <= n

//🔴Approach :
// class Solution{
//     public:
//     // arr : given array
//     // l : starting index of the array i.e 0
//     // r : ending index of the array i.e size-1
//     // k : find kth smallest element and return using this function
//     int kthSmallest(int arr[], int l, int r, int k) {
//         priority_queue<int, vector<int>, greater<int>> pq;
        
//         for(int i=l; i<=r; i++){
//             pq.push(arr[i]) ;
//         }
        
//         for(int i=0; i<k-1; i++){
//             pq.pop();
//         }
        
//         return pq.top();
//     }
// };

//
//🔸Time Complexity: O(n log n)
//🔸Space Complexity: O(log n)
//

//
//                      ❓Question: Merge K sorted Arrays
//
// Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.

// Example 1:
// Input:
// K = 3
// arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
// Output: 1 2 3 4 5 6 7 8 9
// Explanation:Above test case has 3 sorted
// arrays of size 3, 3, 3
// arr[][] = [[1, 2, 3],[4, 5, 6], 
// [7, 8, 9]]
// The merged list will be 
// [1, 2, 3, 4, 5, 6, 7, 8, 9].

// Example 2:
// Input:
// K = 4
// arr[][]={{1,2,3,4},{2,2,3,4},
//          {5,5,6,6},{7,8,9,9}}
// Output:
// 1 2 2 2 3 3 4 4 5 5 6 6 7 8 9 9 
// Explanation: Above test case has 4 sorted
// arrays of size 4, 4, 4, 4
// arr[][] = [[1, 2, 2, 2], [3, 3, 4, 4],
// [5, 5, 6, 6], [7, 8, 9, 9 ]]
// The merged list will be 
// [1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 
// 6, 6, 7, 8, 9, 9].
// Your Task:
// You do not need to read input or print anything. Your task is to complete mergeKArrays() function which takes 2 arguments, an arr[K][K] 2D Matrix containing K sorted arrays and an integer K denoting the number of sorted arrays, as input and returns the merged sorted array ( as a pointer to the merged sorted arrays in cpp, as an ArrayList in java, and list in python)

// Expected Time Complexity: O(K2*Log(K))
// Expected Auxiliary Space: O(K2)

// Constraints:
// 1 <= K <= 100

//🔴Approach :
// class Solution
// {
//     public:
//     //Function to merge k sorted arrays.
//     vector<int> mergeKArrays(vector<vector<int>> arr, int K)
//     {
//         priority_queue<int, vector<int>, greater<int>> pq;  // min heap
//         vector<int> ans;
//         int row = arr.size();
//         int col = arr[0].size();
        
//         for(int i=0; i<row; i++){
//             for(int j=0; j<col; j++){
//                 pq.push(arr[i][j]);
//             }
//         }
        
//         while(!pq.empty()){
//             ans.push_back(pq.top());
//             pq.pop();
//         }
        
//         return ans;
//     }
// };

//
//🔸Time Complexity: O(row*col + logn)  
//🔸Space Complexity: O(row*col)
//

//
//                      ❓Question: Merge two binary Max heaps
//
// Given two binary max heaps as arrays, merge the given heaps to form a new max heap.

// Example 1:
// Input  : 
// n = 4 m = 3
// a[] = {10, 5, 6, 2}, 
// b[] = {12, 7, 9}
// Output : 
// {12, 10, 9, 2, 5, 7, 6}
// Explanation :

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function mergeHeaps() which takes the array a[], b[], its size n and m, as inputs and return the merged max heap. Since there can be multiple solutions, therefore, to check for the correctness of your solution, your answer will be checked by the driver code and will return 1 if it is correct, else it returns 0.
// Expected Time Complexity: O(n.Logn)
// Expected Auxiliary Space: O(n + m)
// Constraints:
// 1 <= n, m <= 105
// 1 <= a[i], b[i] <= 2*105

//🔴Approach :
// class Solution{
//   public:
//    void heapify(vector<int> &arr, int n, int i){
//         int largest = i;
//         int left = 2 * i + 1;
//         int right = 2 * i + 2 ;
        
//         if(left < n && arr[largest] < arr[left]) {
//             largest = left ;
//         }
//         if(right < n && arr[largest] < arr[right]) {
//             largest =  right ;
//         }
        
//         if(largest != i){
//             swap( arr[largest], arr[i]) ;
//             heapify(arr, n, largest) ;
//         }
//     }
    
    
//     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        
//         //create a array and merge both array element into this one
//         vector<int> ans ;
        
//         for(auto i:a){
//             ans.push_back(i) ;
//         }
//         for(auto i:b){
//             ans.push_back(i) ;
//         }
        
//         // now create a heap using heapify 
//         int size = ans.size() ;
//         for( int i=size/2-1; i>=0; i--){
//             heapify(ans, size, i) ;
//         }
        
//         return ans ;
//     }
// };

//
//🔸Time Complexity: O(n* log n)
//🔸Space Complexity: O(n+m)
//

//
//                      ❓Question: K-th Largest Sum Contiguous Subarray
//
// You are given an array Arr of size N. You have to find the K-th largest sum of contiguous 
// subarray within the array elements. In other words, over all subarrays, find the 
// subarray with k-th largest sum and return its sum of elements.

// Example 1:
// Input:
// N = 3
// K = 2
// Arr = {3,2,1}
// Output:
// 5
// Explanation:
// The different subarray sums we can get from the array
// are = {6,5,3,2,1}. Where 5 is the 2nd largest.
 
// Example 2:
// Input:
// N = 4
// K = 3
// Arr = {2,6,4,1}
// Output:
// 11
// Explanation:
// The different subarray sums we can get from the array
// are = {13,12,11,10,8,6,5,4,2,1}. Where 11 is the 3rd largest.
 
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function kthLargest() which takes the array Arr[] and its size N as inputs and returns the Kth largest subarray sum.
// Expected Time Complexity: O(N2 * log K)
// Expected Auxiliary Space: O(K)
// Constraints:
// 1 <= N <= 100
// 1 <= K <= (N*(N+1))/2
// -105 <= Arr[i] <= 105
// Sum of N over all test cases doesn't exceed 1000.
// Array may contain duplicate elements.

//🔴Approach :
// class Solution{
// public:
//     int kthLargest(vector<int> &arr,int N,int k){
//         int sum=0;
//         priority_queue<int,vector<int>,greater<int>> minHeap;
        
//         for(int i=0; i<N; i++){
//             sum = 0;
//             for(int j=i; j<N; j++){
//                 sum += arr[j];
                
//                 if(minHeap.size() > k){
//                     minHeap.pop();
//                     minHeap.push(sum);
//                 }
//                 else{
//                     minHeap.push(sum);
//                 }
//             }
//         }
        
//         if(k == minHeap.size()) {
//             return minHeap.top();
//         }
        
//         minHeap.pop();
//         return minHeap.top() ;
        
//     }
// };
//
//🔸Time Complexity: O(N^2 * Log K)
//🔸Space Complexity: O(K)
//

//
//                      ❓Question: Reorganise String
//
// Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.
// Return any possible rearrangement of s or return "" if not possible.

// Example 1:
// Input: s = "aab"
// Output: "aba"
// Example 2:

// Input: s = "aaab"
// Output: ""
 
// Constraints:
// 1 <= s.length <= 500
// s consists of lowercase English letters.

//🔴Approach :
// class Solution {
// public:
//     string reorganizeString(string S) {
//         string res="";
//         unordered_map<char,int> mp;
//         priority_queue<pair<int,char>>pq;
        
//         for(auto s: S){
//             mp[s]+=1;
//         }
        
//         for(auto m: mp){
//             pq.push(make_pair(m.second,m.first));
//         }
        
//         while(pq.size()>1){
//             auto top1= pq.top();
//             pq.pop();
//             auto top2 = pq.top();
//             pq.pop();
            
//             res+=top1.second;
//             res+=top2.second;
            
//             top1.first -=1;
//             top2.first -= 1;
            
//             if(top1.first > 0){
//                 pq.push(top1);
//             }
            
//             if(top2.first > 0){
//                 pq.push(top2);
//             }
//         }
        
//         if(!pq.empty()){
//             if(pq.top().first > 1){
//                 return "";
//             }
//             else{
//                 res+=pq.top().second;
//             }
//         }
        
//         return res;
//     }
// };
//
//🔸Time Complexity: O(N * M log K)  // N  = string length, M = distinct character
//🔸Space Complexity: O(N + M) 
//

//
//                      ❓Question: Merge K sorted LinkedList
//
// Given K sorted linked lists of different sizes. The task is to merge them in such
// a way that after merging they will be a single sorted linked list.

// Example 1:
// Input:
// K = 4
// value = {{1,2,3},{4 5},{5 6},{7,8}}
// Output: 1 2 3 4 5 5 6 7 8
// Explanation:
// The test case has 4 sorted linked 
// list of size 3, 2, 2, 2
// 1st    list     1 -> 2-> 3
// 2nd   list      4->5
// 3rd    list      5->6
// 4th    list      7->8
// The merged list will be
// 1->2->3->4->5->5->6->7->8.

// Example 2:
// Input:
// K = 3
// value = {{1,3},{4,5,6},{8}}
// Output: 1 3 4 5 6 8
// Explanation:
// The test case has 3 sorted linked
// list of size 2, 3, 1.
// 1st list 1 -> 3
// 2nd list 4 -> 5 -> 6
// 3rd list 8
// The merged list will be
// 1->3->4->5->6->8.
// Your Task:
// The task is to complete the function mergeKList() which merges the K given lists into a sorted one. The printing is done automatically by the driver code.

// Expected Time Complexity: O(nk Logk)
// Expected Auxiliary Space: O(k)
// Note: n is the maximum size of all the k link list

// Constraints
// 1 <= K <= 103

//🔴Approach :

// struct compare {
//     bool operator()(Node* a, Node* b) {
//         return a->data > b->data;
//     }
// };

// class Solution{
//   public:
//     Node* mergeTwoList(Node* l1, Node* l2){
//         if(!l1) return l2;
//         if(!l2) return l1;
        
//         Node* dummy = new Node(0);
//         Node* tail = dummy;
        
//         while(l1 && l2){
//             if(l1->data < l2->data){
//                 tail->next = l1;
//                 l1 = l1->next;
//             }
//             else{
//                 tail->next = l2;
//                 l2 = l2->next;
//             }
            
//             tail = tail->next;
//         }
        
//         if(l1) tail->next = l1;
//         if(l2) tail->next = l2;
        
//         Node* head = dummy->next;
//         delete dummy;
//         return head;
//     }
  
//     //Function to merge K sorted linked list.
//     Node* mergeKLists(Node *arr[], int K)
//     {
//         priority_queue<Node*, vector<Node*>, compare> minHeap;
        
//         for(int i=0; i<K; i++){
//             if(arr[i] != NULL){
//                 minHeap.push(arr[i]) ;
//             }
//         }
        
//         if(minHeap.empty()){
//             return NULL;
//         }
        
//         while(minHeap.size() > 1){
//             Node* l1 = minHeap.top();
//             minHeap.pop();
//             Node* l2 = minHeap.top();
//             minHeap.pop();
            
//             minHeap.push(mergeTwoList(l1, l2));
//         }
        
//         return minHeap.top() ;
//     }
// };
//
//🔸Time Complexity: O(N * k log k)
//🔸Space Complexity: O(log K)
//

//
//                      ❓Question: Smallest Range in K list
//
// Given K sorted lists of integers, KSortedArray[] of size N each. The task is to find the 
// smallest range that includes at least one element from each of the K lists. If more than 
// one such range's are found, return the first such range found.

// Example 1:
// Input:
// N = 5, K = 3
// KSortedArray[][] = {{1 3 5 7 9},
//                     {0 2 4 6 8},
//                     {2 3 5 7 11}}
// Output: 1 2
// Explanation: K = 3
// A:[1 3 5 7 9]
// B:[0 2 4 6 8]
// C:[2 3 5 7 11]
// Smallest range is formed by number 1
// present in first list and 2 is present
// in both 2nd and 3rd list.

// Example 2:
// Input:
// N = 4, K = 3
// KSortedArray[][] = {{1 2 3 4},
//                     {5 6 7 8},
//                     {9 10 11 12}}
// Output: 4 9
// Your Task :

// Complete the function findSmallestRange() that receives array , array size n and k as parameters and returns the output range (as a pair in cpp and array of size 2 in java and python)
// Expected Time Complexity : O(n * k *log k)
// Expected Auxilliary Space  : O(k)
// Constraints:
// 1 <= K,N <= 500
// 0 <= a[ i ] <= 105

//🔴Approach :
// class Solution{
//     public: 
//     class node {
//         public:
//         int data;
//         int row;
//         int col;
        
//         // Constructor to initialize the node
//         node(int d, int r, int c){
//             data = d;
//             row = r;
//             col = c;
//         }
//     };
    
//     // Comparator class for the priority queue
//     class compare {
//         public:
//         // Overloading the '()' operator for comparison
//         bool operator()(node* a, node* b) {
//             return a->data > b->data; // Min-heap based on data
//         }
//     };
    
//     // Method to find the smallest range
//     pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
//     {
//           // Initialize variables
//           int mini = INT_MAX, maxi=INT_MIN;
//           priority_queue<node*, vector<node*>, compare > pq;
          
//           // Push the first element of each list into the priority queue
//           for(int i=0; i<k; i++) {
//               int element = KSortedArray[i][0];
//               mini = min(mini,element);
//               maxi = max(maxi,element);
//               pq.push(new node(element,i,0));
//           }
          
//           // Set the initial range
//           int start = mini , end = maxi;
          
//           // Main loop to find the smallest range
//           while(!pq.empty())
//           {
//               // Get the smallest element and its position
//               node* temp = pq.top();
//               pq.pop();
//               mini = temp->data;
              
//               // Update the range if a smaller one is found
//               if(maxi-mini < end - start)
//               {
//                   start = mini;
//                   end = maxi;
//               }
              
//               // Check for the next element in the same row
//               if(temp -> col + 1 < n)
//               {
//                   // Update maxi and push the next element into the queue
//                   maxi = max(maxi,KSortedArray[temp->row][temp->col + 1]);
//                   pq.push(new node(KSortedArray[temp->row][temp->col + 1],
//                   temp->row, temp -> col + 1));
//               }
//               else 
//                 break; // Break if there is no next element
//           }
          
//           // Return the smallest range found
//           return {start,end};
//     }
// };

//
//🔸Time Complexity: O(N * k * logK)
//🔸Space Complexity: O(K)
//

//
//                      ❓Question:
//

//🔴Approach :

//
//🔸Time Complexity: O()
//🔸Space Complexity: O()
//

//
//                      ❓Question:
//

//🔴Approach :

//
//🔸Time Complexity: O()
//🔸Space Complexity: O()
//

//
//                      ❓Question:
//

//🔴Approach :

//
//🔸Time Complexity: O()
//🔸Space Complexity: O()
//

//
//                      ❓Question:
//

//🔴Approach :

//
//🔸Time Complexity: O()
//🔸Space Complexity: O()
//

//
//                      ❓Question:
//

//🔴Approach :

//
//🔸Time Complexity: O()
//🔸Space Complexity: O()
//
