
//                  //🔘🔘🔘 ARRAY 🔘🔘🔘 //

//                                      //❓Question : Reverse the array 
// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size){
//     int start = 0;
//     int end = size-1;
//     // int temp = 0;

//     while(start<=end) {
//         // swap(arr[start], arr[end]) ;          //using in build swap function

//         // temp = arr[start] ;                   // using functional swapping
//         // arr[start] = arr[end] ;
//         // arr[end] = temp ;

//         start++ ;
//         end-- ;
//     }

//    void reverse(int arr[], int size) {           // USing build-in Reverse() function 
//        reverse(arr, arr+size) ;
//    }

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

//                                        // ❓Question : Find min and max sum ;

// 🔸Correct approach With TLE
//  #include<iostream>
//  using namespace std;

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

// 🔴Optimise approach (without TLE)
//  #include<iostream>
//  #include<algorithm>
//  using namespace std ;

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




//                              //❓Question: find kth smallest element :


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
//🔸time compplexity : O(n)
//🔸space compplexity: O(1)


//🔴another approach : using priority_queue  (max-heap) by default
// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function

//  int kthSmallest(int arr[], int l, int r, int k) {
//         priority_queue<int> pq;
//         for(int i = 0 ; i <k ; i++){
//             pq.push(arr[i]);
//         }
//         for(int i = k ; i <= r ; i++ ){
//             if(arr[i] < pq.top() ){
//                 pq.pop();
//                 pq.push(arr[i]);
//             }
//         }
//         int ans = pq.top();
//         return ans;
//     }
// };
//🔸time compplexity : O(n*log(n))
//🔸space compplexity: O(n)




//                             //❓Question: Sort 0s 1s 2s



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
//🔸time complexity: O(2N)
//🔸space complexity: O(1)


//                           //❓Question:  Move all the negative elements to one side of the array

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
//🔸time complexity: o(n^2)
//🔸space complexity:O(1)


//🔴approach : optimised using in-build sort data structure

// #include<iostream>
// using namespace std ;
// void sortNegative( int arr[], int size) {
//    sort(arr, arr+size) ;
// }
//🔸time complexity: o(n* logn)           // it is better than O(N^2) because O(n*logn) is far closer to O(N)
//🔸space complexity: O(1)



//                            //❓Question :  Union of two arrays

// ex:
// input : a ={1,2,3,4}
//         b = {6,7,2}
// output: 6 = {1,2,3,4,6,7}   

// 🔸 correct brute force solution but TLE:
//  #include<iostream>
//  using namespace std;

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
//🔸time complexity : O(n*m)
//🔸 space complexity: O(1)

// 🔴 approach 2  : Optimised using vector
//  #include<iostream>
//  #include<vector>
//  using namespace std;

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
//🔸 time complexity: O(N + M)
//🔸 space complexity: O(1)


//🔴 approach 3: using set
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
//🔸 time complexity: O(log n)
//🔸 space complexity: O(n)



//                         //❓Question :  Intersection of two array

// Input:
// n = 5, m = 3
// a[] = {89, 24, 75, 11, 23}
// b[] = {89, 2, 4}

// Output: 1

// Explanation:
// 89 is the only element
// in the intersection of two arrays.

// 🔸Appraoch 1: using vector
// #include<iostream>
// #include<vector>
// using namespace std;

// int intersection(int a[], int n, int b[], int m){
//           vector<int> ans(100001, 0) ;
//           int count = 0 ;

//           for(int i=0; i<n; i++) {
//               if(ans[a[i]] == 0){
//                   ans[a[i]] = 1;
//               }
//           }

//           for(int j=0; j<m; j++){
//               if(ans[b[j]] == 1) {
//                   ans[b[j]] += 1 ;
//                   count++ ;
//               }
//           }

//      return count ;
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
//🔸time complexity: O(N+M)
//🔸space complexity: O(1)



//🔴 apppraoch 2:  Optimise using unordered_map
// int intersection(int a[], int n, int b[], int m){
// unordered_map<int, int> mp ;
// int count = 0 ;

// for(int i=0; i<n; i++) {
//     if(mp[a[i]] == 0) {
//          mp[a[i]] = 1;
//     }
// }

// for(int j=0; j<m; j++){
//     if(mp[b[j]] == 1) {
//         mp[b[j]] += 1;
//         count++ ;
//     }
// }

// return count ;
// }
//🔸time complexity: O(N+M)
//🔸space complexity: O(N+M)


// 🔴 Approach 3 : sorting and comparing
//  #include<iostream>
//  #include<algorithm>
//  using namespace std;

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
//🔸time complexity: O(n+log n)
//🔸space complexity: O(1)



//                            //❓Question : Rotate an array cyclically
// input: [1,2,3,4,5]
// output: [5,1,2,3,4]

//🔸approach :
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
//🔸time complexity: O(N)
//🔸space complexity: O(N)


//🔴 approach 2  :
// #include<iostream>
// using namespace std;

// void rotate(int arr[], int n)  {

//    int temp = arr[n-1] ;
    
//     for(int i = n-1; i >= 0; i--){
//         arr[i] = arr[i-1] ;
//     }
    
//     arr[0] = temp ;
// } 
 
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                      //❓Question :  Find (Max sum of contigous sub-array)

// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number)
//  which has the maximum sum and return its sum.

// Example 1:
// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9

// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which is a contiguous subarray.

// Example 2:
// Input:
// N = 4
// Arr[] = {-1,-2,-3,-4}
// Output:
// -1

// Explanation:
// Max subarray sum is -1
// of element (-1)

// 🔸approach : Brute force approach (TLE) O(n^2) time complexity
//  #include<iostream>
//  #include<limits.h>
//  using namespace std;

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
//🔸time complexity: O(N^2)
//🔸space complexity: O(N+M)


// 🔴 approach 2: optimised approach
//    long long maxSubarraySum(int arr[], int n){

//     long long maxi = 0 ;
//     long long ans = arr[0] ;

//     for(int i=0; i<n; i++) {
//         maxi = max((long long)arr[i], maxi + arr[i]) ;       // typecasting array element from int to long long, so it wont give error
//         ans =  max(maxi, ans) ;
//     }

//     return ans ;
//     }
//🔸time complexity: O(n)
//🔸space complexity: O(sum of all elements)


// 🔴 appraoch 3: Optimised kadane's algorithm O(n) time complexity
//  #include<iostream>
//  #include<limits.h>
//  using namespace std;

// long long kadane(int arr[], int n) {

//  int globalSum = INT_MIN ;
//  int localSum = 0 ;

//  for(int i=0; i<n; i++){
//     localSum = max(arr[i], (arr[i] + localSum)) ;

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
//🔸time complexity: O(N)
//🔸space complexity: O(sum of all elements)



//                         //❓Question:  Minimize the heights I

// Given an array arr[] denoting heights of N towers and a positive integer K,
// you have to modify the height of each tower either by increasing or decreasing them by K only once.
// Find out what could be the possible minimum difference of
// the height of shortest and longest towers after you have modified each tower.

// 🔸Note: Assume that height of the tower can be negative.

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

// 🔸To simply put The question it says that
//  add and substract every element in the array by K
//  and find the minimum difference after updating every element

//🔸approach:
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
//🔸time complexity: O(N)
//🔸space complexity: O(N)

// int main() {
//     int arr[10] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1} ;
//     int size = sizeof(arr) / sizeof(arr[0]) ;
//     int k = 5 ;

//     int answer = miniDiff(arr, size, k) ;
//     cout<<" minimum difference of the height of shortest and longest towers after you have modified each tower: " <<endl ;
//     cout<<answer <<endl ;
// }



//                     //❓Question:  Minimize the heights II

// Given an array arr[] denoting heights of N towers and a positive integer K.
// For each tower, you must perform exactly one of the following operations exactly once.
// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

// 🔸 Note:
//  It is compulsory to increase or decrease the height by K for each tower.
// 🔴After the operation, the resultant array should not contain any negative integers.

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

//🔸approach : 
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
//🔸time complexity: O(N)
//🔸space complexity: O(N)

// int main() {
//     int arr[5] = {3, 12, 20, 9, 16} ;
//     int size = sizeof(arr)/sizeof(arr[0]) ;
//     int k = 3 ;

//     int ans = minDiff(arr, size, k) ;
//     cout<<" mini diff : "<<ans <<endl ;

//     return 0;
// }


//                            ❓Question:  Minimum number of jumps

// Given an array of N integers arr[] where each element represents the maximum length of the jump
// that can be made forward from that element.
// This means if arr[i] = x, then we can jump any distance y such that y ≤ x.

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

//🔸approach :
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
//🔸time complexity: O(N)
//🔸space complexity: O(1)


//                                 //❓Question:   Merge two sorted array without without extra space

// Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. 
// Merge them in sorted order without using any extra space.
//  Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

// Example 1:

// Input: 
// n = 4, arr1[] = [1 3 5 7] 
// m = 5, arr2[] = [0 2 6 8 9]
// Output: 
// arr1[] = [0 1 2 3]
// arr2[] = [5 6 7 8 9]
// Explanation:
// After merging the two 
// non-decreasing arrays, we get, 
// 0 1 2 3 5 6 7 8 9.
// Example 2:

// Input: 
// n = 2, arr1[] = [10 12] 
// m = 3, arr2[] = [5 18 20]
// Output: 
// arr1[] = [5 10]
// arr2[] = [12 18 20]
// Explanation:
// After merging two sorted arrays 
// we get 5 10 12 18 20.

// #include<iostream>
// using namespace std;

//     void merge(long long arr1[], long long arr2[], int n, int m) 
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
        
//     } 
//🔸time complexity: O(Nlog n)             // loop => O(n)  , sort() => O(nlog n)
//🔸space complexity: O(1)




//                           //❓Question:  find duplicate in an array of N+1 Integers

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2

// Example 2:
// Input: nums = [3,1,3,4,2]
// Output: 3

//🔸approach :
// #include<iostream>
// #include<vector>
// using namespace std;

//  int findDuplicate(vector<int>& nums) {
//     //🔸vector approach
//     // Approach take a vector where you can store the value of occurance of a number to the   
//     // corresponding index of the vector and then traverse through vector find whose value is >1;
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
// 🔸time complexity : O(n)
// 🔸space complexity : O(n)




//                       //❓Question : 56. Merge Intervals

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

//🔸approach :
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
// 🔸time complexity: O(nLog N)               //sort stl= o(nlog n),  for loop = o(n)
// 🔸space complexity: O(n*m)



//🔸approach 2: strivers approach 
//   vector<vector<int>> merge(vector<vector<int>>& intervals) {
//      int n = intervals.size() ;
//      sort(intervals.begin(), intervals.end()) ;
//      vector<vector<int>> ans  ;

//      for(int i=0; i<n; i++) {
//          if( ans.empty() || intervals[i][0] > ans.back()[1]) {
//              ans.push_back(intervals[i]) ;
//          }
//          else{
//              ans.back()[1] = max(ans.back()[1], intervals[i][1]) ;
//          }
//      
//        return ans ;
// } 
//🔸time complexity: O( N Log(N) + N)
//🔸space complexity: O( N)



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

//🔸approach :
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
// 🔸time complexity: O(N)
// 🔸space complexity: O(1)


//🔴 approach: 2  inbuild stl
//  void nextPermutation(vector<int>& nums) {
//    next_permutation(nums.begin(), nums.end()) ;
//   return nums;
// }

//🔸The next_permutation() function takes O(N) time to find the next permutation
//🔸time complexity : O(N)
//🔸space complexity: O(1)


//🔴 approach: 3  strivers approach
//  void nextPermutation(vector<int>& A) {
//     int n = A.size(); // size of the array.

//     // Step 1: Find the break point:
//     int ind = -1; // break point
//     for (int i = n - 2; i >= 0; i--) {
//         if (A[i] < A[i + 1]) {
//             // index i is the break point
//             ind = i;
//             break;
//         }
//     }

//     // If break point does not exist:
//     if (ind == -1) {
//         // reverse the whole array:
//         reverse(A.begin(), A.end());
//         return A;
//     }

//     // Step 2: Find the next greater element
//     //         and swap it with arr[ind]:

//     for (int i = n - 1; i > ind; i--) {
//         if (A[i] > A[ind]) {
//             swap(A[i], A[ind]);
//             break;
//         }
//     }

//     // Step 3: reverse the right half:
//     reverse(A.begin() + ind + 1, A.end());

//     return A;
// }

// 🔸time complexity : O(3N)
// 🔸space complexity: O(1)


//                       //❓question: Count inversion

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

//🔸approach :
// #include<iostream>
// using namespace std;

// class Solution {
//   public:

//   long long int ans=0;

//     int Merge(long long arr[], int low, int mid, int high)
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
//         if(low < high)
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
// 🔸time complexity: O (N log N)
// 🔸time complexity: O(N)



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

// int n = prices.size();

//🔴 approach: using vector  
//   int maxProfit(vector<int>& prices) {

//         vector<int>maxprices(n,0);
//         maxprices[n-1] = prices[n-1];
//         for(int i=n-2;i>=0;i--)
//         {
//             maxprices[i] = max(maxprices[i+1], prices[i]);
//         }
//         int profit = 0;
//         for(int i =0 ;i<n;i++)
//         {
//             profit = max(profit,maxprices[i]- prices[i]);
//         }

//         return profit;

// }

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


//🔸 dp series approach : optimal O(n) time, O(1) space
//   int maxProfit(vector<int>& prices) {
//     int mini = prices[0] ;
//     int profit = 0 ;

//     for(int i=1; i<prices.size(); i++) {
//         int diff = prices[i] - mini ;
//         profit = max(diff, profit) ;
//         mini = min(prices[i], mini) ;
//     }

//     return profit ;
//   }
//🔸time  complexity: O(N)
//🔸space complexity: O(1)




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

//🔸approach :
// #include<iostream>
// using namespace std;

//🔴 brute force : 181 / 263
// int getPairsCount(int arr[], int n, int k) {

//     int pairCount = 0 ;
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if( arr[i] + arr[j] == k) {
//                 pairCount++ ;
//             }
//         }
//     }
//     return pairCount ;
// }


// 🔴 approach 2: using unordered_map
//       int getPairsCount(int arr[], int n, int k){

//         if (n == 1) {
//             return 0;
//         }

//         int count = 0;
//         unordered_map<int, int> mp;

//         for(int i = 0; i < n; i++) {

//             int diff = k - arr[i];
//             if (mp[diff] > 0) {
//                 count += mp[diff];
//             }

//             mp[arr[i]]++;
//         }

//         return count;
//     }
// 🔸time complexity: O(N)
// 🔸space complexity: O(N)



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

//  vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)  {
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



//                   //❓Question: Alternate positive and negative numbers

// Given an unsorted array Arr of N positive and negative numbers. 
// Your task is to create an array of alternate positive and negative numbers without 
// changing the relative order of positive and negative numbers.
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

//🔸approach : 
// #include<iostream>
// #include<vector>
// using namespace std;
// void rearrange(int arr[], int n)
// {

//     vector<int> pos;
//     vector<int> neg;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] < 0) neg.push_back(arr[i]);
//         else pos.push_back(arr[i]);
//     };

//     int i=0,j = 0,k=0;
//     while( i <n )
//     {

//        if( j != pos.size() )
//         {
//             arr[i] = pos[j];
//             j++;
//             i++;
//         }
//         if( k != neg.size() )
//         {
//             arr[i] = neg[k];
//             k++;
//             i++;
//         }
//     }
// }
// 🔸 Time Complexity: O(N)
// 🔸 Space complexity : O(N)       // O(2N)



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

//🔸approach :
// #include<iostream>
// #include<vector>
// using namespace std;
//  bool subArrayExists(int arr[], int n)
//     {
//             4 2 -3 1 6
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

// 🔸time complexity: O(n)
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

//🔸appraoch :
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
// 🔸time complexity: O(N^2)
// 🔸space complexity: O(N)



///                  //❓Question: Maximum Product subarray

// Given an array Arr[] that contains N integers (may be positive, negative or zero).
// Find the product of the maximum product subarray.

// Example 1:
// Input:
// N = 5
// Arr[] = {6, -3, -10, 0, 2}
// Output: 180
// Explanation: Subarray with maximum product
// is [6, -3, -10] which gives product as 180.

// Example 2:
// Input:
// N = 6
// Arr[] = {2, 3, 4, 5, -1, 0}
// Output: 120
// Explanation: Subarray with maximum product
// is [2, 3, 4, 5] which gives product as 120.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function maxProduct()
// which takes the array of integers arr and n as parameters and returns an integer denoting the answer.
// Note: Use 64-bit integer data type to avoid overflow.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 500
// -102 ≤ Arri ≤ 102

//🔸approach :
// Dry run for better understanding :

// #include<iostream>
// #include<vector>
// using namespace std;

// 	long long maxProduct(vector<int> arr, int n) {

// 	    long long maxi = LONG_MIN;
// 	    long long first = 1;
// 	    long long last = 1 ;

// 	    for(int i=0; i<n; i++){
// 	        if(first == 0) {
// 	            first = 1;
// 	        }

// 	        if(last == 0) {
// 	            last = 1;
// 	        }

// 	        first *= arr[i] ;
// 	        last  *= arr[n-i-1] ;

// 	        maxi = max(maxi, max(first, last)) ;
// 	    }

// 	    return maxi;
// 	}
// 🔸time complexity: O(N)
// 🔸space complexity: O(1)


//                //❓question: Longest consecutive subsequence

// Given an array of positive integers. Find the length of the longest sub-sequence
// such that elements in the subsequence are consecutive integers,
// the consecutive numbers can be in any order.

// Example 1:
// Input:
// N = 7
// a[] = {2,6,1,9,4,5,3}
// Output:
// 6
// Explanation:
// The consecutive numbers here
// are 1, 2, 3, 4, 5, 6. These 6
// numbers form the longest consecutive
// subsquence.

// Example 2:
// Input:
// N = 7
// a[] = {1,9,3,10,4,20,2}
// Output:
// 4
// Explanation:
// 1, 2, 3, 4 is the longest
// consecutive subsequence.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// 🔸code :
//   int findLongestConseqSubseq(int arr[], int n)
//      {
//        sort(arr,arr+n);
//        int temp = arr[0] ;
//        int count = 1;
//        int maxCount =1 ;

//       for(int i=1; i<n; i++){
//           if(arr[i] == temp) {
//               continue ;
//           }

//           if(arr[i] == temp+1) {
//               count++ ;
//               temp = arr[i] ;
//               maxCount = max(maxCount, count) ;
//           }

//           else{
//               temp = arr[i] ;
//               count = 1;
//           }
//       }

//       return maxCount ;

// 🔸time complexity: O(N * logN)
// 🔸space complexity: O(1)



//                  //❓Question: Count More than n/k Occurences

// Given an array arr[] of size N and an element k.
// The task is to find all elements in array that appear more than n/k times.

// Example 1:
// Input:
// N = 8
// arr[] = {3,1,2,2,1,2,3,3}
// k = 4
// Output: 2
// Explanation: In the given array, 3 and
//  2 are the only elements that appears
// more than n/k times.

// Example 2:
// Input:
// N = 4
// arr[] = {2,3,3,2}
// k = 3
// Output: 2
// Explanation: In the given array, 3 and 2
// are the only elements that appears more
// than n/k times. So the count of elements
// are 2.

// Your Task:
// The task is to complete the function countOccurence() which returns count of elements with more than n/k times appearance.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= N <= 104
// 1 <= a[i] <= 106
// 1 <= k <= N

// 🔴approach 1: My approach :
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int countOccurence(int arr[], int n, int k)
// {

//     sort(arr, arr + n);
//     int nk = n / k;
//     int count = 0;
//     int mainCount = 0;
//     int i = 0;
//     int j = 1;

//     if (n == 1) return 0;

//     while (j < n) {
//       if (j==n-1 && arr[j]==arr[i]){
//           count = j-i+1;
//             if (count > nk){
//                 mainCount++;
//                 count = 0;
//             }
//        }

//       if (arr[j] == arr[i]){
//            j++;
//        }
//         else {
//           count = j - i;
//           i = j;
//           j = i + 1;

//          if (count > nk){
//              mainCount++;
//              count = 0;
//            }
//             count = 0;
//         }
//     }

//     return mainCount;
// }
// 🔸time complexity: O(N)
// 🔸space complexity: O(N)

// 🔴approach 2:
//  int countOccurence(int arr[], int n, int k)
//      {
//          map<int,int> mp;

//         for(int i=0; i<n; i++)
//         {
//              mp[arr[i]]++;
//         }

//         int count = 0;
//         int check = n/k;

//         for(auto it: mp)
//         {
//             if(it.second>check)
//             {
//                 count++;
//             }
//         }
//        return count;
//     }
// 🔸time complexity: O(N)
// 🔸space complexity: O(N)



//                   //🔴❓Question: Buy and sell a share at most twice

// In daily share trading, a buyer buys shares in the morning and sells them on the same day. 
// If the trader is allowed to make at most 2 transactions in a day, 
// the second transaction can only start after the first one is complete (Buy->sell->Buy->sell). 
// The stock prices throughout the day are represented in the form of an array of prices. 

// Given an array price of size N, find out the maximum profit that a share trader could have made.

// Example 1:

// Input:
// 6
// 10 22 5 75 65 80
// Output:
// 87
// Explanation:
// Trader earns 87 as sum of 12, 75 
// Buy at 10, sell at 22, 
// Buy at 5 and sell at 80
// Example 2:

// Input:
// 7
// 2 30 15 10 8 25 80
// Output:
// 100
// Explanation:

// Trader earns 100 as sum of 28 and 72
// Buy at price 2, sell at 30,
// Buy at 8 and sell at 80

// Constraints:
// 1 <= N <= 105
// 1 <= price[i] <= 105

//🔴approach :
// logic :

// for example you dont have any money in your pocket.
// so , your firstbuy is you do loan. so negative value of price.

// in firstsell amount ,you get firstsell-firstbuy profit (as you need to repay loan)(fbuy is negative so add to fsell)
// in secondbuy , you need take amount from previous profit and some loan if needed,
// in secondsell amount  you just remove loan amount ,amount left is profit.

// int maxProfit(vector<int>&price){
//     int firstbuy = INT_MIN;
//    int firstsell = 0;
   
//    int secondbuy = INT_MIN;
//    int secondsell = 0;
   
//    for(int i=0; i<price.size();i++){
//        firstbuy = max(firstbuy, -price[i]);
//        firstsell = max(firstsell, firstbuy + price[i]);
     
//        secondbuy = max(secondbuy, firstsell - price[i]);
//        secondsell = max(secondsell, secondbuy + price[i]);
      
//    }
//    return secondsell;
// }

//🔸Time Complexity: O(N)
//🔸Space Complexity: O(1)



//                    //❓Question: Array Subset of another array 

// Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. 
// Task is to check whether a2[] is a subset of a1[] or not. 
// Both the arrays can be sorted or unsorted. There can be duplicate elements.

// Example 1:
// Input:
// a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
// a2[] = {11, 3, 7, 1, 7}
// Output:
// Yes
// Explanation:
// a2[] is a subset of a1[]

// Example 2:
// Input:
// a1[] = {1, 2, 3, 4, 4, 5, 6}
// a2[] = {1, 2, 4}
// Output:
// Yes
// Explanation:
// a2[] is a subset of a1[]

// Example 3:
// Input:
// a1[] = {10, 5, 2, 23, 19}
// a2[] = {19, 5, 3}
// Output:
// No
// Explanation:
// a2[] is not a subset of a1[]

// Constraints:
// 1 <= n,m <= 105
// 1 <= a1[i], a2[j] <= 106

//🔴approach :
// string isSubset(int a1[], int a2[], int n, int m) {
    
//     unordered_map<int, int> count ;
    
//     for(int i=0; i<n; i++) {
//         count[a1[i]]++ ;
//     }
    
//     for(int i=0; i<m; i++) {
//         if(count[a2[i]] > 0) {
//             count[a2[i]]-- ;
//         }
//         else{
//             return "No" ;
//         }
//     }
    
//     return "Yes" ;
// }

//🔸Time Complexity: O(n+m)
//🔸Space complexity: O(n)


//             //❓Question :Triplet sum in array

// Given an array arr of size n and an integer X. 
// Find if there's a triplet in the array which sums up to the given integer X.

// Example 1:
// Input:
// n = 6, X = 13
// arr[] = [1 4 45 6 10 8]
// Output:
// 1
// Explanation:
// The triplet {1, 4, 8} in 
// the array sums up to 13.

// Example 2:
// Input:
// n = 5, X = 10
// arr[] = [1 2 4 3 6]
// Output:
// 1
// Explanation:
// The triplet {1, 3, 6} in 
// the array sums up to 10.

// Constraints:
// 1 ≤ n ≤ 103
// 1 ≤ A[i] ≤ 105

//🔴approach :
// bool find3Numbers(int arr[], int n, int x)
//     {   
//         sort(arr, arr+n) ;
        
//         for(int i=0; i<n; i++) {
//             int start = i+1;
//             int end = n-1 ;
            
//             while(start < end) {
//                 int sum = arr[i] + arr[start] + arr[end] ;
                
//                 if(sum == x) {
//                     return true ;
//                 }
//                 else if(sum < x){
//                     start++ ;
//                 }
//                 else{
//                     end-- ;
//                 }
//             }
//         }
        
//         return 0 ;
//     }
//🔸time complexity: O(N^2)           // o(n^2 + logN)
//🔸space complexity: O(1)



//                   //🔴❓ Question:  Trapping Rain Water 

// Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1,
// compute how much water can be trapped between the blocks during the rainy season. 

// Example 1:
// Input:
// N = 6
// arr[] = {3,0,0,2,0,4}
// Output:
// 10
//explanation :
//                          ____
//    ___ _ _ _ _ _ _ _ _ _|    |
//   |   |         ___     |    |
//   |   |        |   |    |    |
//   |___|________|___|____|____|
//    [3] [0] [0]  [2] [0]  [4]

//Bars for input =  { 3, 0, 0 ,2, 0, 4}
// Total trapped water = 3 + 3 + 1 + 3 = 10

// Example 2:
// Input:
// N = 4
// arr[] = {7,4,0,9}
// Output:
// 10
// Explanation:
// Water trapped by above 
// block of height 4 is 3 units and above 
// block of height 0 is 7 units. So, the 
// total unit of water trapped is 10 units.


// Example 3:
// Input:
// N = 3
// arr[] = {6,9,9}
// Output:
// 0
// Explanation:
// No water will be trapped.

// Constraints:
// 3 < N < 106
// 0 < Ai < 108

//🔴 approach :
// long long trappingWater(int arr[], int n){
        
//         int leftBlock[n] ;
//         leftBlock[0] = arr[0] ;
        
//         for(int i=1; i<n; i++) {
//             leftBlock[i] = max(leftBlock[i-1], arr[i]) ;
//         }
        
//         int rightBlock[n] ;
//         rightBlock[n-1] = arr[n-1] ;
        
//         for(int i=n-2; i>=0; i--) {
//             rightBlock[i] = max(rightBlock[i+1], arr[i]) ;
//         }
        
//         long long sum = 0;
        
//         for(int i=0; i<n; i++){
//             sum += min(leftBlock[i], rightBlock[i]) - arr[i] ;
//         }
        
//         return sum ;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)      // O(2N)


//                 //❓Question: Choclate Distribution Problem

// Given an array A[ ] of positive integers of size N,
//  where each value represents the number of chocolates in a packet. 
//  Each packet can have a variable number of chocolates. 
//  There are M students, the task is to distribute chocolate packets among M students such that :
// 1. Each student gets exactly one packet.
// 2. The difference between maximum number of chocolates given to a student and minimum number 
// of chocolates given to a student is minimum.


// Example 1:
// Input:
// N = 8, M = 5
// A = {3, 4, 1, 9, 56, 7, 9, 12}
// Output: 6
// Explanation: The minimum difference between maximum chocolates and minimum chocolates 
//is 9 - 3 = 6 by choosing following M packets :{3, 4, 9, 7, 9}.

// Example 2:
// Input:
// N = 7, M = 3
// A = {7, 3, 2, 4, 9, 12, 56}
// Output: 2
// Explanation: The minimum difference between maximum chocolates and minimum chocolates 
// is 4 - 2 = 2 by choosing following M packets :{3, 2, 4}.

// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 105
// 1 ≤ Ai ≤ 109
// 1 ≤ M ≤ N

//🔴approach :
// long long findMinDiff(vector<long long> a, long long n, long long m){
        
//        sort(a.begin(), a.end()) ;
//        int first = 0;
//        int second = m-1 ;
//        long long diff = INT_MAX;
       
//        while( second < n) {
//            diff = min(diff, a[second]-a[first]) ;
//            second++ ;
//            first++ ;
//        }
//        return diff ;
//     }   

//🔸time complexity: O(N * logN)
//🔸space complexity: O(1) 


//                    //❓Question: Smallest Subarray with sum greater than x

// Given an array of integers (A[])  and a number x, 
// find the smallest subarray with sum greater than the given value. 
// If such a subarray do not exist return 0 in that case.

// Note: The answer always exists. It is guaranteed that x doesn't exceed the summation of a[i] (from 1 to N).

// Example 1:
// Input:
// A[] = {1, 4, 45, 6, 0, 19}
// x  =  51
// Output: 3
// Explanation:
// Minimum length subarray is 
// {4, 45, 6}

// Example 2:
// Input:
// A[] = {1, 10, 5, 2, 7}
//    x  = 9
// Output: 1
// Explanation:
// Minimum length subarray is {10}


// Constraints:
// 1 ≤ N, x ≤ 105
// 1 ≤ A[] ≤ 104

//🔸approach :

// int smallestSubWithSum(int arr[], int n, int x)
//     {
//         int ans = n ;
//         int i = 0;
//         int j = -1;
//         int sum = 0 ;
        
//         while( j < n ) {
//             if( sum <= x ) {
//                 j++ ;
//                 sum = sum + arr[j] ;
//             } 
            
//             else if( sum > x ) {
//                 ans = min(ans, j - i + 1) ;
//                 sum = sum - arr[i] ;
//                 i++ ;
//             }
//         }
        
//         return ans ;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1) 



//                     //❓Question: Three way Partitioning

// Given an array of size n and a range [a, b]. 
//The task is to partition the array around the range such that array is divided into three parts.
// 1) All elements smaller than a come first.
// 2) All elements in range a to b come next.
// 3) All elements greater than b appear in the end.
// The individual elements of three sets can appear in any order. 
// You are required to return the modified array.

// Note: The generated output is 1 if you modify the given array successfully.

// Example 1:
// Input: 
// n = 5
// A[] = {1, 2, 3, 3, 4}
// [a, b] = [1, 2]
// Output: 1
// Explanation: One possible arrangement is:
// {1, 2, 3, 3, 4}. If you return a valid
// arrangement, output will be 1.


// Example 2:
// Input: 
// n = 3 
// A[] = {1, 2, 3}
// [a, b] = [1, 3]
// Output: 1
// Explanation: One possible arrangement 
// is: {1, 2, 3}. If you return a valid
// arrangement, output will be 1.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= n <= 106
// 1 <= A[i] <= 106

//🔴 approach :
// void threeWayPartition(vector<int>& arr,int a, int b)
//     {
//        int i = 0;
//        int left = 0;
//        int right = arr.size() -1 ;
       
//        while( i <= right) {
           
//            if( arr[i] < a) {
//                swap(arr[i++], arr[left++]) ;
//            }
//            else if( arr[i] > b ) {
//                swap(arr[i], arr[right--]) ;
//            }
//            else{
//                i++ ;
//            }
//        }
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//              //❓ Question :  Minimum swaps and K together

// Given an array arr of n positive integers and a number k. 
// One can apply a swap operation on the array any number of times, 
// i.e choose any two index i and j (i < j) and swap arr[i] , arr[j] .
//  Find the minimum number of swaps required to bring all the numbers less than or equal to k together, 
//  i.e. make them a contiguous subarray.

// Example 1:
// Input : 
// arr[ ] = {2, 1, 5, 6, 3} 
// K = 3
// Output : 
// 1
// Explanation:
// To bring elements 2, 1, 3 together,
// swap index 2 with 4 (0-based indexing),
// i.e. element arr[2] = 5 with arr[4] = 3
// such that final array will be- 
// arr[] = {2, 1, 3, 6, 5}

// Example 2:
// Input : 
// arr[ ] = {2, 7, 9, 5, 8, 7, 4} 
// K = 6 
// Output :  
// 2 
// Explanation: 
// To bring elements 2, 5, 4 together, 
// swap index 0 with 2 (0-based indexing)
// and index 4 with 6 (0-based indexing)
// such that final array will be- 
// arr[] = {9, 7, 2, 5, 4, 7, 8}


// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ Arri, K ≤107

//🔴approach: 
/// This approach uses Sliding Window technique 
//  first we count how many element are good, means <= k
//  then we count how many element are bad from 0 to good (window size) , bad means > k
//  initialise ans and assign bad as initial answer, init j assign bad , init i assign 0
//  loop from j < n, 
//  check if arr[i] > k decrease bad-- ,   within window size
//  check if arr[j] > k increase bad++ ,   outside of window size
//  ans = minimum Of (ans, bad) 
//  i++, j++ ;
//  return ans as minimum swap

// int minSwap(int arr[], int n, int k) {
        
//        int good=0;
//        int bad=0;
       
//        for(int i=0;i<n;i++) {
//             if(arr[i]<=k)
//             good++;
//         }
        
//         for(int i=0;i<good;i++) {
//             if(arr[i]>k)
//             bad++;
//         }
        
//         int ans=bad;
//         int i=0,j=good;
        
//         while(j<n) {  
            
//           if(arr[i]>k)bad--;
          
//           if(arr[j]>k)bad++;
          
//           ans=min(ans,bad);
         
//           i++;j++;
//       }
   
//      return ans;  
//     }


//                   //❓Question: Unique Number of Occurences

// Given an array arr of N integers, 
// the task is to check whether the frequency of the elements in the array is unique or not. 
// Or in other words, there are no two distinct numbers in array with equal frequency. 
// If all the frequency is unique then return true, else return false.

// Example 1:
// Input:
// N = 5
// arr = [1, 1, 2, 5, 5]
// Output:
// false
// Explanation:
// The array contains 2 (1’s), 1 (2’s) and 2 (5’s), since the number of frequency of 1 and 5 are the same i.e. 2 times. 
// Therefore, this array does not satisfy the condition.
// Example 2:

// Input:
// N = 10
// arr = [2, 2, 5, 10, 1, 2, 10, 5, 10, 2]
// Output:
// true
// Explanation:
// Number of 1’s -> 1
// Number of 2’s -> 4
// Number of 5’s -> 2
// Number of 10’s -> 3.
// Since, the number of occurrences of elements present in the array is unique. 
// Therefore, this array satisfy the condition.
// Your task:
// You don't need to read input or print anything. 
// Your task is to complete the function isFrequencyUnique() which take integer N and array arr of size N as arguments, 
// and returns a boolean.

// Constraints:
// 1 <= N <=105
// -109 <= arr[i] <= 109

//🔴approach: 

//  bool isFrequencyUnique(int n, int arr[])
//     {
//         map<int, int> mp; 
        
//         for(int i=0; i<n; i++) {
//             mp[arr[i]]++ ;
//         }
        
//         vector<int> v;
//         for(auto i:mp) {
//             v.push_back(i.second) ;
//         }
        
//         set<int> ans ;
//         for(int i=0; i<v.size(); i++) {
//             ans.insert(v[i]) ;
//         }
        
//         if(ans.size() == v.size()) {
//             return true ;
//         }
//         else{
//             return false ;
//         }
        
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                    //❓Question : Palindromic array 

// Given a Integer array A[] of n elements. Your task is to complete the function PalinArray.
//  Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

// Example 1:
// Input:
// 5
// 111 222 333 444 555
// Output:
// 1

// Explanation:
// A[0] = 111 //which is a palindrome number.
// A[1] = 222 //which is a palindrome number.
// A[2] = 333 //which is a palindrome number.
// A[3] = 444 //which is a palindrome number.
// A[4] = 555 //which is a palindrome number.
// As all numbers are palindrome so This will return 1.

// Example 2:
// Input:
// 3
// 121 131 20
// Output:
// 0

// Explanation:
// 20 is not a palindrome hence the output is 0.

// Constraints:
// 1 <=T<= 50
// 1 <=n<= 20
// 1 <=A[]<= 10000

//🔴approach :
// int PalinArray(int arr[], int n)
//     {
//     	for(int k=0; k<n; k++) {
//     	    int a = arr[k] ;
//     	    string str = to_string(a) ;
    	    
//     	    int i=0, j = str.length() - 1 ;
    	    
//     	    while( i <= j) {
//     	        if(str[i] == str[j]) {
//     	            i++ ;
//     	            j-- ;
//     	        }
//     	        else{
//     	            return 0;
//     	        }
//     	    }
//     	}
        
//         return 1;
//     }
//🔸time complexity: O(N * element.size())
//🔸space complexity: O(element)



//                     //❓Question : Find the Median

// Given an array arr[] of N integers, calculate the median

// Example 1:
// Input: N = 5
// arr[] = 90 100 78 89 67
// Output: 89
// Explanation: After sorting the array 
// middle element is the median 

// Example 2:
// Input: N = 4
// arr[] = 56 67 30 79
// Output: 61
// Explanation: In case of even number of 
// elements, average of two middle elements 
// is the median.

// Expected Time Complexity: O(n * log(n))
// Expected Space Complexity: O(1)
 

// Constraints:
// 1 <= Length of Array <= 100
// 1 <= Elements of Array <= 100

//🔴Approach :
// int find_median(vector<int> v)
// 		{
// 		    sort(v.begin(), v.end()) ;
// 		    int size = v.size() ;
// 		     int ans = size / 2 ;
		    
// 		    if( size % 2 == 0) {
// 		        int avg = (v[ans] + v[ans-1] ) / 2 ;
// 		        return avg;
// 		    }
// 		    else{
// 		        return v[ans] ;
// 		    }
// 		}
//🔸time complexity: O(Log(n))
//🔸space complexity: O( 1 )


//                    //❓Question: Sum of middle elements of two sorted array

// Given 2 sorted arrays Ar1 and Ar2 of size N each. 
// Merge the given arrays and find the sum of the two middle elements of the merged array.

// Example 1:
// Input:
// N = 5
// Ar1[] = {1, 2, 4, 6, 10}
// Ar2[] = {4, 5, 6, 9, 12}
// Output: 11
// Explanation: The merged array looks like
// {1,2,4,4,5,6,6,9,10,12}. Sum of middle
// elements is 11 (5 + 6).
 

// Example 2:
// Input:
// N = 5
// Ar1[] = {1, 12, 15, 26, 38}
// Ar2[] = {2, 13, 17, 30, 45}
// Output: 32
// Explanation: The merged array looks like
// {1, 2, 12, 13, 15, 17, 26, 30, 38, 45} 
// sum of middle elements is 32 (15 + 17).

// Expected Time Complexity: O(log N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 103
// 1 <= Ar1[i] <= 106
// 1 <= Ar2[i] <= 106

//🔴appraoch :
//  int findMidSum(int ar1[], int ar2[], int n) {
//             int ans[n+n] ;
//             int i=0; 
//             int j=0;
//             while( j < n) {
//                 ans[i++] = ar1[j] ;
//                 ans[i++] = ar2[j] ;
//                 j++ ;
                
//             }
            
//             int size = n+n ;
//             sort(ans, ans+size) ;
            
//             int midd = size / 2 ;
//             int temp = ans[midd] + ans[midd-1] ;
           
//             return temp ;
//     }
//🔸time complexity: O(n + Log(n)) 
//🔸space complexity: O(N+N)


//🔴appraoch : Optimised
//  int findMidSum(int arr1[], int arr2[], int n) {
//        int left=n-1;
//        int right=0;
//        while(left>=0 && right<n)
//        {
//            if(arr1[left]>arr2[right])
//            {
//                swap(arr1[left--],arr2[right++]);
//            }
//            else    break;
//        }
//        int el1 = *max_element(arr1,arr1+n);
//        int el2 = *min_element(arr2,arr2+n);
//        return  el1+el2;
//     }
//🔸time complexity: O(n) 
//🔸space complexity: O(1)