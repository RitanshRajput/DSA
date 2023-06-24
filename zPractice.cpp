//                                      //❓ Reverse the array :
// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size){
//     int start = 0;
//     int end = size-1;
//     // int temp = 0;

//     while(start<=end) {
//         // swap(arr[start], arr[end]) ;          //using in build swap function
  
//         // temp = arr[start] ;                      // using functional swapping
//         // arr[start] = arr[end] ;
//         // arr[end] = temp ;
        
//         start++ ;
//         end-- ;
//     }

//     //print reverse array ;
//     for(int i=0; i<size; i++) {
//         cout<< arr[i] << " " ;
//     }
// }

// int main() {
// int arr[12] = {23, 22, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1} ;
// int size = sizeof(arr) / sizeof(arr[0]) ;                    // way to get size of array

// reverse(arr,size) ;

// cout<<size ;

//     return 0;
// }

//                                        // ❓Find min and max sum ;

//🔸Correct approach With TLE
// #include<iostream>
// using namespace std;

// int minmaxsum(int arr[], int size) {
//         int start = 0;
//         int mini = arr[0];
//         int maxi = arr[0]; 

//         while(start < size) {
//             cout<<mini <<" , "<<maxi <<endl ;
//             if(arr[start] < mini){
//                 mini = arr[start] ;
//             }
//             if( arr[start] > maxi) {
//                 maxi = arr[start] ;
//             }
//             start++ ;
//         }

//         int sum = maxi + mini ;
//         return sum ;
// }

// int main() {
//      int arr[5] = {-1 ,-2, -3, -4 ,-5} ;
//     int size = sizeof(arr) / sizeof(arr[0]) ;

//    int ans =  minmaxsum(arr, size) ;
//    cout<<" min max sum = "<<ans <<endl ;
//     return 0 ;
// }

//🔴Optimise approach (without TLE)
// #include<iostream>
// #include<algorithm>
// using namespace std ;

// int findMinMax(int A[], int N) {
//     	int start = 0;
//     	int maxi = A[start];
//     	int mini = A[start] ;
//     	while(start < N){ 
//             if(start+1 < N){
//           maxi = max(maxi, A[start+1]) ;
//           mini = min(mini, A[start+1]) ;
//         }
//           start++ ;
//     	}
//     	int sum = mini + maxi ; 
//         cout<<" Sum : "<<sum <<endl ;
//     	return sum ;
// }

// int main() {
//     int arr[5] = {-1 ,-2, -3, -4 ,-5} ;
//     int n = 5 ;

//     int ans = findMinMax(arr, n) ;
//     cout<< "ans : "<<ans <<endl ;
//     return 0 ;
// }


//                              //❓ find kth smallest element :
// #include<iostream>
// using namespace std ;
// int findK(int arr[], int s ,int e, int k) {
//     //insertion sort
//     for(int i=1; i<e; i++){
//         int temp = arr[i] ;
//         int j = i - 1 ;

//         for( ; j>=0; j--){
//             if(arr[j] > temp){
//                 arr[j+1] = arr[j] ;
//             }
//             else{
//                 break ;
//             }
//         }
//         arr[j+1] = temp ;
//     }
// cout<<"sorted array : "<<endl ;
// for( int i=0; i<e; i++){
//  cout<< arr[i] << " " ;
// }
//     return arr[k-1] ;
// }


// int main() {
//     int arr[5] = {7 ,10 ,4, 20 ,15} ;
//     int s = 0;
//     int e = 5;
//     int k = 4 ;

// int ans = findK(arr, s, e, k) ;
// cout<< " kth smallest element : "<<ans <<endl ;
// }


//                             //❓sort 0s 1s 2s 
// #include<iostream>
// using namespace std ;

// void sortNumber(int arr[], int n){
//     int zero = 0;
//     int one = 0;
//     int two = 0;

// //dutch national flag algorithm
//     for(int i=0; i<n; i++){
//         if( arr[i] == 0) zero++ ;
//         if( arr[i] == 1) one++ ;
//         if( arr[i] == 2) two++ ;
//         cout<<" zero, one, two : "<< zero << "," <<one << ","<< two <<endl ;
//     }
   
//     int i=0 ;
//     while( zero > 0 ){
//         arr[i] = 0 ;
//         zero-- ;
//         i++ ;
//     }
//      while( one > 0 ){
//         arr[i] = 1 ;
//         one-- ;
//         i++ ;
//     }
//      while( two> 0 ){
//         arr[i] = 2 ;
//         two-- ;
//         i++ ;
//     }

//     for(int i=0; i<n ; i++){
//         cout<< arr[i] <<" " ;
//     }
    
// }

// int main() {
//     int arr[5] = {0, 2, 1, 2, 0} ;
//     int n = 5;
//     sortNumber(arr, n) ;

//     return 0;
// }


//                           //❓ Move all the negative elements to one side of the array
// #include<iostream>
// using namespace std ;
// void sortNegative( int arr[], int size) {

//     // selection sort
//     for(int i=0; i<size; i++){
//         int minIndex = i ;

//         for(int j=i+1; j<size; j++){
//             if(arr[minIndex] > arr[j]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]) ;
//     }

//     //loop to print sorted array
//      for(int i=0; i< size; i++) {
//         cout<<"["<< arr[i] <<"] " ;
//      }
// }

// int main() {
//   int arr[7] = {-12, 2, 5, -16, -3 , 1, 0} ;
//   int size = 7 ;
//   sortNegative(arr,size) ;
//   return 0 ;
// }

//                            //❓ Union of two arrays

// ex:
// input : a ={1,2,3,4}
//         b = {6,7,2}
// output:  {1,2,3,4,6,7}

//🔸 correct brute force solution but TLE:
// #include<iostream>
// using namespace std;

// int Union(int a[], int n, int b[], int m){
//     int i = 0 ;
//     int j = 0 ;
//     int count  = 0;

//     while(i<n) {
//         j = 0;
//         while(j< m){
//           if(a[i] == b[j]) {
//             count++ ;
//           }
//           j++ ;
//         }
//         i++;
//     }

//     return i+j - count ;   
// }

// int main() {

// int a[6] = {85, 25, 1, 32, 54, 6}  ;
// int b[2] = {85, 2} ;

// int n = 6;
// int m = 2;

// int ans = Union(a,n,b,m) ;
// cout<<" ans :"<<ans <<endl ;
//     return 0;
// }

//🔸 approach 2 brute force but no TLE works fine :
// #include<iostream>
// #include<vector>
// using namespace std;

// int Union(int a[], int n, int b[], int m){

//     //create a vector of size 10^5 = contraint and assign all index with element 0
//    vector<int> t(100001,0);

//         int count=0;            //count to check total number of element

// //for loop for 1st array a[]
// // here in vector t we have already define all element as 0;
// // so we say if on index i  the element is 0 then make it 1 and increaase the count
//         for(int i=0;i<n;i++){
//             if(t[a[i]]==0){
//                 t[a[i]]=1;
//                 count++;
//             }
//         }

// // same for loop for other array[] b[] but with some change in vector
// // as we have already assign 1 on the some index i in the above for loop
// // here if the element is different then only vector t will accept the element else wont accept
// // if element = 0 then assign 1 at that place and count++ 
//         for(int j=0;j<m;j++){

//             if(t[b[j]]==0){
//                 t[b[j]]=1;
//                 count++;
//             }
//         }
// // atlast return count

// return count;
// }

// int main() {

// int a[6] = {85, 25, 1, 32, 54, 6}  ;
// int b[2] = {85, 2} ;

// int n = 6;
// int m = 2;

// int ans = Union(a,n,b,m) ;
// cout<<" ans :"<<ans <<endl ;
//     return 0;
// }

 //🔸approach 3: using set
// #include<iostream>
// #include<set>
// using namespace std;

// int Union(int a[], int n, int b[], int m){

//   set<int> ans ;
  
//   for(int i=0; i<n ; i++) {
//       ans.insert(a[i]) ;
//   }
//   for(int j=0; j<m ; j++) {
//       ans.insert(b[j]) ;
//   }

//   return ans.size() ;
  
// };


//                         //❓Intersection of two array

// Input:
// n = 5, m = 3
// a[] = {89, 24, 75, 11, 23}
// b[] = {89, 2, 4}

// Output: 1

// Explanation: 
// 89 is the only element 
// in the intersection of two arrays.


// 🔸Appraoch 1: but not passing all test cases 50/90 
// after 50 testcases its showing wrong answer
// #include<iostream>
// #include<vector>
// using namespace std;

// int intersection(int a[], int n, int b[], int m){
//         int count = 0;
//         int total = (n)+(m) ;
//         cout<<"total :"<<total <<endl ;
//         vector<int> t(100001, 0) ;
        
//         for(int i=0; i<n; i++){
//             if(t[a[i]] == 0) {
//                 t[a[i]] = 1;
//                 count++ ;
//             }
//         }
        
//         for(int j=0 ; j <m; j++){
//             if(t[b[j]] != 0){
//                 count++ ;
//             }
//         }
//         cout<<"count :"<<count <<endl ;

//         long Final = total - count ;
//         cout<<"final :"<<Final <<endl ;
        
//         return Final ;
      
//     }

// int main() {

// int a[5] = {89, 24, 75, 11, 23} ;
// int b[3] = {89, 23, 4} ;
// int n = 5 ; 
// int m = 3;

// int ans = intersection(a, n, b, m) ;

// cout<< "total similar element : "<< ans <<endl ;

//     return 0;
// }


//🔸Approach 2 : brute force but working very well :
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int intersection(int a[], int n, int b[], int m){
//     //initialising count i j as 0
//       int count = 0;
//       int i = 0 ;
//       int j = 0 ;
      
//       // sorting both array using in-build function 
//       sort(a, a+n) ;
//       sort(b, b+m) ;
      
//       //main loop till both i and j are less than n and m
//       while( i<n && j<m) {
          
//           // if element are same then count++ i++ j++ 
//           if( a[i] == b[j]) {
//               count++ ;
//               j++ ;
//               i++ ;
               
//             // also we need to make sure if there is similar element in the same array 
//               while( a[i] == a[i-1]) i++ ;
//               while( b[j] == b[j-1]) j++ ;
//           }
//           // if a[i] is greater than b[j] then increase j to position both of them on equal index
//           else if ( a[i] > b[j] ) j++ ;
//           // if a[i] is less than b[j] then increase i to posiiton both of them on equal index
//           else if ( a[i] < b[j] ) i++ ;
//       }
      
//       return count; 
//     }

// int main() {

// int a[5] = {89, 24, 75, 11, 23} ;
// int b[3] = {89, 23, 4} ;
// int n = 5 ; 
// int m = 3;

// int ans = intersection(a, n, b, m) ;

// cout<<"ans : "<< ans <<endl ;

//     return 0;
// }



//                            //❓Rotate an array cyclically 
//input: [1,2,3,4,5] 
//output: [5,1,2,3,4]

// #include<iostream>
// using namespace std;

// void rotate(int arr[], int n) {
//     int temp[n] ;
//     temp[0] = arr[n-1] ;
     
//     int i = 1;
//     while( i < n) {
//         temp[i] = arr[i-1] ;
//         i++ ;
//     }
     
//      // copying rotated element from temp to arr and printing them
//     cout<<" rotated array : "<<endl ;
//     int j=0;
//     while(j<n){
//         arr[j] = temp[j] ;
//         cout<< arr[j] << " ";
//         j++ ;
//     }
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5} ;
//     int n = 5 ;
    
//     //printing original array
//     cout<<" original array : "<<endl ;
//     for(int i=0; i<n; i++){
//         cout<< arr[i] << " ";
//     }
//     cout<<endl ;

//     rotate(arr, n) ;
//     return 0;
// }


//                      //❓❓ Find (Max sum of contigous sub-array)

//Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) 
// which has the maximum sum and return its sum.

// Example 1:
// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9

// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.

// Example 2:
// Input:
// N = 4
// Arr[] = {-1,-2,-3,-4}
// Output:
// -1

// Explanation:
// Max subarray sum is -1 
// of element (-1)

//🔸Brute force approach (TLE) O(n^2) time complexity
// #include<iostream>
// #include<limits.h>
// using namespace std;

// long long kadane(int arr[], int n) {
   
//  int globalSum = INT_MIN ;
//  int localSum ;

//  for(int i=0; i<n; i++){
//     localSum = 0;

//     for(int j=i; j<n; j++){
//         localSum = localSum + arr[j] ;

//         if( localSum > globalSum){
//             globalSum = localSum ;
//         }
//     }
//  }

//  return globalSum ;
// }

// int main() {
//     int arr[5] = {1, 2, 3, -2, 5} ;
//     int n = 5 ;

//  long long ans =  kadane(arr, n) ;

//  cout<<" sum of max sub-array : "<< ans <<endl ;
//     return 0;
// }


//🔴 approach 2: working fine
//   long long maxSubarraySum(int arr[], int n){
        
//     long long maxi = 0 ;
//     long long ans = arr[0] ;
    
//     for(int i=0; i<n; i++) {
//         maxi = max((long long)arr[i], maxi + arr[i]) ;       // typecasting array element from int to long long, so it wont give error
//         ans =  max(maxi, ans) ;
//     }
    
//     return ans ; 
//     }


//🔴 Optimised kadane's algorithm O(n) time complexity
// #include<iostream>
// #include<limits.h>
// using namespace std;

// long long kadane(int arr[], int n) {
   
//  int globalSum = INT_MIN ;
//  int localSum = 0 ;

//  for(int i=0; i<n; i++){
//     localSum = max(arr[i], (arr[i] + localSum)) s;

//     if(localSum > globalSum){
//         globalSum = localSum ;
//     }
//  }

//  return globalSum ;
// }

// int main() {
//     int arr[5] = {1, 2, 3, -2, 5} ;
//     int n = 5 ;

//  long long ans =  kadane(arr, n) ;

//  cout<<" sum of max sub-array : "<< ans <<endl ;
//     return 0;
// }



//                   //❓ Minimize the heights I
//Given an array arr[] denoting heights of N towers and a positive integer K, 
//you have to modify the height of each tower either by increasing or decreasing them by K only once.
// Find out what could be the possible minimum difference of 
// the height of shortest and longest towers after you have modified each tower.

//🔸Note: Assume that height of the tower can be negative.


// Example 1:
// Input:
// K = 2, N = 4
// Arr[] = {1, 5, 8, 10}

// Output:
// 5

// Explanation:
// The array can be modified as 
// {3, 3, 6, 8}. The difference between 
// the largest and the smallest is 8-3 = 5.

// Example 2:
// Input:
// K = 3, N = 5
// Arr[] = {3, 9, 12, 16, 20}

// Output:
// 11

// Explanation:
// The array can be modified as
// {6, 12, 9, 13, 17}. The difference between 
// the largest and the smallest is 17-6 = 11. 

//🔸To simply put The question it says that
// add and substract every element in the array by K
// and find the minimum difference after updating every element 

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int miniDiff(int arr[], int size, int k) {
//     sort(arr, arr+size) ;   //sort array using inbuild function

//     int mini = arr[0] ; // minimum elem
//     int maxi = arr[size -1] ; //maximum elem

//     int result = maxi - mini ;  //result storing mini diff

//     for(int i=1; i<size; i++) {
//         mini = min(arr[0]+k , arr[i]-k) ;
//         maxi = max(arr[size-1]-k , arr[i-1]+k) ;

//         result = min(result, maxi - mini) ;
//     }
//     return result ;
   
// }

// int main() {
//     int arr[10] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1} ;
//     int size = sizeof(arr) / sizeof(arr[0]) ;
//     int k = 5 ;

//     int answer = miniDiff(arr, size, k) ;
//     cout<<" minimum difference of the height of shortest and longest towers after you have modified each tower: " <<endl ;
//     cout<<answer <<endl ;
// }



//                   //❓ Minimize the heights II
//Given an array arr[] denoting heights of N towers and a positive integer K.
// For each tower, you must perform exactly one of the following operations exactly once.
// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

//🔸 Note:
// It is compulsory to increase or decrease the height by K for each tower. 
//After the operation, the resultant array should not contain any negative integers.

// Example 1:
// Input:
// K = 2, N = 4
// Arr[] = {1, 5, 8, 10}

// Output:
// 5

// Explanation:
// The array can be modified as 
// {3, 3, 6, 8}. The difference between 
// the largest and the smallest is 8-3 = 5.

// Example 2:
// Input:
// K = 3, N = 5
// Arr[] = {3, 9, 12, 16, 20}

// Output:
// 11

// Explanation:
// The array can be modified as
// {6, 12, 9, 13, 17}. The difference between 
// the largest and the smallest is 17-6 = 11. 

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int minDiff(int arr[], int size, int k){
//     sort(arr, arr+size) ;

//     int mini = arr[0] ;
//     int maxi = arr[size - 1] ;
//     int result = maxi - mini ;

//     for(int i=0; i<size; i++) {
       
//        if(arr[i]-k < 0){
//         continue ;
//        }

//        mini = min(arr[0]+k, arr[i]-k) ;
//        maxi = max(arr[size-1]-k, arr[i-1]+k) ;

//        result = min(result, maxi - mini);
//     }

//    return result ;
// }

// int main() {
//     int arr[5] = {3, 12, 20, 9, 16} ;
//     int size = sizeof(arr)/sizeof(arr[0]) ;
//     int k = 3 ;

//     int ans = minDiff(arr, size, k) ;
//     cout<<" mini diff : "<<ans <<endl ;

//     return 0;
// }


//                     ❓ Minimum number of jumps 
//Given an array of N integers arr[] where each element represents the maximum length of the jump 
//that can be made forward from that element. 
//This means if arr[i] = x, then we can jump any distance y such that y ≤ x.

// Find the minimum number of jumps to reach the end of the array (starting from the first element).
// If an element is 0, then you cannot move through that element.

// Note: Return -1 if you can't reach the end of the array.

// Example 1:
// Input:
// N = 11 
// arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
// Output: 3 
// Explanation: 
// First jump from 1st element to 2nd 
// element with value 3. Now, from here 
// we jump to 5th element with value 9, 
// and from here we will jump to the last. 

// Example 2:
// Input :
// N = 6
// arr = {1, 4, 3, 2, 6, 7}
// Output: 2 
// Explanation: 
// First we jump from the 1st to 2nd element 
// and then jump to the last element.

// #include<iostream>
// using namespace std;

// int minJump(int arr[], int n) {

//     int maxDistance = 0 ;
//     int count = 0;
//     int currentElem = 0 ;

//     for(int i=0; i<n-1; i++){
//         maxDistance = max(maxDistance, i+arr[i]) ;

//         if(i == currentElem) {
//             count++ ;
//             currentElem = maxDistance ;
//            if(currentElem >= n-1) {
//             return count ; 
//            }
//         }
//     }
//      return -1 ;
// }

// int main() {
//     int arr[11] =  {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} ;
//     int n = sizeof(arr) / sizeof(arr[0]) ;
    
//     int ans = minJump(arr, n) ;
//     cout<<" Minimum jumps  : "<< ans <<endl ;
    
// return 0;
// }


//               //❓ find duplicate in an array of N+1 Integers 

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2

// Example 2:
// Input: nums = [3,1,3,4,2]
// Output: 3

// #include<iostream>
// #include<vector>
// using namespace std;

//  int findDuplicate(vector<int>& nums) {
//     //🔸vector approach
//     // Approach take a vector where you can store the value of occurance of a number to the    corresponding index of the vector and then traverse through vector find whose value is >1;
//         int n = nums.size();
//         int t = n+1; 
//         vector<int> v(n, 0) ;

//         for(int i=0; i<n; i++){
//             v[nums[i]]++ ;
//         }

//         for(int i=1; i<t; i++) {
//             if(v[i] > 1) {
//                 return i ;
//             }
//         }
//         return 0;
//     }
//🔸time complexity : O(n)
//🔸space complexity : O(n)


//                   //❓Question : 56. Merge Intervals

// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
// and return an array of the non-overlapping intervals that cover all the intervals in the input.

// Example 1:
// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

// Example 2:
// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]
// Explanation: Intervals [1,4] and [4,5] are considered overlapping.

// Constraints:
// 1 <= intervals.length <= 104
// intervals[i].length == 2
// 0 <= starti <= endi <= 104


//   vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
//         int n = intervals.size() ;
//         sort(intervals.begin(), intervals.end()) ;
        
//         vector<vector<int>> output;
//         output.push_back({intervals[0][0], intervals[0][1]}) ;

//         int i = 0;
//         int merge = 0;

//         for( ; i < n-1; i++){
//             int j = i+1; 
//             if(output[i-merge][1] >= intervals[j][0]) {
//                 output[i-merge][1] = max(intervals[j][1], output[i-merge][1]) ;
//                 merge++;
//             }
//             else{
//                 output.push_back({intervals[j][0], intervals[j][1]}) ;
//             }
//         }
//         return output;
//     }
//🔸time complexity: O(nLog N)               //sort stl= o(nlog n),  for loop = o(n)
//🔸space complexity: O(n*m)


//                          //❓Question: 31. Next Permutation

// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. 
// More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, 
// then the next permutation of that array is the permutation that follows it in the sorted container.
//  If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

// For example, the next permutation of arr = [1,2,3] is [1,3,2].
// Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
// Given an array of integers nums, find the next permutation of nums.

// The replacement must be in place and use only constant extra memory.

// Example 1:

// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:

// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:

// Input: nums = [1,1,5]
// Output: [1,5,1]

// Constraints:
// 1 <= nums.length <= 100
// 0 <= nums[i] <= 100

// #include<iostream>
// #include<vector>
// using namespace std;

//  void nextPermutation(vector<int>& nums) {
//        int i,j,n=nums.size();
//        for(i=n-2;i>=0;i--)
//        {
//            if(nums[i]<nums[i+1])
//                 break;
//        } 
//        if(i<0)
//        {
//            reverse(nums.begin(),nums.end());
//        }
//        else
//        {
//             for(j=n-1;j>=i;j--)
//             {
//                 if(nums[j]>nums[i])
//                     break;
//             }
//           swap(nums[i],nums[j]);
//           reverse(nums.begin()+i+1,nums.end());
//       }
// }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                   //❓question: Count inversion 

// Given an array of integers. Find the Inversion Count in the array. 
// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. 
// If array is already sorted then the inversion count is 0. 
// If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

// Example 1:

// Input: N = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 
// has three inversions (2, 1), (4, 1), (4, 3).
// Example 2:

// Input: N = 5
// arr[] = {2, 3, 4, 5, 6}
// Output: 0
// Explanation: As the sequence is already 
// sorted so there is no inversion count.
// Example 3:

// Input: N = 3, arr[] = {10, 10, 10}
// Output: 0
// Explanation: As all the elements of array 
// are same, so there is no inversion count.


// #include<iostream>
// using namespace std;

// class Solution {
//   public: 

//   long long int ans=0;
  
//     int Merge(long long arr[],int low ,int mid,int high)
//     {
//         long long int a[high-low+1];
//         long long int i = low;
//         long long int j = mid+1;
//         long long int k = 0;
        
//         while(i<=mid && j<=high)
//         {
//             if(arr[i] > arr[j])
//             {
//                 ans += mid-i+1;
//                 a[k++] = arr[j++];
//             }
//             else
//             {
//                 a[k++] = arr[i++];
//              }
//         }
        
//         while(i<=mid)
//         {
//             a[k++] = arr[i++];
//         }
        
//         while(j<=high)
//         {
//             a[k++] = arr[j++];
//         }
        
//         int ind = low;
//         k = high-low+1;
//         for(int i=0;i<k;i++)
//          {
//             arr[ind++] = a[i];
//          }   
        
//     }
  
//     void MergeSort(long long arr[], long long int low,long long int high)
//     {
//         if(low<high)
//         {
//             int mid=(high+low)/2;
//             MergeSort(arr,low,mid);
//             MergeSort(arr,mid+1,high);
//             Merge(arr,low,mid,high);
//         }
//     }
    
//     long long int inversionCount(long long arr[], long long N)
//     {
//         //🔸bruute force 100 / 117
//         // int inversion = 0 ;
        
//         // for(int i=0; i<N; i++) {
//         //     for(int j=i+1; j<N; j++) {
//         //         if( i < j  && arr[i] > arr[j]) {
//         //             inversion++ ;
//         //         }
//         //     }
//         // }
//         // return inversion;
        
        
//         //🔸 comment approach : using merge sort approach striver
//         // if(N==42)return 494;
//          MergeSort(arr,0,N-1);
//          return ans;
       
//     }
// };
//🔸time complexity: O (N log N)
//🔸time complexity: O(N)



//                      //❓Question :121. Best Time to Buy and Sell Stock (easy)

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// Example 2:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
 
// Constraints:
// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104

// #include<iostream>
// #include<vector>
// using namespace std;

// //🔴 brute force : 199/211  TLE
//   // int maxProfit(vector<int>& prices) {
//   //   vector<int> output(0) ;
//   //   int ans = 0;
//   //   int n = prices.size() ;
//   //   for(int i=0; i<n; i++) {
//   //     for(int j=n-1; j>i; j--) {
//   //        if(prices[j] > prices[i]) {
//   //          ans = prices[j] - prices[i] ;
//   //          output.push_back(ans) ; 
//   //        }
//   //     }
//   //   }
//   //   int maxi = 0;
//   //   for(int k=0; k<output.size(); k++) {
//   //     maxi = max(maxi, output[k]) ;
//   //   }
//   //   return maxi ;
//   // }

//   //🔴approach2 : optimal O(n) time, and O(1) space
//   int maxProfit(vector<int>& prices) {

//     int mini = INT_MAX ;
//     int maxi = 0 ;

//     for(int i=0; i<prices.size(); i++){
//       mini = min(mini, prices[i]) ;
//       maxi = max(maxi, prices[i]-mini) ;
//     }
//     return maxi ;
//   }



//               //❓Question: Count pairs with given sum

// Given an array of N integers, and an integer K,
// find the number of pairs of elements in the array whose sum is equal to K.


// Example 1:
// Input:
// N = 4, K = 6
// arr[] = {1, 5, 7, 1}
// Output: 2
// Explanation: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6.

// Example 2:
// Input:
// N = 4, K = 2
// arr[] = {1, 1, 1, 1}
// Output: 6
// Explanation: 
// Each 1 will produce sum 2 with any 1.

// #include<iostream>
// using namespace std;

//   //🔴 brute force : 181 / 263 
//     // int getPairsCount(int arr[], int n, int k) {
        
//     //     int pairCount = 0 ;
        
//     //     for(int i=0; i<n; i++) {
//     //         for(int j=i+1; j<n; j++) {
//     //             if( arr[i] + arr[j] == k) {
//     //                 pairCount++ ;
//     //             }
//     //         }
//     //     }
//     //     return pairCount ;
//     // }
    
    
//     //🔴 approach 2: using unordered_map
//       int getPairsCount(int arr[], int n, int k){
          
//         if (n == 1) {
//             return 0;
//         }
            
//         int count = 0;
//         unordered_map<int, int> mp;
        
//         for (int i = 0; i < n; i++) {
            
//             int diff = k - arr[i];    
//             if (mp[diff] > 0) {
//                 count += mp[diff];
//             }
                
//             mp[arr[i]]++;
//         }
            
//         return count;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)


//                     //❓Question: Common elements

// Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
// Note: can you take care of the duplicates without using any additional Data Structure?

// Example 1:
// Input:
// n1 = 6; A = {1, 5, 10, 20, 40, 80}
// n2 = 5; B = {6, 7, 20, 80, 100}
// n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
// Output: 20 80
// Explanation: 20 and 80 are the only
// common elements in A, B and C.


// #include<iostream>
// #include<vector>
// using namespace std;

//  vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
//         {
//         int i=0, j=0, k=0 ;
//         vector<int> ans ;
         
//         while( i < n1 && j < n2 && k < n3){
            
//             if(A[i] == B[j] && A[i]== C[k]) {
//                 ans.push_back(A[i]) ;
                
//                 i++ ;
//                 j++ ;
//                 k++ ;
                
//             while( i < n1 && A[i] == A[i-1]) {
//                 i++ ;
//             }
//           }
//             else if( min(A[i], min(B[j], C[k])) == A[i]) {
//                 i++ ;
//             }
//             else if( min(A[i], min(B[j], C[k])) == B[j]) {
//                 j++ ;
//             }
//             else if( min(A[i], min(B[j], C[k])) == C[k]) {
//                 k++ ;
//             }
//         }
        
//         return ans ;
    
//     }

// 🔸time complexity: O(n1 + n2 + n3)
// 🔸 space complexity: O(n1 + n2 + n3)


//               //❓Question: Alternate positive and negative numbers

// Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
// Note: Array should start with a positive number and 0 (zero) should be considered a positive element.
 

// Example 1:
// Input: 
// N = 9
// Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
// Output:
// 9 -2 4 -1 5 -5 0 -3 2
// Explanation : Positive elements : 9,4,5,0,2
// Negative elements : -2,-1,-5,-3
// As we need to maintain the relative order of
// postive elements and negative elements we will pick
// each element from the positive and negative and will
// store them. If any of the positive and negative numbers
// are completed. we will continue with the remaining signed
// elements.The output is 9,-2,4,-1,5,-5,0,-3,2.

// Example 2:
// Input:
// N = 10
// Arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
// Output:
// 5 -5 2 -2 4 -8 7 1 8 0
// Explanation : Positive elements : 5,2,4,7,1,8,0
// Negative elements : -5,-2,-8
// As we need to maintain the relative order of
// postive elements and negative elements we will pick
// each element from the positive and negative and will
// store them. If any of the positive and negative numbers
// are completed. we will continue with the remaining signed
// elements.The output is 5,-5,2,-2,4,-8,7,1,8,0.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// #include<iostream>
// #include<vector>
// using namespace std;
	// void rearrange(int arr[], int n) 
    // {
      
    //     vector<int> pos;
    //     vector<int> neg;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(arr[i] <0) neg.push_back(arr[i]);
    //         else pos.push_back(arr[i]);
    //     };
        
    //     int i=0,j = 0,k=0;
    //     while( i <n )
    //     {

    //        if(j != pos.size())
    //         {
    //             arr[i] = pos[j];
    //             j++;
    //             i++;
    //         }
    //         if( k!=neg.size())
    //         {
    //             arr[i] = neg[k];
    //             k++;
    //             i++;
    //         }
    //     }
    // }
// 🔸 Time Complexity: O(N)
// 🔸 Space complexity : O(N)



//                  //❓Question: Subarray with 0 Sum

// Given an array of positive and negative numbers.
// Find if there is a subarray (of size at-least one) with 0 sum.

// Example 1:
// Input:
// 5
// 4 2 -3 1 6

// Output: 
// Yes
// Explanation: 
// 2, -3, 1 is the subarray 
// with sum 0.

// Example 2:
// Input:
// 5
// 4 2 0 1 6

// Output: 
// Yes
// Explanation: 
// 0 is one of the element 
// in the array so there exist a 
// subarray with sum 0.


// #include<iostream>
// #include<vector>
// using namespace std;
//  bool subArrayExists(int arr[], int n)
//     {
//         unordered_map<int, bool> m;
//         m[0] = true;
        
//         int sum = 0;
        
//         for(int i=0;i<n;i++){
            
//             sum += arr[i];
            
//             if(m[sum]) {
//                 return true;
//             }
//             else {
//                 m[sum] = true;
//             }
//         }
        
//         return false;
//     }

//🔸time complexity: O(n)
// 🔸space complexity: O(n)



//            //❓Question : Factorials Of Large Numbers

// Given an integer N, find its factorial. 
// return a list of integers denoting the digits that make up the factorial of N.

// Example 1:
// Input: N = 5
// Output: 120
// Explanation : 5! = 1*2*3*4*5 = 120

// Example 2:
// Input: N = 10
// Output: 3628800
// Explanation :
// 10! = 1*2*3*4*5*6*7*8*9*10 = 3628800


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int> factorial(int N){
        
//       vector<int> ans ;
//       ans.push_back(1) ;
       
//       for(int j=2; j<=N; j++){
//           int carry = 0;
//           for(int i=0; i<ans.size(); i++){
//               int data = ans[i] * j + carry ;
//               ans[i] = data % 10 ;
//               carry  = data / 10 ;
//           }
           
//           while(carry != 0) {
//               ans.push_back(carry % 10) ;
//               carry = carry/10 ;
//           }
//       }
//       reverse(ans.begin(), ans.end()) ;
//       return ans;
//     }
//🔸time complexity: O(N^2)
//🔸space complexity: O(N) 
