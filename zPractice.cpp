
//                  //🔘🔘🔘 ARRAY 🔘🔘🔘 //

//                                      //❓ Reverse the array :
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

//                                        // ❓Find min and max sum ;

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

//🔸another approach : using priority_queue  (max-heap) by default
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

// 🔸 approach 2  :
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

// 🔸approach 3: using set
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
//🔸space complexity: O(N+M)



//🔸apppraoch 2:  Optimise using unordered_map
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


// 🔸Approach 3 : sorting and comparing
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


//                            //❓Rotate an array cyclically
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


//🔸approach 2  :
// void rotate(int arr[], int n) {
// int temp = arr[n-1] ;
    
//     for(int i = n-1; i >= 0; i--){
//         arr[i] = arr[i-1] ;
//     }
    
//     arr[0] = temp ;
// } 
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                      //❓❓ Find (Max sum of contigous sub-array)

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

// 🔴 Optimised kadane's algorithm O(n) time complexity
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
//🔸time complexity: O(N)
//🔸space complexity: O(sum of all elements)

// int main() {
//     int arr[5] = {1, 2, 3, -2, 5} ;
//     int n = 5 ;

//  long long ans =  kadane(arr, n) ;

//  cout<<" sum of max sub-array : "<< ans <<endl ;
//     return 0;
// }


//                         //❓ Minimize the heights I

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



//                   //❓ Minimize the heights II

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

// int main() {
//     int arr[5] = {3, 12, 20, 9, 16} ;
//     int size = sizeof(arr)/sizeof(arr[0]) ;
//     int k = 3 ;

//     int ans = minDiff(arr, size, k) ;
//     cout<<" mini diff : "<<ans <<endl ;

//     return 0;
// }


//                            ❓ Minimum number of jumps

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


//                                 //❓Hard : Merge two sorted array without without extra space

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




//                           //❓ find duplicate in an array of N+1 Integers

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



//                      //🔘🔘🔘 Matrix 🔘🔘🔘 



//                      //❓Question: Spirally Traversing a Matrix

// Given a matrix of size r*c. Traverse the matrix in spiral form.

// Example 1:
// Input:
// r = 4, c = 4
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12},
//            {13, 14, 15,16}}
// Output: 
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// Explanation:

// Example 2:
// Input:
// r = 3, c = 4  
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12}}
// Output: 
// 1 2 3 4 8 12 11 10 9 5 6 7
// Explanation:
// Applying same technique as shown above, 
// output for the 2nd testcase will be 
// 1 2 3 4 8 12 11 10 9 5 6 7.


//🔴approach : 

// vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
//     {
//         int rowStart = 0 ;
//         int rowEnd = r - 1 ;

//         int colStart = 0 ;
//         int colEnd = c - 1 ;
        
//         vector<int> ans ;
        
//         int total = r*c ;
//         int count = 0 ;
        
//         while(count < total) {
        
//             for(int i = colStart; i<=colEnd && count < total; i++) {
//                 ans.push_back(matrix[rowStart][i]) ;
//                 count++ ;
//             }
//             rowStart++ ;
            
//             for(int j = rowStart; j<=rowEnd && count < total; j++) {
//                 ans.push_back(matrix[j][colEnd]) ;
//                 count++ ;
//             }
//             colEnd-- ;
            
//             for(int i = colEnd; i>=colStart && count < total; i--) {
//                 ans.push_back(matrix[rowEnd][i]) ;
//                 count++ ;
//             }
//             rowEnd-- ;
            
//             for(int j = rowEnd; j>=rowStart && count < total; j--){
//                 ans.push_back(matrix[j][colStart]) ;
//                 count++ ;
//             }
//             colStart++ ;
      
//         }
//         return ans ;
//     }
// 🔸time complexity : O( r * c)
// 🔸space complexity : O( r * c)



//                       //❓Question : 74. Search a 2D Matrix

// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

// Example 1:
// //  1   3   5   7
// //  10  11  16  20
// //  23  30  34  60

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

// Example 2:
// //  1   3   5   7
// //  10  11  16  20
// //  23  30  34  60

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
 

// Constraints:
// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -104 <= matrix[i][j], target <= 104

//🔴 approach: Brute force
//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//  int row = matrix.size() ;
//         int col = matrix[0].size()  ;

//         if(target < matrix[0][0] || target > matrix[row-1][col-1]) {
//             return false ;
//         }

//         if(target == matrix[0][0] || target == matrix[row-1][col-1]) {
//             return true ;
//         }


//         for(int i=0; i<row; i++) {
//             for(int j=0; j<col; j++) {
//                 if(matrix[i][j] == target) {
//                     return true ;
//                 }
//             }
//         }
//         return false ;
// }
//🔸time complexity: O(n*m)
//🔸space complexity: O(1)


//🔴 approach: Optimised appraoch using binary search

// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size() ;
//         int col = matrix[0].size() ;
//         int start = 0;
//         int end = row*col - 1;
//         int mid = start+(end-start)/2;

//         while(start<=end){

//          int result = matrix[mid/col][mid%col] ;
//          if(result==target){
//              return 1;
//          }
//          if(result<target){
//              start=mid+1 ;
//          }
//          else{
//              end=mid-1;
//          }
//          mid= start+(end-start)/2 ;
//         }
//         return 0;
//     }
//🔸time complexity: O(log (n*m))
//🔸space complexity: O(1)


//               //❓Question : Median in a row-wise sorted matrix

// Given a row wise sorted matrix of size R*C where R and C are always odd, 
// find the median of the matrix.

// Example 1:
// Input:
// R = 3, C = 3
// M = [[1, 3, 5], 
//      [2, 6, 9], 
//      [3, 6, 9]]
// Output: 5
// Explanation: Sorting matrix elements gives 
// us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
 

// Example 2:
// Input:
// R = 3, C = 1
// M = [[1], [2], [3]]
// Output: 2
// Explanation: Sorting matrix elements gives 
// us {1,2,3}. Hence, 2 is median.

// Your Task:  
// You don't need to read input or print anything. 
// Your task is to complete the function median() which takes the integers R and C along 
// with the 2D matrix as input parameters and returns the median of the matrix.

// Expected Time Complexity: O(32 * R * log(C))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= R, C <= 400
// 1 <= matrix[i][j] <= 2000

//🔴approach :  Brute force TLE  461/580

//  int median(vector<vector<int>> &matrix, int R, int C){
        
//         vector<int> v;
        
//         for(int i=0; i<R; i++) {
//             for(int j=0; j<C; j++) {
//                v.push_back(matrix[i][j])  ;
//             }
//         }         
        
//         int size = v.size() ;
//         int median = size / 2 ;
//         int ans = 0 ;
//         sort(v.begin(), v.end()) ;
        
//         for(int i=0; i<=median; i++) {
//             ans = v[i];
//         }
        
//         return ans ;
//     }
//🔸time complexity : O( R * C)
//🔸space complexity : O(R*C)

//🔴appraoch : strivers optimised appraoch 
//  int countSmaller(vector<int> &arr, int k) {
//          int l = 0, h = arr.size() - 1;
        
//         while(l <= h){
            
//             int mid = l + (h - l) / 2;
            
//             if(arr[mid] <= k)   l = mid + 1;
            
//             else h = mid - 1;
            
//         }
        
//         return l;
        
//     }

//     int median(vector<vector<int>> &matrix, int R, int C){
        
          
//         int l = matrix[0][0], h = matrix[0][C - 1];
        
//         for(int i = 1; i < R; i++){
            
//             l = min(l, matrix[i][0]);
            
//             h = max(h, matrix[i][C - 1]);
//         }
        
//         while(l <= h){
            
//             int mid = l + (h - l) / 2;
            
//             int count = 0, target = (R * C) / 2;
            
//             for(int i = 0; i < R; i++){
//                 count += countSmaller(matrix[i], mid);
//             }
            
//             if(count > target)  h = mid - 1;
            
//             else l = mid + 1;
//         }
        
//         return l;
//     }
//🔸time complexity : O( R * log(C))
//🔸space complexity : O(1)


//                       //❓Question: Row with max 1s

// Given a boolean 2D array of n x m dimensions where each row is sorted. 
// Find the 0-based index of the first row that has the maximum number of 1's.

// Example 1:
// Input: 
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).

// Example 2:
// Input: 
// N = 2, M = 2
// Arr[][] = {{0, 0}, {1, 1}}
// Output: 1
// Explanation: Row 1 contains 2 1's (0-based
// indexing).

// Constraints:
// 1 ≤ N, M ≤ 103
// 0 ≤ Arr[i][j] ≤ 1 

 

//🔴approach:  
// int solve(vector<int> &arr) {
//         int count = 0;
//         for(auto i:arr) {
//             if( i == 1) {
//                 count++ ;
//             }
//         }
        
//         return count ;
//     }

// 	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
// 	    int count = 0 ;
// 	    int ans = -1;
// 	    int temp = count ;
// 	    for(int i=0; i<n; i++) {
// 	        count = solve(arr[i]) ;
// 	        if(count > temp) {
// 	            ans = i ;
// 	            temp = count ;
// 	        }
// 	    }
	    
// 	    return ans ;
// 	}
//🔸time complexity: O( R*R)
//🔸space complexity: O(1)


//                       //❓Question: Sorted Matrix 

// Given an NxN matrix Mat. Sort all elements of the matrix.

// Example 1:
// Input:
// N=4
// Mat=[[10,20,30,40],
// [15,25,35,45] 
// [27,29,37,48] 
// [32,33,39,50]]
// Output:
// 10 15 20 25 
// 27 29 30 32
// 33 35 37 39
// 40 45 48 50
// Explanation:
// Sorting the matrix gives this result.

// Example 2:
// Input:
// N=3
// Mat=[[1,5,3],[2,8,7],[4,6,9]]
// Output:
// 1 2 3 
// 4 5 6
// 7 8 9
// Explanation:
// Sorting the matrix gives this result.

// Expected Time Complexity:O(N2LogN)
// Expected Auxillary Space:O(N2)

// Constraints:
// 1<=N<=1000
// 1<=Mat[i][j]<=105

//🔴approach : 
// vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
           
//            vector<int> temp ;
           
//            for(int i=0; i<N; i++) {
//                for(int j=0; j<N; j++) {
//                    temp.push_back(Mat[i][j]) ;
//                }
//            }
           
//            sort(temp.begin(), temp.end()) ;
           
//            int index = 0 ;
           
//            for(int i=0; i<N; i++) {
//                for(int j=0; j<N; j++) {
//                    Mat[i][j] = temp[index++] ;
//                }
//            }
           
//            return Mat ;
//     }
//🔸time complexitY: O(N^2 LogN)
//🔸space complexitY: O(N^2)



//                  //❓Question: Max Rectangle

// Given a binary matrix M of size n X m. 
//Find the maximum area of a rectangle formed only of 1s in the given matrix.

// Example 1:
// Input:
// n = 4, m = 4
// M[][] = {{0 1 1 0},
//          {1 1 1 1},
//          {1 1 1 1},
//          {1 1 0 0}}
// Output: 8
// Explanation: For the above test case the
// matrix will look like
// 0 1 1 0
// 1 1 1 1
// 1 1 1 1
// 1 1 0 0
// the max size rectangle is 
// 1 1 1 1
// 1 1 1 1
// and area is 4 *2 = 8.

// Your Task: 
// Your task is to complete the function maxArea which returns the maximum size rectangle area in a binary-sub-matrix with all 1’s. The function takes 3 arguments the first argument is the Matrix M[ ] [ ] and the next two are two integers n and m which denotes the size of the matrix M. 

// Expected Time Complexity : O(n*m)
// Expected Auixiliary Space : O(m)

// Constraints:
// 1<=n,m<=1000
// 0<=M[][]<=1

// Note:The Input/Ouput format and Example given are used for system's 
// internal purpose, and should be used by a user for Expected Output only.
// As it is a function problem, hence a user should not read any input from stdin/console.
//The task is to complete the function specified, and not to write the full code.

//🔴approach:
// compute max-area for 1st row
// for every remaining row  (add elem of above row)
// compute area 
// here we are also using concept from (Largest Rectangle in Histogram) problem

// #include<bits/stdc++.h>
// using namespace std;

// //next smaller elem code:
// vector<int> nextSmallerElement(int* arr, int n) {
//     stack<int> s ;
//     s.push(-1) ;        
//     vector<int> ans(n) ;


//     for(int i=n-1; i>=0; i--) {
//         int curr = arr[i] ;
       
//         while( (s.top() != -1) && (arr[s.top()] >= curr)) {
//             s.pop() ;
//         }
      
//         ans[i] = s.top() ;
//         s.push(i) ;
//     }
//     return ans;
// }

// //prev smaller elem code:
// vector<int> prevSmallerElement(int* arr, int n) {
//     stack<int> s ;
//     s.push(-1) ;        
//     vector<int> ans(n) ;


//     for(int i=0; i<n; i++) {
//         int curr = arr[i] ;
       
//         while( (s.top() != -1) && (arr[s.top()] >= curr)) {
//             s.pop() ;
//         }
      
//         ans[i] = s.top() ;
//         s.push(i) ;
//     }
//     return ans;
// }

// //largest histogram  main code:
// int largestRectangleArea(int* heights, int n ){

//     vector<int> next(n) ;
//     next = nextSmallerElement(heights, n) ;

//     vector<int> prev(n) ;
//     prev = prevSmallerElement(heights, n) ;

//     int area = INT_MIN; 
//     for(int i=0; i<n; i++) {
//         int length = heights[i] ;
         
//         if(next[i] == -1){
//             next[i] = n ;
//         }

//         int breadth = next[i] - prev[i] - 1 ;

//         int newArea = length * breadth ;
//         area = max(area, newArea) ;
//     }  
//    return area ;
// }

// //main code:
// int maxArea(int M[MAX][MAX], int n, int m) {
//     //compute area for first row
//     int area = largestRectangleArea(M[0], m) ;

//    //for every remaining rows
//     for(int i=1; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             //update row by adding previous rows value
//             if(M[i][j] != 0)
//             M[i][j] = M[i][j] + M[i-1][j] ;
//             else
//             M[i][j] = 0 ;
//         }
//         //entire row is updated now
//         int newArea = largestRectangleArea(M[i], m) ;
//         area = max(area, newArea) ;
//     }
//     return area;
//  }
//  int main() {}
 //🔴Time complexity: O(N x M)     (n=rows, m=column)
 //🔴space complexity: o(M)        (m=columns)




//                 //❓Question: Find a Specific Pair in Matrix 

// Problem Statement
//                                                                 
// You have been given a 2-D matrix 'MAT' of size 'N' x 'N' i.e. N rows and N columns.
// Your task is to find the maximum value of' matrix[a][b] - matrix[c][d] 'over all possible
// indices (О <= 'a', 'b', 'c', 'd' < 'N') such that. 'a'> 'c' and 'b'> 'd'.
// For example:
//     МАТ[3][3] =11  [    [1, 2, 3]
//                         [4, 5, 6]
//                         [7, 8, 9]  ]
//    In this example, to maximise the value of  matrix[a][b] - matrix[c][d]
//    fulfilling the given conditions on indices ('a' > 'c' and 'b' > 'd'),
//    we take 'a' = 2, 'b' = 2, 'C'==0 and 'd' =0. So, 'MAT[a][b]' - MAT[c][d]'=> 9 - 1 = 8
//    which is maximum among all possible combinations

// Constraints:
//    1 <= 'T' <= 100
//    2 <= 'N' <= 100
//    -10^5 <= 'MAT[i][j]" <= 10^5
//    Time Limit : 1 second


// Sample Input 1:
// 2
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 3
// -1 -2 -3
// -4 -5 -6
// -7 -8 -9
// Sample Output 1:
// 8
// -4
// Explanation For Sample Output 1:
// For sample test case 1: 

// In this sample test case, to maximise the value of ‘MAT[a][b]’ - ‘MAT[c][d]’ fulfilling the given conditions on indices (‘a’ > ‘c’ and ‘b’ > ‘d’), we take ‘a’ = 3, ‘b’ = 3, ‘c’ = 0 and ‘d’ = 0 .  So, ‘MAT[a][b]’ = 9 and ‘MAT[c][d]’ = 1 and the value of ‘MAT[a][b]’ - ‘MAT[c][d]’ => 9 - 1 = 8 which is maximum among all possible combinations.

// For sample test case 2: 

// In this sample test case, to maximise the value of ‘MAT[a][b]’ - ‘MAT[c][d]’ fulfilling the given conditions on indices (‘a’ > ‘c’ and ‘b’ > ‘d’), we take ‘a’ = 1, ‘b’ = 1, ‘c’ = 0 and ‘d’ = 0 .  So, ‘MAT[a][b]’ = -5 and ‘MAT[c][d]’ = -1 and the value of ‘MAT[a][b]’ - ‘MAT[c][d]’ => (-5) - (-1) = -4 which is maximum among all possible combinations.
// Sample Input 2:
// 2
// 2
// 1 5 
// 4 2 
// 3
// -1 5 -3
// -14 -5 -2
// -7 8 -9
// Sample Output 2:
// 1
// 22

//🔴approach ;
// #include <bits/stdc++.h> 
// int findMaxValue(vector<vector<int>>& mat, int n) {

//   vector<vector<int>> temp(mat.size(), vector<int>(mat[0].size(), INT32_MIN));

//     int ans = INT32_MIN;
//     for(int i = n-2; i>=0; i--){
//         for(int j = n-2; j>=0; j--){
//             temp[i][j] = max(mat[i+1][j+1], max(temp[i+1][j+1], max(temp[i+1][j], temp[i][j+1])));
//             ans = max(ans, temp[i][j]-mat[i][j]);
//         }
//     }

//     return ans;
// }
//🔸time complexity: O(N^2)
//🔸space complexity: O(N^2)



//                      //❓Question: Rotate a 2D array/matrix without using extra space

// Given a N x N 2D matrix Arr representing an image. 
// Rotate the image by 90 degrees (anti-clockwise). 
// You need to do this in place. Note that if you end up using an additional array, 
// you will only receive partial score.

// Example 1:
// Input:
// N = 3
// Arr[][] = {{1,  2,  3}
//            {4,  5,  6}
//            {7,  8,  9}}
// Output:
//  3  6  9 
//  2  5  8 
//  1  4  7 
// Explanation: The given matrix is rotated
// by 90 degree in anti-clockwise direction.

// Example 2:
// Input:
// N = 4
// Arr[][] = {{1,  2,  3,  4}
//            {5,  6,  7,  8}
//            {9, 10, 11, 12}
//            {13, 14, 15, 16}}
// Output:
//  4  8 12 16 
//  3  7 11 15 
//  2  6 10 14 
//  1  5  9 13
// Explanation: The given matrix is rotated
// by 90 degree in anti-clockwise direction.

// Expected Time Complexity: O(N*N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 1000
// 1 ≤ Arr[i][j] ≤ 1000

//🔴approach: 
// void rotateMatrix(vector<vector<int>>& arr, int n) {
	     
// 	     //🔸first transpose the matrix
// 	     for(int i=0; i<n; i++) {
// 	         for(int j=0; j<=i; j++) {
// 	             swap(arr[i][j], arr[j][i]) ;
// 	         }
// 	     }
	     
// 	     //🔸now swap lower index row with higher index row value till the condition (lower <= higher)
// 	     int i=0; 
// 	     int j= n-1;
	     
// 	     while( i <= j) {
// 	         swap(arr[i], arr[j]) ;
// 	         i++ ;
// 	         j-- ;
// 	     }
// 	}
//🔸time complxeity: O(N^N)
//🔸space complxeity: O(1)



//                   //❓Question : Kth smallest element in matrix

// Given a N x N matrix, where every row and column is sorted in non-decreasing order. 
// Find the kth smallest element in the matrix.

// Example 1:
// Input:
// N = 4
// mat[][] =         {{16, 28, 60, 64},
//                    {22, 41, 63, 91},
//                    {27, 50, 87, 93},
//                    {36, 78, 87, 94 }}
// K = 3
// Output: 27
// Explanation: 27 is the 3rd smallest element.
 

// Example 2:
// Input:
// N = 4
// mat[][] =     {{10, 20, 30, 40}
//                    {15, 25, 35, 45}
//                    {24, 29, 37, 48}
//                    {32, 33, 39, 50}}
// K = 7
// Output: 30
// Explanation: 30 is the 7th smallest element.

// Expected Time Complexity: O(K*Log(N))
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 50
// 1 <= mat[][] <= 10000
// 1 <= K <= N*N

//🔴approach 1 :
 //🔸using vector 
    // vector<int> temp;
    
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         temp.push_back(mat[i][j]) ;
    //     }
    // } 
    
    // sort(temp.begin(), temp.end()) ;
    
    // return temp[k-1] ;
 
//🔸time complexity: O(N^N logN)
//🔸space complexity: O(n)   

//🔴approach 2 : Optimised approach
//🔸using Priority queue
//     priority_queue<int> pq;
//    for(int i =0 ;i<n;i++){
//        for(int j = 0;j<n;j++)
//        {
//            if(pq.size()<k)
//            {
//                pq.push(mat[i][j]);
//            }
//            else if(mat[i][j]<pq.top())
//            {
//                pq.pop();
//                pq.push(mat[i][j]);
//            }
//            else
//            break;
//        }
//    }
   
//    return pq.top();

//🔸time complexity: O(n^N)
//🔸space complexity: O(k)



//                  //❓Question : Common elements in all row in matrix

// Problem Statement
// You are given a 2-D Matrix 'MAT' having 'N' rows and 'M' columns,
// respectively. Your task is to find all elements which are present in each
// row of the matrix.
// Note :
//    1. The output array can contain the elements in any particular order.
//    2. Even if a particular element appears more than once in each matrix row, it
//    should still be present only once in the output array.

// For Example:
//    Consider the matrix MAT [ [ 2, 3, 4, 7
//    ] , [ 0, 0, 3, 5],[1, 3, 8, 9]]
//    having 3 rows and 4 columns
//    respectively.
//    The output array should be [ 3 ] as 3
//    is the only element that is present in
//    all three rows.

// Sample Input 1 :
// 2
// 3 4
// 1 4 5 6
// 3 4 5 6
// 5 6 7 2
// 3 2
// 4 6 
// 6 4
// 2 6
// Sample Output 1 :
// 5 6
// 6
// Explanation For Sample Input 1 :
// For the first test case : 
// Elements that are common in the first two rows are 4, 5, and 6.
//  Out of which only 5 and 6 are present in the third row. 
//  Therefore the output array is [ 5, 6 ] in this case.

// For the second test case : 
// We can see that only 6 are present in all three rows. 
// Therefore the output array is [ 6 ] in this case.

// Sample Input 2 :
// 2
// 4 3
// 1 2 3
// 2 2 3
// 2 3 1
// 2 3 4
// 3 3
// 1 2 3
// 0 6 0
// 4 6 1
// Sample Output 2 :
// 2 3 
// Explanation For Sample Input 2 :
// For the first test case : 
// As elements 2 and 3 are present in all three rows of the matrix. 
// Therefore the output array is [ 2, 3 ] in this case.

// For the second test case : 
// There is no such element that is present in all three rows. 
// Therefore the output array is an empty array in this case.

//🔴approach : using Unordered_map

// vector<int> findCommonElements(vector<vector<int>> &mat)
// {
//    int row = mat.size() ;
//    int col = mat[0].size() ;

//    unordered_map<int, int> mp ;
//    for(int j=0; j<col; j++) {
//        mp[mat[0][j]] = 1 ;
//    }

//    for(int i=1; i<row; i++) {
//        for(int j=0; j<col; j++) {
//            if(mp[mat[i][j]] == i) {
//                mp[mat[i][j]] = i+1 ;
//            }
//        }
//    }

//    vector<int> ans ;
   
//    for(auto i:mp) {
//        if(i.second == row) {
//            ans.push_back(i.first) ;
//        }
//    }

//    return ans ;
// }

//🔸time complexity: O(row*col)
//🔸space complexity: O(col)




//                            //🔘🔘 STRINGS 🔘🔘 //


//                  //❓Question : 344 Reverse string

// Write a function that reverses a string. 
// The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.


// Example 1:
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// Example 2:
// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 
// Constraints:
// 1 <= s.length <= 105
// s[i] is a printable ascii character.

// void reverseString(vector<char>& s) 
//     {   //🔸 approach 1 : using STL
//         // reverse(s.begin(), s.end()) ;

//         //🔸approach 2: by swapping
//         // int st = 0 ;
//         // int ed = s.size()-1;
//         // while( st<=ed ){
//         //     swap(s[st++], s[ed--]) ;
//         // }

//     }
//🔸time complexity: O(n)            //reverse stl   / swapping
//🔸space complexity: O(1)           //reverse stl   / swapping



//                   // ❓ Question : Palindrome String

// Given a string S, check if it is palindrome or not.

// Example 1:
// Input: S = "abba"
// Output: 1
// Explanation: S is a palindrome

// Example 2:
// Input: S = "abc" 
// Output: 0
// Explanation: S is not a palindrome
 
// Constraints:
// 1 <= Length of S<= 105

//🔴approach : 1
// int isPalindrome(string S)
// 	{
// 	    int start =  0;
// 	    int end = S.size() - 1;
	    
// 	    while( start <= end) {
// 	        if(S[start] != S[end]) {
// 	            return 0;
// 	        }
// 	        start++ ;
// 	        end-- ;
// 	    }
// 	    return 1;
// 	}
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                   //❓Question : Duplicates in a string

// find all the duplicates in a string

//example 1:
// S = "abcdeafgc"
// input:  2

//example 2:
// S = "abcdefg"
// input:  0

//🔸approach : brute force
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void duplicates(string& s) {
//     int len = s.size() ;
//     sort(s.begin(), s.end()) ;

//     for(int i=0; i<len; i++) {

//         int count = 1 ;

//         while(i < len-1 && s[i] == s[i+1]) {
//             count++ ;
//             i++ ;
//         }

//         if(count > 1) {
//             cout<< s[i] << " count = "<< count <<endl;
//         }
//     }

// }
//🔸time complexity: O(N Log(N))
//🔸space complexity: O(1)

//🔸approach : optimised way using unordered_map
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// void duplicates(string& S) {
//     unordered_map<char ,int> mp ;

//     for(int i=0; i<S.size(); i++) {
//         mp[S[i]]++ ;
//     }

//     for(auto i:mp) {
//         if(i.second > 1){
//             cout<< i.first << " == "<< i.second <<endl ;
//         }
//     }
// }

// int main() {
    
//     string s = "meranamhai gulla" ;
//     duplicates(s) ;

//     return  0;
// }
//🔸time complexity = O(n) 
//🔸space complexity = O(n)        // no. of character



//                //❓Question : WHy is String are immutable in JAVA

// String is immutable in Java because this offers several benefits: 
// String pool is possible because String is immutable in Java. 
// It increases security because any hacker can't change its value and
//  it's used for storing sensitive information such as a database username or password.

//🔸what is string pool ❓ 

// String pool is nothing but a storage area in Java heap where string literals stores. 
// It is also known as String Intern Pool or String Constant Pool.
//  It is just like object allocation. By default, 
//  it is empty and privately maintained by the Java String class. 
//  Whenever we create a string the string object occupies some space in the heap memory.
//   Creating a number of strings may increase the cost and memory too which may reduce the performance also




//                   //❓Question : Check if one string is rotation of another or not

// You are given two Strings 'P'and 'Q'of equal length. Your task is to return 1 if String
//  'P' can be converted into String 'Q' by cyclically rotating it to the right any number of
// times ( Possibly Zero ). else return 0.

//  A cyclic rotation to the right on String 'A' consists of taking String 'A' and moving the
//  rightmost character to the leftmost position. For example, if 'A' = "pqrst", then it will
//  be "tpqrs" after one cyclic rotation on 'A'.

// For Example:
//    Consider the two strings 'P' - "abfyg" and 'Q' = "gabfy"
//    If we cyclically rotate String 'P' to the right once. The resulting
//    string P becomes "gabfy" which is equal to String 'Q'.
//    Therefore it is possible to convert String 'P' to String 'Q'.


// Sample Input 1:
// abac
// baca
// Sample Output 1:
// 1
// Explanation For Sample Input 1:
// Let's try rotating the String 'P' to the right and try all the possible rotations:
// 1) If we rotate "abac" to the right, the resulting string becomes "caba".
// 2) If we rotate "caba" to the right, the resulting string becomes "acab".
// 3) If we rotate "acab" to the right, the resulting string becomes "baca" 
//    which is equal to String 'Q'.
// Therefore it is possible to convert String 'P' to String 'Q'. Hence, we will return 1 in this case.

// Sample Input 2:
// aabca
// bacaa
// Sample Output 2:
// 0

// Constraints:
// 1 <= |P| , |Q| <= 10^5
// |P| = |Q|
// String 'P' and 'Q' have the same length and contain only lowercase English letters.

// Time Limit: 1 sec
// Follow Up:
// Can you solve this in O(N) time?

//🔴approach : Brute force appraoch  // TLE

// int isCyclicRotation(string &p, string &q) 
// {
//     int psize = p.size() ;
//     int qsize = q.size() ;

//     for(int i=0; i<psize; i++) {
//         int temp = p[psize-1] ;

//         for(int j=psize-1; j>=1; j--) {
//             p[j] = p[j-1] ;
//         }

//         p[0] = temp ;

//         int k = 0 ;
//         int l = 0 ;
//         int count = 0 ;
//         while( k < psize && l < qsize){
//             if(p[k] == q[l]) {
//                 count++ ;
//                 k++ ;
//                 l++ ;
//             }
//             else{
//                 break ;
//             }

//             if(count == qsize-1) {
//                 return 1;
//             }
//         }
       
//     }

//     return 0;
// }
//🔸time complexity : O(N^3)       //  O(N*N*2N)
//🔸space complexity :  O(1) 

//🔴approach : Optimised approach using vector
// int isCyclicRotation(string &p, string &q) 
// {
//     vector<char>a;    
//     vector<char>b;    
    
//     for(int i=0;i<p.size();i++){   
//         a.push_back(p[i]);       
//         b.push_back(q[i]);    
//     }   
    
//      if(a==b) return 1;    
     
//      for(int i=0;i<a.size();i++){
//         b.push_back(b[0]);        
//         b.erase(b.begin());        
        
//         if(a==b)  return 1;    
//     }   
    
//     return 0; 
// }
//🔸time complexity : O(N)              // O(N+N)
//🔸space complexity :  O(N)            // O(N+N) 



//                 //❓Question : Check if a string is a valid shuffle of two distinct strings

// Given two strings str1 and str2, and a third-string shuffle, 
// determine if shuffle is a valid shuffle of str1 and str2, 
// where a valid shuffle contains all characters from str1 and str2 occurring the same number of times,
//  regardless of order. Print “YES” if valid, and “NO” otherwise.

// Examples: 

// Input: str1 = BA, str2 = XY, shuffle = XYAB 
// Output: YES

// Input: str1 = BA, str2 = XY, shuffle = XUMB 
// Output: NO

// Input: str1 = ABC, str2 = ZYS, shuffle = YBAZSC 
// Output:YES

//🔴approach : Brute force approach 
// #include<iostream>
// using namespace std;

// string validshuffle(string& a, string& b, string& shuffle) {
//     int asize = a.size() ;
//     int bsize = b.size() ;
//     int shsize = shuffle.size() ;

//     if( (asize + bsize) != shsize) {
//         return "NO" ;
//     }

//     for(int i=0; i<asize; i++) {
//         int count = 0 ;
//         for(int j=0; j<shsize; j++) {
//             if(a[i] == shuffle[j]) {
//                 count++ ;
//                 break ;
//             }
//         }
//         if(count != 1) {
//             return "NO" ;
//         }
//     }

//     for(int i=0; i<bsize; i++) {
//         int count = 0 ;
//         for(int j=0; j<shsize; j++) {
//             if(b[i] == shuffle[j]) {
//                 count++ ;
//                 break ;
//             }
//         }
//         if(count != 1) {
//             return "NO" ;
//         }
//     }

//     return "YES" ;
// }
//🔸time complexity : O(N^2)              //O(N^2 + N^2)
//🔸space complexity: O(1)

// int main() {
//     string a = "BA" ;
//     string b = "XY" ;
//     string shuffle = "XYAB" ;

//     bool result = validshuffle(a, b, shuffle) ;
//     cout<<" answer : "<<result <<endl ;

//     return 0 ;
// }



//                     //❓Question : 38. Count and Say

// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

// countAndSay(1) = "1"
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), 
// which is then converted into a different digit string.
// To determine how you "say" a digit string, split it into the minimal number of substrings such that each substring 
// contains exactly one unique digit. Then for each substring, say the number of digits, then say the digit.
// Finally, concatenate every said digit.

// For example, the saying and conversion for digit string "3322251":

//              "3322251"
//    tw0 3's, three 2's, One 5, and one 1
//          2 3 + 3 2 + 1 5 + 1 1
//              "23321511"

// Given a positive integer n, return the nth term of the count-and-say sequence.

// Example 1:

// Input: n = 1
// Output: "1"
// Explanation: This is the base case.

// Example 2:
// Input: n = 4
// Output: "1211"
// Explanation:
// countAndSay(1) = "1"
// countAndSay(2) = say "1" = one 1 = "11"
// countAndSay(3) = say "11" = two 1's = "21"
// countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
 
// Constraints:
// 1 <= n <= 30

//🔴approch : 
// 1  = 1
// 2  = 11
// 3  = 21
// 4  = 1211
// 5  = 111221
// 6  = 312211
// 7  = 13112221
// ...

//  string countAndSay(int n) {
//         if( n == 1) return "1" ;
//         if( n == 2) return "11" ;

//         string s = "11" ;

//         for(int i=3; i<=n; i++) {
//             string t = "" ;
//             s = s + "&" ;
//             int count = 1;

//             for(int j=1; j<s.length(); j++) {
//                 if( s[j] != s[j-1] ){
//                     t = t + to_string(count) ;
//                     t = t + s[j-1] ;
//                     count = 1;
//                 }
//                 else{
//                     count++ ;
//                 }
//             }
//             s = t ;
//         }
//         return s ;
//     }
  
//🔸time complexity :  O(N^2)
//🔸space complexity : O(N)



//                    //❓Question : Longest Palindrome in a string

// Given a string S, find the longest palindromic substring in S. 
// Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). 
// Palindrome string: A string that reads the same backward. 
// More formally, S is a palindrome if reverse(S) = S. In case of conflict, 
// return the substring which occurs first ( with the least starting index).

// Example 1:
// Input:
// S = "aaaabbaa"
// Output: aabbaa
// Explanation: The longest Palindromic
// substring is "aabbaa".

// Example 2:
// Input: 
// S = "abc"
// Output: a
// Explanation: "a", "b" and "c" are the 
// longest palindromes with same length.
// The result is the one with the least
// starting index.

// Constraints:
// 1 ≤ |S| ≤ 103

// //🔴approach : 
// #include<iostream>
// using namespace std;
//    string longestPalin (string S) {
        
//         string ans="";
//         int n=S.size();
        
//         int maxl=0;
//         int l=0;
//         int r=0;

//         for(int i=0; i<n; i++){
//             //if longest substring palindrome is of  odd length
//             int left=i;
//             int right=i;
//             while(left>=0&&right<=(n-1)&&S[left]==S[right]){
//                   left--;
//                   right++; 
//             }
//             if(right-left+1>maxl){
//                 maxl=right-left+1;
//                 l++;
//                 r--;

//             }
            
//             //if longest substring palindrome is of  even lemgth  
//             left=i;
//             right=i+1;
//             while(left>=0&&right<=n-1&&S[left]==S[right]){
//                 left--;
//                 right++;
//             }
//             if(right-left+1>2&&right-left+1>maxl){
//                 maxl=right-left+1;
//                 l++;
//                 r--;
//             }
//         }
        
//         for(int i=l; i<=r; i++){
//             ans=ans+S[i];
//         }
//         return ans;
//     }
    
//🔸time complexity :  O(N*2N)
//🔸space complexity : O(N)



//                 //❓Question : Longest Repeating subsequence

// Given string str, find the length of the longest repeating subsequence such that it can be 
// found twice in the given string.

// The two identified subsequences A and B can use the same ith character from string str 
// if and only if that ith character has different indices in A and B. 
// For example, A = "xax" and B = "xax" then the index of first "x" must be different in 
// the original string for A and B.

// Example 1:
// Input:
// str = "axxzxy"
// Output: 2
// Explanation:
// The given array with indexes looks like
// a x x z x y 
// 0 1 2 3 4 5

// The longest subsequence is "xx". 
// It appears twice as explained below.

// subsequence A
// x x
// 0 1  <-- index of subsequence A
// ------
// 1 2  <-- index of str 


// subsequence B
// x x
// 0 1  <-- index of subsequence B
// ------
// 2 4  <-- index of str 

// We are able to use character 'x' 
// (at index 2 in str) in both subsequences
// as it appears on index 1 in subsequence A 
// and index 0 in subsequence B.


// Example 2:

// Input:
// str = "axxxy"
// Output: 2
// Explanation:
// The given array with indexes looks like
// a x x x y 
// 0 1 2 3 4

// The longest subsequence is "xx". 
// It appears twice as explained below.

// subsequence A
// x x
// 0 1  <-- index of subsequence A
// ------
// 1 2  <-- index of str 


// subsequence B
// x x
// 0 1  <-- index of subsequence B
// ------
// 2 3  <-- index of str 

// We are able to use character 'x' 
// (at index 2 in str) in both subsequences
// as it appears on index 1 in subsequence A 
// and index 0 in subsequence B.

// Expected Time Complexity: O(n2)
// Expected Space Complexity: O(n2)


// Constraints:
// 1 <= |str| <= 103

//🔴approach :
// int LongestRepeatingSubsequence(string str){
		    
// 		    int n = str.length() ;
// 		    int mat[n+1][n+1] ;
		    
// 		    for(int i=0; i<=n; i++) {
// 		        for(int j=0; j<=n; j++) {
// 		            mat[i][j] = 0 ;
// 		        }
// 		    }
		    
// 	        for(int i=1; i<=n; i++) {
// 	            for(int j=1; j<=n; j++) {
	                
// 	                if(str[i-1] == str[j-1] && i != j) {
// 	                    mat[i][j] = 1 + mat[i-1][j-1] ;
// 	                }
// 	                else{
// 	                    mat[i][j] = max(mat[i][j-1], mat[i-1][j]) ;
// 	                }
// 	            }
// 	        }	    
	        
// 	        return mat[n][n] ;
// 	}
// 🔸 Time Complexity: O(n^2 )
// 🔸 Space Complexity: O(n^2)



//           //❓Question: Print all subsequences of a string

// Given a string, we have to find out all its subsequences of it.
// A String is a subsequence of a given String, that is generated by deleting some character of
// a given string without changing its order.

// Examples: 
// Input : abc
// Output : a, b, c, ab, bc, ac, abc

// Input : aaa
// Output : a, a, a, aa, aa, aa, aaa


//🔴 approch : using Recursion
// void solve(string str, string output, int index, vector<string>& ans) {
	
//       //base case
//       if( index >= str.length()){
//          if( output.length() > 0){          // if condition if dont want to return an empty string as an answers
//            ans.push_back(output) ;
//          }
//         return ;
//       }

//       //exclude
//       solve(str, output, index+1, ans) ;

//       //include
//       char element = str[index] ;
//       output.push_back(element) ;
//       solve(str, output, index+1, ans) ;
// }

// vector<string> subsequences(string str){
	
// 	vector<string> ans ;
// 	string output = "" ;
// 	int index = 0 ;
// 	solve(str, output, index, ans) ;
// 	return ans ;
// }
//🔸time complexity :
//🔸space complexity :



//                       //❓Question: Permutation of Given String

// Given a string S. The task is to print all unique permutations of the given string 
// in lexicographically sorted order.

// Example 1:
// Input: ABC
// Output:
// ABC ACB BAC BCA CAB CBA
// Explanation:
// Given string ABC has permutations in 6 
// forms as ABC, ACB, BAC, BCA, CAB and CBA .

// Example 2:
// Input: ABSG
// Output:
// ABGS ABSG AGBS AGSB ASBG ASGB BAGS 
// BASG BGAS BGSA BSAG BSGA GABS GASB 
// GBAS GBSA GSAB GSBA SABG SAGB SBAG 
// SBGA SGAB SGBA
// Explanation:
// Given string ABSG has 24 permutations.

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function find_permutaion() which takes the string S as input parameter and returns a vector of string in lexicographical order.

// Expected Time Complexity: O(n! * n)
// Expected Space Complexity: O(n! * n)

// Constraints:
// 1 <= length of string <= 5

//🔴approch : Recursion + backtrack
// void solve(int index, string S, set<string>&ans) {
//         if(index == S.size()) {
//             ans.insert(S);
//             return;
//         }
//         for(int i=index; i<S.size();i++) {
//             swap(S[index],S[i]);
//             solve(index+1,S,ans);
//             //backtrack
//             swap(S[index],S[i]);
//         }
        
//     }

	
// 	vector<string>find_permutation(string S){
		  		 
//         set<string>ans;
//         solve(0,S,ans);
//         vector<string>result(ans.begin(),ans.end());
//         return result;
// 	}
//🔸time complexity:  O(N! * n)
//🔸space compplexity: O(N! * N!)




//                 //❓Question : Split the binary string into substrings with equal number of 0s and 1s

// Given a binary string str of length N, the task is to find the maximum count of consecutive 
// substrings str can be divided into such that all the substrings are balanced 
// i.e. they have equal number of 0s and 1s. If it is not possible to split str satisfying 
// the conditions then print -1.

// Example: 
// Input: str = “0100110101” 
// Output: 4
// The required substrings are “01”, “0011”, “01” and “01”.

// Input: str = “0111100010” 
// Output: 3 

// Input: str = “0000000000” 
// Output: -1


//🔴approach: 
// #include<iostream>
// using namespace std;
// int maxSubStr(string str){
     
//     int count0=0;
//     int count1=0;
//     int ans=0;
       
//     for(int i=0;i<str.length();i++){
           
//         if(str[i]=='0'){
//             count0++;
//         }
//         //   cout<< "count0 = "<< count0 << endl ;
           
//         if(str[i]=='1'){
//             count1++;
//         }
//         //   cout<< "count1 = "<< count1 << endl ;
           
//         if(count0==count1){
//             ans++;
//         }
//         //   cout<< "ans = "<< ans << endl ;
//     }
       
//        if(ans==0 || count1!=count0){
//            return -1;
//        }
       
//        return ans;
// }
//🔸time complexity : O(n)
//🔸space complexity : O(1)



//                      //❓Question: Word Wrap

// Given an array nums[] of size n, where nums[i] denotes the number of characters in one word. 
// Let K be the limit on the number of characters that can be put in one line (line width).
// Put line breaks in the given sequence such that the lines are printed neatly.
// Assume that the length of each word is smaller than the line width. 
// When line breaks are inserted there is a possibility that extra spaces are present in each line. 
// The extra spaces include spaces put at the end of every line except the last one. 

// You have to minimize the following total cost where total cost = Sum of cost of all lines, 
// where cost of line is = (Number of extra spaces in the line)2.

// Example 1:
// Input: nums = {3,2,2,5}, k = 6
// Output: 10
// Explanation: Given a line can have 6
// characters,
// Line number 1: From word no. 1 to 1
// Line number 2: From word no. 2 to 3
// Line number 3: From word no. 4 to 4
// So total cost = (6-3)2 + (6-2-2-1)2 = 32+12 = 10.
// As in the first line word length = 3 thus
// extra spaces = 6 - 3 = 3 and in the second line
// there are two word of length 2 and there already
// 1 space between two word thus extra spaces
// = 6 - 2 -2 -1 = 1. As mentioned in the problem
// description there will be no extra spaces in
// the last line. Placing first and second word
// in first line and third word on second line
// would take a cost of 02 + 42 = 16 (zero spaces
// on first line and 6-2 = 4 spaces on second),
// which isn't the minimum possible cost.

// Example 2:
// Input: nums = {3,2,2}, k = 4
// Output: 5
// Explanation: Given a line can have 4 
// characters,
// Line number 1: From word no. 1 to 1
// Line number 2: From word no. 2 to 2
// Line number 3: From word no. 3 to 3
// Same explaination as above total cost
// = (4 - 3)2 + (4 - 2)2 = 5.

// Expected Time Complexity: O(n2)
// Expected Space Complexity: O(n)
 
// Constraints:
// 1 ≤ n ≤ 500
// 1 ≤ nums[i] ≤ 1000
// max(nums[i]) ≤ k ≤ 2000

//🔴 approch: Memoization 

//    int solve(vector<int> &nums, int i,int j,int k,vector<vector<int>> &dp){
//        int n=nums.size();
//        //base case
//        if(i>j){
//            return 0;
//        }
//        //memo
//        if(dp[i][j]!=-1){
//            return dp[i][j];
//        }
//        int ans=INT_MAX;
//        int sum=0;
//        for(int idx=i;idx<=j;idx++){
//            sum+=nums[idx];
//            // no need to calc. spaces for last line
//            if(sum<=k && idx==n-1){
//               return dp[i][j]=0;
//            }
//            if(sum<=k){
//                ans=min(ans,(k-sum)*(k-sum)+solve(nums,idx+1,j,k,dp));
//                sum++;//to handle space minus
//            }
           
//        }
//        return dp[i][j]=ans;//memo and return
//    }
//    int solveWordWrap(vector<int> nums, int k) 
//    { 
//        int n=nums.size();
//        vector<vector<int>> dp(n,vector<int>(n,-1));
//        return solve(nums,0,n-1,k,dp);
//    } 
//🔸time complexity : O(N^N)
//🔸space complexity :O(N^N)



//               ❓❓ Question: Edit Distance

// Given two strings s and t. Return the minimum number of operations required to convert s to t.
// The possible operations are permitted:

// Insert a character at any position of the string.
// Remove any character from the string.
// Replace any character from the string with any other character.
 

// Example 1:
// Input: 
// s = "geek", t = "gesek"
// Output: 1
// Explanation: One operation is required 
// inserting 's' between two 'e's of s.

// Example 2:
// Input : 
// s = "gfg", t = "gfg"
// Output: 
// 0
// Explanation: Both strings are same.
 
// Your Task:
// You don't need to read or print anything. Your task is to complete the function editDistance() which takes strings s and t as input parameters and returns the minimum number of operation to convert the string s to string t. 

// Expected Time Complexity: O(|s|*|t|)
// Expected Space Complexity: O(|s|*|t|)

// Constraints:
// 1 ≤ Length of both strings ≤ 100
// Both the strings are in lowercase.

// //🔴approch : Recursion
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(string& a, string& b, int i, int j) {
//     //base case
//     if( i == a.length()) {
//         return b.length() - j;
//     }

//     if( j == b.length()) {
//         return a.length() - i;
//     }

//     int ans = 0;
//     if(a[i] == b[j]) {
//         return solve(a, b, i+1, j+1) ;
//     }
//     else{
//         //insert 
//         int insertAns = 1 + solve(a, b, i, j+1);

//         //delete
//         int deleteAns = 1 + solve(a, b, i+1, j) ;

//         //replcae
//         int replaceAns = 1 + solve(a, b, i+1, j+1) ;

//         ans = min(insertAns, min(deleteAns, replaceAns)) ;
//     }

//     return ans ;
// }

//  int minDistance(string word1, string word2) {
//         return solve(word1, word2, 0, 0) ;
// }
// //🔸time complexity: expo
// //🔸space complexity: O(n)         // length of string


// //🔴approch : Recursion + Memoization
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(string& a, string& b, int i, int j, vector<vector<int>>& dp) {
//     //base case
//     if( i == a.length()) {
//         return b.length() - j;
//     }

//     if( j == b.length()) {
//         return a.length() - i;
//     }

//     if(dp[i][j] != -1){
//         return dp[i][j] ;
//     }

//     int ans = 0;
//     if(a[i] == b[j]) {
//         return solve(a, b, i+1, j+1, dp) ;
//     }
//     else{
//         //insert 
//         int insertAns = 1 + solve(a, b, i, j+1, dp);

//         //delete
//         int deleteAns = 1 + solve(a, b, i+1, j, dp) ;

//         //replcae
//         int replaceAns = 1 + solve(a, b, i+1, j+1, dp) ;

//         ans = min(insertAns, min(deleteAns, replaceAns)) ;
//     }

//     return dp[i][j] = ans ;
// }

//  int minDistance(string word1, string word2) {

//     vector<vector<int>> dp(word1.length(), vector<int>(word2.length(), -1));
//     return solve(word1, word2, 0, 0, dp) ;
// }
// //🔸time complexity: O(n*m)
// //🔸space complexity: O(n)         // length of minimum string



// //🔴approch : Tabulation
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(string& a, string& b) {

//     vector<vector<int>> dp(a.length()+1, vector<int>(b.length()+1, 0));

//     //base case
//     for(int j=0; j<b.length(); j++){
//         dp[a.length()][j] = b.length() - j ;
//     }

//     for(int i=0; i<a.length(); i++){
//         dp[i][b.length()] = a.length() - i ;
//     }


//     for( int i=a.length()-1; i>=0; i--){
//         for(int j=b.length()-1; j>=0; j--){

//             int ans = 0;

//             if(a[i] == b[j]) {
//                 ans = dp[i+1][j+1];
//             }
//             else{
//                 //insert 
//                 int insertAns = 1 + dp[i][j+1];

//                 //delete
//                 int deleteAns = 1 + dp[i+1][j] ;

//                 //replcae
//                 int replaceAns = 1 + dp[i+1][j+1] ;

//                 ans = min(insertAns, min(deleteAns, replaceAns)) ;
//             }

//             dp[i][j] = ans ;
//         }
//     }

//     return dp[0][0] ;
// }

//  int minDistance(string word1, string word2) {

//     return solve(word1, word2) ;
// }
// //🔸time complexity: O(n*m)
// //🔸space complexity: O(n)         // length of minimum string


//🔴approch : space optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(string& a, string& b) {

//     vector<int> curr(b.length()+1, 0) ;
//     vector<int> next(b.length()+1, 0) ;

//     //base case
//     for(int j=0; j<b.length(); j++){
//        next[j] = b.length() - j ;
//     }

//     for( int i=a.length()-1; i>=0; i--){
//         for(int j=b.length()-1; j>=0; j--){

//             //important line // got from 2nd base case
//             curr[b.length()] = a.length() - i;

//             int ans = 0;

//             if(a[i] == b[j]) {
//                 ans = next[j+1];
//             }
//             else{
//                 //insert 
//                 int insertAns = 1 + curr[j+1];

//                 //delete
//                 int deleteAns = 1 + next[j] ;

//                 //replcae
//                 int replaceAns = 1 + next[j+1] ;

//                 ans = min(insertAns, min(deleteAns, replaceAns)) ;
//             }
//             curr[j] = ans ;
//         }
//         next = curr ;
//     }

//     return next[0] ;
// }

//  int minDistance(string word1, string word2) {

//     if(word1.length() == 0){
//         return word2.length();
//     }
//     if(word2.length() == 0){
//         return word1.length() ;
//     }

//     return solve(word1, word2) ;
// }
//🔸time complexity: O(n*m)
//🔸space complexity: O(n)         // length of minimum string



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




///                //❓Question: Paranthesis Checker

// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

// Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".

// Example 1:

// Input:
// {([])}
// Output: 
// true
// Explanation: 
// { ( [ ] ) }. Same colored brackets can form 
// balanced pairs, with 0 number of 
// unbalanced bracket.
// Example 2:

// Input: 
// ()
// Output: 
// true
// Explanation: 
// (). Same bracket can form balanced pairs, 
// and here only 1 type of bracket is 
// present and in balanced way.
// Example 3:

// Input: 
// ([]
// Output: 
// false
// Explanation: 
// ([]. Here square bracket is balanced but 
// the small bracket is not balanced and 
// Hence , the output will be unbalanced.
// Your Task:
// This is a function problem. You only need to complete the function ispar() that takes a string as a parameter and returns a boolean value true if brackets are balanced else returns false. The printing is done automatically by the driver code.

// Expected Time Complexity: O(|x|)
// Expected Auixilliary Space: O(|x|)

// Constraints:
// 1 ≤ |x| ≤ 32000

 
//🔸approach : using stack

//  bool ispar(string x)
//     {
//         stack<char> temp;
//         temp.push(x[0]) ;
        
//         int n = x.length() ;
//         int i=1; 
        
//         while(i < n) {
            
//             if(temp.empty()) {
//                 temp.push(x[i]) ;
//                 i++ ;
//             }
//             else{
            
//             if(temp.top() == '[' && x[i] == ']') {
//                 temp.pop() ;
//                 i++ ;
//             }
//             else if(temp.top() == '(' && x[i] == ')') {
//                 temp.pop() ;
//                 i++ ;
//             }
//             else if(temp.top() == '{' && x[i] == '}') {
//                 temp.pop() ;
//                 i++ ;
//             }
//             else{
//                 temp.push(x[i]) ;
//                 i++ ;
//             }
//             }
//         }
        
//         if(temp.empty()) {
//             return true ;
//         }
//         else{
//             return false ;   
//         }
//     }
//🔸time complexity: O(N)           // N = length of string
//🔸space compplexity: O(N)




//                        //❓Question: Word Break

// Given a string A and a dictionary of n words B, find out if A can be 
// segmented into a space-separated sequence of dictionary words.

// Note: From the dictionary B each word can be taken any number of times and in any order.
// Example 1:

// Input:
// n = 12
// B = { "i", "like", "sam",
// "sung", "samsung", "mobile",
// "ice","cream", "icecream",
// "man", "go", "mango" }
// A = "ilike"
// Output:
// 1
// Explanation:
// The string can be segmented as "i like".

// Example 2:

// Input:
// n = 12
// B = { "i", "like", "sam",
// "sung", "samsung", "mobile",
// "ice","cream", "icecream", 
// "man", "go", "mango" }
// A = "ilikesamsung"
// Output:
// 1
// Explanation:
// The string can be segmented as 
// "i like samsung" or "i like sam sung".
 

// Your Task:
// Complete wordBreak() function which takes a string and list of strings as 
// a parameter and returns 1 if it is possible to break words, else return 0. 
// You don't need to read any input or print any output, it is done by driver code.


// Expected time complexity: O(s2)

// Expected auxiliary space: O(s) , where s = length of string A

 

// Constraints:
// 1 ≤ N ≤ 12
// 1 ≤ s ≤ 1100 , where s = length of string A

//🔴approach:
// bool solve(unordered_map<string,bool>mp, string word)
//         {
//             int size=word.size();
//             if(size==0){
//                 return true;
//             }
//             string temp="";
//             for(int i=0;i<word.length();i++){
//                 temp+=word[i];
//                 if(mp.find(temp)!=mp.end() && solve(mp,word.substr(i+1)))
//                 return true;
//             }
//             return false;
//         }

//     int wordBreak(string A, vector<string> &B) {
       
//         unordered_map <string, bool > mp ;
//         for(auto it : B)
//         mp[it]=true;
        
//         return solve(mp,A)==true?1:0;
//     }

//🔸time complexity: O(N^2)
//🔸space complexity: O(B.size() + A.length())




//                   ///❓Question: Search Pattern (Rabin-Karp Algorithm)

// Given two strings, one is a text string and other is a pattern string. 
// The task is to print the indexes of all the occurences of pattern string in the text string.
//  For printing, Starting Index of a string should be taken as 1.

// Example 1:
// Input:
// S = "batmanandrobinarebat", pat = "bat"
// Output: 1 18
// Explanation: The string "bat" occurs twice
// in S, one starts are index 1 and the other
// at index 18. 
// â€‹Example 2:

// Input: 
// S = "abesdu", pat = "edu"
// Output: -1
// Explanation: There's not substring "edu"
// present in S.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function search() which takes the string S and the string pat as inputs and returns an array denoting the start indices (1-based) of substring pat in the string S. 

// Expected Time Complexity: O(|S|*|pat|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1<=|S|<=105
// 1<=|pat|<|S|

//🔸approach : 
//  vector <int> search(string pat, string txt)
//         {
//            vector<int> result;
        
//         int n = txt.size()-pat.size();
//         for(int i=0; i<=n; i++)
//         {
//             string temp = txt.substr(i, pat.size());
//             if(pat==temp)
//                 result.push_back(i+1);
//         }
//         if(result.size()==0)
//             result.push_back(-1);
//         return result;

//         }
//🔴time  complexity: O(n)         // n = txt.size()-pat.size();
//🔴space complexity: O(n)         // number of text found in pat




//                   //❓question: Longest Prefix Suffix (KMP algo)


// Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

// NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.

// Example 1:

// Input: s = "abab"
// Output: 2
// Explanation: "ab" is the longest proper 
// prefix and suffix. 
// Example 2:

// Input: s = "aaaa"
// Output: 3
// Explanation: "aaa" is the longest proper 
// prefix and suffix. 
// Your task:
// You do not need to read any input or print anything. The task is to complete the function lps(), which takes a string as input and returns an integer.

// Expected Time Complexity: O(|s|)
// Expected Auxiliary Space: O(|s|)

// Constraints:
// 1 ≤ |s| ≤ 105
// s contains lower case English alphabets

///🔴approach :  KMP algo

// int lps(string pattern) {
 
//     int n = pattern.size();
//     vector<int> lps(n, 0);
//     int length = 0;  // Length of the previous longest prefix suffix
 
//     int i = 1;
//     while (i < n) {
//         if (pattern[i] == pattern[length]) {
//             lps[i] = length + 1;
//             length++;
//             i++;
//         } else {
//             if (length != 0) {
//                 length = lps[length - 1];
//             } else {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
 
//     return lps[n - 1];  // Return the length of the lps array for the last position
// 	}
//🔸time complexity: O(N)
//🔸space complexity: O(n)


//                 //❓Question: Convert a sentence into its equivalent mobile numeric keypad sequence


// Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence. 
 

// Mobile-keypad

//      1        2       3
//     [ ]     [abc]   [def]
//
//      4        5       6
//     [ghi]   [jkl]   [mno]
//
//      7        8       9
//     [pqrs]  [tuv]   [wxyz]
//               0
//              [ ] 
//

// Examples : 

// Input: GEEKSFORGEEKS
// Output: 4333355777733366677743333557777
// Explanation: For obtaining a number, we need to press a number corresponding to that character for a number of times equal to the position of the character. For example, for character E, press number 3 two times and accordingly.


// Input : HELLO WORLD
// Output : 4433555555666096667775553

//🔴 appraoch:
// #include <bits/stdc++.h>
// using namespace std;
 
// // Function which computes the sequence
// string printSequence(string arr[], string input)
// {
//     string output = "";
 
//     // length of input string
//     int n = input.length();
//     for (int i = 0; i < n; i++) {
//         // Checking for space
//         if (input[i] == ' ')
//             output = output + "0";
 
//         else {
//             // Calculating index for each
//             // character
//             int position = input[i] - 'A';
//             output = output + arr[position];
//         }
//     }
 
//     // Output sequence
//     return output;
// }
 
// // Driver Code
// int main()
// {
//     // storing the sequence in array
//     string str[]
//         = { "2",   "22",  "222", "3",   "33",   "333", "4",
//             "44",  "444", "5",   "55",  "555",  "6",   "66",
//             "666", "7",   "77",  "777", "7777", "8",   "88",
//             "888", "9",   "99",  "999", "9999" };
 
//     string input = "GEEKSFORGEEKS";
//     cout << printSequence(str, input);
//     return 0;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(N)


//                   //❓Question: Count the reversals

// Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression.
// A reversal means changing '{' to '}' or vice-versa.

// Example 1:

// Input:
// S = "}{{}}{{{"
// Output: 3
// Explanation: One way to balance is:
// "{{{}}{}}". There is no balanced sequence
// that can be formed in lesser reversals.
// Example 2:

// Input: 
// S = "{{}{{{}{{}}{{"
// Output: -1
// Explanation: There's no way we can balance
// this sequence of braces.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function countRev() which takes the string S as the input parameter and returns the minimum number of reversals required to balance the bracket sequence. If balancing is not possible, return -1. 

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ |S| ≤ 105

//🔴approach: 
// int countRev (string s)
// {
//     int n = s.length() ;
//     int open = 0;
//     int count = 0;
    
//     if(n%2 != 0){
//         return -1;
//     }
    
//     for(int i=0; i<n; i++){
        
//         if(s[i] == '}') {
            
//           if(open > 0){
//               open-- ;
//           }else{
//              open++ ;
//              count++ ;
//            }
//         }
        
//         if(s[i] == '{'){
//             open++; 
//         }
//     }
    
//     return count+open/2;

// }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                       //❓Question Count Palindromic Subsequence

// Given a string str of length N, you have to find number of palindromic subsequence (need not necessarily be distinct) present in the string str.
// Note: You have to return the answer module 109+7;
 
// Example 1:
// Input: 
// Str = "abcd"
// Output: 
// 4
// Explanation:
// palindromic subsequence are : "a" ,"b", "c" ,"d"
 
// Example 2:
// Input: 
// Str = "aab"
// Output: 
// 4
// Explanation:
// palindromic subsequence are :"a", "a", "b", "aa"
 
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function countPs() which takes a string str as input parameter and returns the number of palindromic subsequence.

// Expected Time Complexity: O(N*N)
// Expected Auxiliary Space: O(N*N)

// Constraints:
// 1<=length of string str <=1000

//🔴approach : DP

//    const int MOD = 1000000007;

// long long int solve(string& str, int i, int j, vector<vector<long long int>>& dp) {
//     if (i > j) {
//         return 0;
//     }

//     if (i == j) {
//         return 1;
//     }

//     if (dp[i][j] != -1) {
//         return dp[i][j];
//     }

//     if (str[i] == str[j]) {
//         dp[i][j] = (solve(str, i + 1, j, dp) + solve(str, i, j - 1, dp) + 1) % MOD;
//     } else {
//         dp[i][j] = (solve(str, i + 1, j, dp) + solve(str, i, j - 1, dp) - solve(str, i + 1, j - 1, dp) + MOD) % MOD;
//     }

//     return dp[i][j];
// }

// long long int countPS(string str) {
//     int n = str.length();
//     vector<vector<long long int>> dp(n, vector<long long int>(n, -1));

//     return solve(str, 0, n - 1, dp);
// }
//🔸time complexity: O(expo)
//🔸space complexity: O(N*N)


//                     //❓question: Count of number of given string in 2D character array

// Given a 2-Dimensional character array and a string, we need to find the given string in 2-dimensional character array, such that individual characters can be present left to right, right to left, top to down or down to top.

// Examples: 

// Input : a ={
//             {D,D,D,G,D,D},
//             {B,B,D,E,B,S},
//             {B,S,K,E,B,K},
//             {D,D,D,D,D,E},
//             {D,D,D,D,D,E},
//             {D,D,D,D,D,G}
//            }
//         str= "GEEKS"
// Output :2

// Input : a = {
//             {B,B,M,B,B,B},
//             {C,B,A,B,B,B},
//             {I,B,G,B,B,B},
//             {G,B,I,B,B,B},
//             {A,B,C,B,B,B},
//             {M,C,I,G,A,M}
//             }
//         str= "MAGIC"

// Output :4

//🔴approach :
// #include <bits/stdc++.h>
// using namespace std;
 
// #define ARRAY_SIZE(a) (sizeof(a) / sizeof(*a))
 
// // utility function to search
// // complete string from any
// // given index of 2d char array
// int internalSearch(string needle, int row, int col, string hay[], int row_max, int col_max, int xx)
// {
//     int found = 0;
 
//     if (row >= 0 && row <= row_max && col >= 0 &&
//         col <= col_max && needle[xx] == hay[row][col])
//     {
//         char match = needle[xx];
//         xx += 1;
 
//         hay[row][col] = 0;
 
//         if (needle[xx] == 0)
//         {
//             found = 1;
//         }
//         else
//         {
//             // through Backtrack searching in every directions
//             found += internalSearch(needle, row, col + 1, hay, row_max, col_max,xx);
//             found += internalSearch(needle, row, col - 1,hay, row_max, col_max,xx);
//             found += internalSearch(needle, row + 1, col,hay, row_max, col_max,xx);
//             found += internalSearch(needle, row - 1, col,hay, row_max, col_max,xx);
//         }
//           //backtracking
//         hay[row][col] = match;
//     }
//     return found;
// }
 
// // Function to search the string in 2d array
// int searchString(string needle, int row, int col, string str[], int row_count, int col_count)
// {
//     int found = 0;
//     int r, c;
 
//     for (r = 0; r < row_count; ++r) {
//         for (c = 0; c < col_count; ++c) {
//             found += internalSearch(needle, r, c, str, row_count - 1, col_count - 1, 0);
//         }
//     }
//     return found;
// }
 
// // Driver code
// int main()
// {
//     string needle = "MAGIC";
//     string input[] = { "BBABBM",
//                        "CBMBBA",
//                        "IBABBG",
//                        "GOZBBI",
//                        "ABBBBC",
//                        "MCIGAM" };
//     string str[ARRAY_SIZE(input)];
//     int i;
//     for (i = 0; i < ARRAY_SIZE(input); ++i)
//     {
//         str[i] = input[i];
//     }
 
//     cout << "count: " << searchString(needle, 0, 0, str,
//                                       ARRAY_SIZE(str),
//                                       str[0].size()) << endl;
//     return 0;
// }
// 🔸Time Complexity: O(n*m)^2, where n is the row size and m is the column size.
// 🔸Auxiliary Space: O(n*m)




//                   //❓Question: Find The string in Grid

// Given a 2D grid of n*m of characters and a word, find all occurrences of given word in grid. 
// A word can be matched in all 8 directions at any point. Word is said to be found in a direction if 
// all characters match in this direction (not in zig-zag form). The 8 directions are,
//  horizontally left, horizontally right, vertically up, vertically down, and 4 diagonal directions.

// Note: The returning list should be lexicographically smallest. If the word can be found in multiple 
// directions starting from the same coordinates, the list should contain the coordinates only once. 

// Example 1:

// Input: 
// grid = {{a,b,c},{d,r,f},{g,h,i}},
// word = "abc"
// Output: 
// {{0,0}}
// Explanation: 
// From (0,0) we can find "abc" in horizontally right direction.
// Example 2:

// Input: 
// grid = {{a,b,a,b},{a,b,e,b},{e,b,e,b}}
// word = "abe"
// Output: 
// {{0,0},{0,2},{1,0}}
// Explanation: 
// From (0,0) we can find "abe" in right-down diagonal. 
// From (0,2) we can find "abe" in left-down diagonal. 
// From (1,0) we can find "abe" in horizontally right direction.
// Your Task:
// You don't need to read or print anything, Your task is to complete the function searchWord() 
// which takes grid and word as input parameters and returns a list containing the positions from where the word
// originates in any direction. If there is no such position then returns an empty list.

// Expected Time Complexity: O(n*m*k) where k is constant
// Expected Space Complexity: O(1)

// Constraints:
// 1 <= n <= m <= 50
// 1 <= |word| <= 15

//🔴Approach :
//     int dx[8] = {0,0,1,-1,1,-1,-1,1};          // direction for row
//     int dy[8] = {1,-1,0,0,1,1,-1,-1};          // direction for col
    
//     bool indirection(vector<vector<char>> &grid,int i,int j,int l,string word){
//         int n = grid.size() , m = grid[0].size(),indx = 0;
//         while(indx < word.length()){
//             if(i >= n || j >= m || i < 0 || j < 0)return false;
//             if(word[indx] != grid[i][j])return false;
//             i += dx[l];
//             j += dy[l];
//             indx++;
//         }
//         return true;
//     }
//     bool check(vector<vector<char>> &grid,int i,int j,string &word){
//         bool ans = false;
        
//         for(int l = 0; l < 8; l++){
//             ans = ans || indirection(grid,i,j,l,word);
//         }
        
//         return ans;
//     }
// 	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
// 	    // Code here
// 	    vector<vector<int>>ans;
// 	    int n = grid.size() , m = grid[0].size();
	    
// 	    for(int i = 0; i < n; i++){
// 	        for(int j = 0; j < m; j++){
// 	            if(grid[i][j] == word[0]){
// 	                if(check(grid,i,j,word)){
// 	                    ans.push_back({i,j});
// 	                }
// 	            }
// 	        }
// 	    }
	    
// 	    return ans;
// 	}
//🔸time complexity: O(N*M)*8*word.length()
//🔸space complexity: O(N*N)



//                 //❓Question: Boyer Moore Algorithm for Pattern Searching

// Pattern searching is an important problem in computer science. When we do search for a string in a notepad/word file, 
// browser, or database, pattern searching algorithms are used to show the search results. 
// A typical problem statement would be- 
// Given a text txt[0..n-1] and a pattern pat[0..m-1] where n is the length of the text and m is 
// the length of the pattern, write a function search(char pat[], char txt[]) that prints all occurrences 
// of pat[] in txt[]. You may assume that n > m. 

// Examples: 

// Input:  txt[] = "THIS IS A TEST TEXT"
//         pat[] = "TEST"
// Output: Pattern found at index 10

// Input:  txt[] =  "AABAACAADAABAABA"
//         pat[] =  "AABA"
// Output: Pattern found at index 0
//         Pattern found at index 9
//         Pattern found at index 12

//🔴approach :

// #include <bits/stdc++.h>
// using namespace std;
// # define NO_OF_CHARS 256
 
// // The preprocessing function for Boyer Moore's bad character heuristic

// void badCharHeuristic( string str, int size, int badchar[NO_OF_CHARS])
// {
//     int i;
 
//     // Initialize all occurrences as -1
//     for (i = 0; i < NO_OF_CHARS; i++)
//         badchar[i] = -1;
 
//     // Fill the actual value of last occurrence of a character
//     for (i = 0; i < size; i++)
//         badchar[(int) str[i]] = i;
// }
 
// /* A pattern searching function that uses Bad Character Heuristic of Boyer Moore Algorithm */
// void search( string txt, string pat)
// {
//     int m = pat.size();
//     int n = txt.size();
 
//     int badchar[NO_OF_CHARS];
 
//     /* Fill the bad character array by calling the preprocessing function badCharHeuristic() for given pattern */
//     badCharHeuristic(pat, m, badchar);
 
//     int s = 0; // s is shift of the pattern with respect to text
//     while(s <= (n - m))
//     {
//         int j = m - 1;
 
//         /* Keep reducing index j of pattern while characters of pattern and text are matching at this shift s */
//         while(j >= 0 && pat[j] == txt[s + j])
//             j--;
 
//         /* If the pattern is present at current shift, then index j will become -1 after the above loop */
//         if (j < 0)
//         {
//             cout << "pattern occurs at shift = " <<  s << endl;
 
//             /* Shift the pattern so that the next
//             character in text aligns with the last
//             occurrence of it in pattern.
//             The condition s+m < n is necessary for
//             the case when pattern occurs at the end
//             of text */
//             s += (s + m < n)? m-badchar[txt[s + m]] : 1;
 
//         }
 
//         else
//             /* Shift the pattern so that the bad character
//             in text aligns with the last occurrence of
//             it in pattern. The max function is used to
//             make sure that we get a positive shift.
//             We may get a negative shift if the last
//             occurrence of bad character in pattern
//             is on the right side of the current
//             character. */
//             s += max(1, j - badchar[txt[s + j]]);
//     }
// }
 
// /* Driver code */
// int main()
// {
//     string txt= "ABAAABCD";
//     string pat = "ABC";
//     search(txt, pat);
//     return 0;
// }
// 🔸Time Complexity : O(n x m)
// 🔸Auxiliary Space: O(1)



//                            //❓Question: Roman Number to Integer

// Given a string in roman no format (s)  your task is to convert it to an integer . 
// Various symbols and their values are given below.
// I 1
// V 5
// X 10
// L 50
// C 100
// D 500
// M 1000

// Example 1:

// Input:
// s = V
// Output: 5
// Example 2:

// Input:
// s = III 
// Output: 3
// Your Task:
// Complete the function romanToDecimal() which takes a string as input parameter and returns the equivalent decimal number. 

// Expected Time Complexity: O(|S|), |S| = length of string S.
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<=roman no range<=3999

//🔴approach :
// int romanToDecimal(string &str) {
        
//         unordered_map<char,int> mp;
//         mp['I'] = 1;
//         mp['V'] = 5;
//         mp['X'] = 10;
//         mp['L'] = 50;
//         mp['C'] = 100;
//         mp['D'] = 500;
//         mp['M'] = 1000;
        
//         int ans = 0;
        
//         for(int i=0; i<str.length(); i++){
//             if(mp[str[i]] < mp[str[i+1]]){
//                 ans += mp[str[i+1]]-mp[str[i]];
//                 i++;
//             }
//             else{
//                 ans += mp[str[i]];
//             }
//         }
//         return ans;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                      //❓Question: Longest Common Prefix

// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.

//🔴approach :
//  string longestCommonPrefix(vector<string>& v) {
        
//         string ans="";
//         sort(v.begin(),v.end());
//         int n=v.size();
        
//         string first=v[0];
//         string last=v[n-1];
        
//         for(int i=0; i<min(first.size(),last.size()); i++){
//             if(first[i]!=last[i]){
//                 return ans;
//             }
//             ans+=first[i];
//         }
//         return ans;   
//     }
//🔸time complexity: O(n log(n))
//🔸time complexity: O(size of longest string)



//                         //❓Question: Min Number of Flips

// Given a binary string, that is it contains only 0s and 1s. 
// We need to make this string a sequence of alternate characters by flipping some of the bits, 
// our goal is to minimize the number of bits to be flipped.

// Example 1:

// Input:
// S = "001"
// Output: 1
// Explanation: 
// We can flip the 0th bit to 1 to have
// 101.


// Example 2:

// Input:
// S = "0001010111" 
// Output: 2
// Explanation: We can flip the 1st and 8th bit 
// bit to have "0101010101"
// 101.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minFlips() which takes the string S as input and returns the minimum number of flips required.

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1<=|S|<=105

//🔴approach :
// int minFlips (string s)
// {
//     int a=0,b=0,n=s.size();
//         for(int i=0;i<n;i++)
//         {
//             s[i]=s[i]-'0';
//             if((i%2)!=s[i]) a++;
//             if((i+1)%2!=s[i]) b++;
//         }
//         return min(a,b);

// }
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                       //❓Question: Second Most Repeated string in a sequence

// Given a sequence of strings, the task is to find out the second most repeated (or frequent) string in the given sequence.
// Note: No two strings are the second most repeated, there will be always a single string.

// Example 1:

// Input:
// N = 6
// arr[] = {aaa, bbb, ccc, bbb, aaa, aaa}
// Output: bbb
// Explanation: "bbb" is the second most 
// occurring string with frequency 2.

// Example 2:

// Input: 
// N = 6
// arr[] = {geek, for, geek, for, geek, aaa}
// Output: for
// Explanation: "for" is the second most
// occurring string with frequency 2.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function secFrequent() which takes the string array arr[] and its size N as inputs and returns the second most frequent string in the array.


// Expected Time Complexity: O(N*max(|Si|).
// Expected Auxiliary Space: O(N*max(|Si|).


// Constraints:
// 1<=N<=103

//🔴approach:
// string secFrequent (string arr[], int n)
//     {
//         //code here.
//         unordered_map<string , int> mp;
//         for( int i = 0 ;i < n ;i++){
//             mp[arr[i]]++;
//         }
        
//         int maxOccr = 0;
//         for( auto it = mp.begin() ; it != mp.end() ; it++){
//             if(it->second > maxOccr){
//                 maxOccr = it->second;
//             }
//         }
        
//         string ans = "";
//         int secFre = INT_MIN;
//         for( auto it : mp){
//             if(it.second < maxOccr && it.second >= secFre){
//                 ans = it.first;
//                 secFre = it.second;
//             }
            
//         }
//         return ans;
//     }
//🔸time complexity: O(N)
//🔸space complexitY: O(1)



//                 //❓ QUestion: Minimum Swaps for bracket Balancing

// You are given a string S of 2N characters consisting of N ‘[‘ brackets and N ‘]’ brackets. A string is considered balanced if it can be represented in the form S2[S1] where S1 and S2 are balanced strings. We can make an unbalanced string balanced by swapping adjacent characters.
// Calculate the minimum number of swaps necessary to make a string balanced.

// Note - Strings S1 and S2 can be empty.

// Example 1:

// Input  : []][][
// Output : 2
// Explanation :
// First swap: Position 3 and 4
// [][]][
// Second swap: Position 5 and 6
// [][][]

// Example 2:

// Input : [[][]]
// Output : 0 
// Explanation:
// String is already balanced.
 
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minimumNumberOfSwaps() which takes the string S and return minimum number of operations required to balance the bracket sequence.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<=|S|<=100000

//🔴approach:
//  int minimumNumberOfSwaps(string S){
//         // code here 
//         int extra = 0;
//         int ans = 0 ;
        
//         for(auto i:S){
//             if( i== '['){
//                 if(extra > 0) {
//                     ans += extra;
//                 }
//                   extra--;
//             }
//             else if( i==']'){
//                 extra++;
//             }
//         }
        
//         return ans;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                          //❓Question: Longest common subsquence

// Given two strings, find the length of longest subsequence present in both of them. Both the strings are in uppercase latin alphabets.

// Example 1:

// Input:
// A = 6, B = 6
// str1 = ABCDGH
// str2 = AEDFHR
// Output: 3
// Explanation: LCS for input strings “ABCDGH” and “AEDFHR” is “ADH” of length 3.
// Example 2:

// Input:
// A = 3, B = 2
// str1 = ABC
// str2 = AC
// Output: 2
// Explanation: LCS of "ABC" and "AC" is "AC" of length 2.
// Your Task:
// Complete the function lcs() which takes the length of two strings respectively and two strings as input parameters and returns the length of the longest subsequence present in both of them.

// Expected Time Complexity : O(|str1|*|str2|)
// Expected Auxiliary Space: O(|str1|*|str2|)

// Constraints:
// 1<=size(str1),size(str2)<=103

///🔴approach: 

// int lcs(int n, int m, string s1, string s2)
//     {
//         vector<vector<int>>dp(n+1,vector<int>(m+1,0));

//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<m+1;j++){

//                 if(s1[i-1]==s2[j-1]){

//                     dp[i][j]=1+dp[i-1][j-1];
//                 }
//                 else{
//                     dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//                 }
//             }
//         }
//         return dp[n][m];
//     }
//🔸time complexity: O(n*m)
//🔸space complexity: O(n*M)



//                         //❓Question: Program to generate all possible IP address from given string

// Given a string containing only digits, restore it by returning all possible valid IP address combinations.
// A valid IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.

// Examples :

// Input: 25525511135
// Output: [“255.255.11.135”, “255.255.111.35”]
// Explanation:
// These are the only valid possible
// IP addresses.

// Input: "25505011535"
// Output: []
// Explanation: 
// We cannot generate a valid IP
// address with this string.
// First, we will place 3 dots in the given string and then try out all the possible combinations for the 3 dots. 
// Corner case for validity:

// For string "25011255255"
// 25.011.255.255 is not valid as 011 is not valid.
// 25.11.255.255 is not valid either as you are not
// allowed to change the string.
// 250.11.255.255 is valid.

//🔴approach :
// #include <bits/stdc++.h>
// using namespace std;
 
// // Function checks whether IP digits are valid or not.
// int is_valid(string ip)
// {
//     // Splitting by "."
//     vector<string> ips;
//     string ex = "";
//     for (int i = 0; i < ip.size(); i++) {
//         if (ip[i] == '.') {
//             ips.push_back(ex);
//             ex = "";
//         }
//         else {
//             ex = ex + ip[i];
//         }
//     }
//     ips.push_back(ex);
 
//     // Checking for the corner cases
//     // cout << ip << endl;
//     for (int i = 0; i < ips.size(); i++) {
//         // cout << ips[i] <<endl;
//         if (ips[i].length() > 3 || stoi(ips[i]) < 0 || stoi(ips[i]) > 255)
//             return 0;
 
//         if (ips[i].length() > 1 && stoi(ips[i]) == 0)
//             return 0;
 
//         if (ips[i].length() > 1 && stoi(ips[i]) != 0 && ips[i][0] == '0')
//             return 0;
//     }
//     return 1;
// }
 
// // Function converts string to IP address
// void convert(string ip)
// {
//     int l = ip.length();
 
//     // Check for string size
//     if (l > 12 || l < 4) {
//         cout << "Not Valid IP Address";
//     }
 
//     string check = ip;
//     vector<string> ans;
 
//     // Generating different combinations.
//     for (int i = 1; i < l - 2; i++) {
//         for (int j = i + 1; j < l - 1; j++) {
//             for (int k = j + 1; k < l; k++) {
//                 check = check.substr(0, k) + "." + check.substr(k);
//                 check = check.substr(0, j) + "." + check.substr(j);
//                 check = check.substr(0, i) + "." + check.substr(i);
 
//           // cout<< check <<endl; 
//           // Check for the validity of combination
//                 if (is_valid(check)) {
//                     ans.push_back(check);
//                     std::cout << check << '\n';
//                 }
//                 check = ip;
//             }
//         }
//     }
// }
 
// // Driver code
// int main()
// {
//     string A = "25525511135";
//     string B = "25505011535";
 
//     convert(A);
//     convert(B);
 
//     return 0;
// }




//                  //❓Question: Generate IP address

// Given a string S containing only digits, Your task is to complete the function genIp() which returns a vector containing all possible combinations of valid IPv4 IP addresses and takes only a string S as its only argument.
// Note: Order doesn't matter. A valid IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.


// For string 11211 the IP address possible are 
// 1.1.2.11
// 1.1.21.1
// 1.12.1.1
// 11.2.1.1

// Example 1:

// Input:
// S = 1111
// Output: 1.1.1.1
// Example 2:

// Input:
// S = 55
// Output: -1

// Your Task:

// Your task is to complete the function genIp() which returns a vector containing all possible combinations of valid IPv4 IP addresses or -1 if no such IP address could be generated through the input string S, the only argument to the function.

// Expected Time Complexity: O(N * N * N)
// Expected Auxiliary Space: O(N * N * N * N)

// Constraints:
// 1<=N<=16
// here, N = length of S.
// S only contains digits(i.e. 0-9)


//🔴approach:
//  bool isValid(string s){
//     int n = s.length();
//     if(n==0 or n>3 or (s[0] == '0' and n > 1 ) or stoi(s) > 255) return false;
//     else return true;
//   }

//     vector<string> genIp(string &s) {
//         // Your code here
//         vector<string > ans;
//         int n = s.length();
//         if(n>12) return ans;
//         for(int i = 1 ; i < n-2 ; i++){
//             for(int j = i+1 ; j < n-1; j++){
//                 for(int k = j+1 ; k < n ; k++){
//                     string first = s.substr(0 , i);
//                     string second = s.substr(i, j-i);
//                     string third = s.substr(j , k-j);
//                     string fourth = s.substr(k , n-k);
//                     if(isValid(first) and isValid(second) and isValid(third) and isValid(fourth)) {
//                         ans.push_back(first+"." + second+"."+third+"."+fourth);
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
//🔸time complexity: O(N*N*N)
//🔸space complexity: O(N*N*N*N)



//                      //❓Question: Smallest Distinct Window

// Given a string 's'. The task is to find the smallest window length that contains all the characters of the given string at least one time.
// For eg. A = aabcbcdbca, then the result would be 4 as of the smallest window will be dbca.

 
// Example 1:
// Input : "AABBBCBBAC"
// Output : 3
// Explanation : Sub-string -> "BAC"

// Example 2:
// Input : "aaab"
// Output : 2
// Explanation : Sub-string -> "ab"
 
// Example 3:
// Input : "GEEKSGEEKSFOR"
// Output : 8
// Explanation : Sub-string -> "GEEKSFOR"
 
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function findSubString() which takes the string  S as input and returns the length of the smallest such window of the string.

// Expected Time Complexity: O(256.N)
// Expected Auxiliary Space: O(256)

// Constraints:
// 1 ≤ |S| ≤ 105
// String may contain both type of English Alphabets.

//🔴approach:
// int findSubString(string str)
//     {
//         unordered_map<char,int> visited;
        
//         for(int i=0;i<str.length();i++){
//             visited[str[i]]++;
//         }
        
//         unordered_map<char,int> mp;
//         int start=0;
//         int end=0;
//         int ans=str.length();
        
//         for(int i=0;i<str.length();i++){
            
//             mp[str[i]]++;
            
//             if(mp.size()<visited.size())
//                 continue;
                
//             while(mp[str[start]]>1){
//                 mp[str[start]]--;
//                 start++;
//             }
            
//             ans=min(ans,i-start+1);
//         }
//         return ans; 
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                          //❓Question: Rearrange characters

// Given a string S with repeated characters. The task is to rearrange characters in a string such that no two adjacent characters are the same.
// Note: The string has only lowercase English alphabets and it can have multiple solutions. Return any one of them.

// Example 1:
// Input : str = "geeksforgeeks"
// Output: 1
// Explanation: All the repeated characters of the
// given string can be rearranged so that no 
// adjacent characters in the string is equal.
// Any correct rearrangement will show a output
// of 1.

// Example 2:
// Input : str = "bbbbb"
// Output: 0
// Explanation: Repeated characters in the string
// cannot be rearranged such that there should not
// be any adjacent repeated character.

// Your task :
// You don't have to read input or print anything. Your task is to complete the functionrearrangeString() which takes the string as input and returns the modified string. If the string cannot be modified return "-1".
// Note:The generatedoutput is 1 if the string is successfully rearranged and is 0 if rearranging is not possible.
 
// Expected Time Complexity : O(NlogN), N = length of String
// Expected Auxiliary Space : O(number of english alphabets)
 
// Constraints :
// 1 <= length of string <= 104

//🔴appproach :
// string rearrangeString(string str)
//     {
//         int n = str.size();
//         unordered_map<char, int> um;
        
//         for(auto it:str){
//             um[it]++;
//         }
        
//         for(auto it:um){
//             if(it.second > (n+1)/2) return "-1";
//         }
        
//         string ans(n, 'i');
//         int i = 0, j = 1;
//         vector<pair<int, char>> v;
        
//         for(auto it:um){
//             v.push_back({it.second, it.first});
//         }
        
//         sort(v.rbegin(), v.rend());
        
//         for(auto it:v){
            
//             int times = it.first;
//             char ch = it.second;
            
//             while(times)
//             {
//                 if(i < str.size()){
//                     ans[i] = ch;
//                     i += 2;
//                 }
//                 else if(j < str.size()){
//                     ans[j] = ch;
//                     j += 2;
//                 }
//                 times--;
//             }
//         }
//         return ans;
//     }
//🔸Time Complexity : O(NlogN), N = length of String
//🔸Auxiliary Space : O(number of english alphabets)



//                     //❓Question: Minimum Characters to be added to make string a palindrome

// Given string str of length N. The task is to find the minimum characters to be added at the front to make string palindrome.
// Note: A palindrome is a word which reads the same backward as forward. Example: "madam".

// Example 1:

// Input:
// S = "abc"
// Output: 2
// Explanation: 
// Add 'b' and 'c' at front of above string to make it
// palindrome : "cbabc"
// Example 2:

// Input:
// S = "aacecaaa"
// Output: 1
// Explanation: Add 'a' at front of above string
// to make it palindrome : "aaacecaaa"
// Your Task: 
// You don't need to read input or print anything. Your task is to complete the function minChar() which takes a string S and returns an integer as output.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= S.length <= 106

//🔴approach:  
// int minChar(string str){
        
//         string rev = str;
//         reverse(rev.begin(), rev.end());
        
//         string st = str+"$"+rev;
        
//         int LPS[st.size()+1]={0};
//         char s[st.size()+1];
        
//         for(int i=0; i<st.size(); i++){
//             s[i+1]=st[i];
//         }
        
//         int first=0, second=2;
        
//         while(second<=st.size()){
//             if(s[first+1] == s[second])
//             {
//                 LPS[second]=first+1;
//                 first++;
//                 second++;
//             }
//             else
//             {
//                 if(first == 0){
//                     second++;
//                 }
//                 else
//                 {
//                     first = LPS[first];
//                 }
//             }
//         }
        
//         return str.size()-LPS[st.size()];
//     }
//🔸time complexity; O(N logN + 2N)
//🔸space complexity: O(4N)



//                         //❓Question: Print Anagrams together

// Given an array of strings, return all groups of strings that are anagrams. 
// The groups must be created in order of their appearance in the original array. 
// Look at the sample case for clarification.
// Note: The final output will be in lexicographic order.


// Example 1:
// Input:
// N = 5
// words[] = {act,god,cat,dog,tac}
// Output:
// act cat tac 
// god dog
// Explanation:
// There are 2 groups of
// anagrams "god", "dog" make group 1.
// "act", "cat", "tac" make group 2.

// Example 2:
// Input:
// N = 3
// words[] = {no,on,is}
// Output: 
// is
// no on
// Explanation:
// There are 2 groups of
// anagrams "is" makes group 1.
// "no", "on" make group 2.

// Your Task:
// The task is to complete the function Anagrams() that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.

// Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
// Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.

// Constraints:
// 1<=N<=100
// 1<=|S|<=10

//🔴approach:
//  vector<vector<string> > Anagrams(vector<string>& arr) {
        
//         map<string, vector<string>> mp;
//         for(int i=0; i<arr.size(); i++){
//             string temp = arr[i] ;
//             sort(temp.begin(), temp.end()) ;
//             mp[temp].push_back(arr[i]) ;
//         }
        
//         vector<vector<string>> ans(mp.size());
//         int index = 0 ;
//         for(auto x:mp) {
//             auto v = x.second;
            
//             for(int i=0; i<v.size(); i++){
//                 ans[index].push_back(v[i]) ;
//             }
//             index++ ;
//         }
        
//         return ans ;
//     }
//🔸time complexity: O(N*MLog(m))
//🔸space complexity: O(N+M)


//                 //❓Question: Smallest window in a string  containing all the characters of another string

// Given two strings S and P. Find the smallest window in the string S consisting of all the characters(including duplicates) of the string P.  Return "-1" in case there is no such window present. In case there are multiple such windows of same length, return the one with the least starting index.
// Note : All characters are in Lowercase alphabets. 

// Example 1:
// Input:
// S = "timetopractice"
// P = "toc"
// Output: 
// toprac
// Explanation: "toprac" is the smallest
// substring in which "toc" can be found.

// Example 2:
// Input:
// S = "zoomlazapzo"
// P = "oza"
// Output: 
// apzo
// Explanation: "apzo" is the smallest 
// substring in which "oza" can be found.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function smallestWindow() which takes two string S and P as input paramters and returns the smallest window in string S having all the characters of the string P. In case there are multiple such windows of same length, return the one with the least starting index. 

// Expected Time Complexity: O(|S|)
// Expected Auxiliary Space: O(n) n = len(p) O

// Constraints: 
// 1 ≤ |S|, |P| ≤ 105


//🔴approach :
// string smallestWindow (string s, string p)
//     {
//         // Your code here
//         int start_idx=0,j=0,len=INT_MAX;
//         vector<int>v(26,0);
       
//         for(int i=0;i<p.size();i++){
//             v[p[i]-'a']++;
//         }
        
//         int need=0;
//         for(int i=0;i<26;i++){
//             if(v[i]!=0)
//             need++;
//         }
        
//         int have=0;
//         vector<int>cur(26,0);
       
//         for(int i=0;i<s.size();i++){
//             cur[s[i]-'a']++;
            
//             if(v[s[i]-'a']==cur[s[i]-'a'])
//             have++;
            
//             while(have==need){
//                 if(len > (i-j+1)){
//                     len=i-j+1;
//                     start_idx=j;
//                 }
//                 cur[s[j]-'a']--;
//                 if(v[s[j]-'a']>cur[s[j]-'a'])
//                 have--;
//                 j++;
//             }
//         }
//         if(len==INT_MAX)return "-1";
//         string ans=s.substr(start_idx,len);
//         return ans;
//     }
//🔸time complexity: O(S+P)
//🔸space complexity: O(1)



//                    //❓Question: Remove consecutive characters

// Given a string S. For each index i(1<=i<=N-1), erase it if s[i] is equal to s[i-1] in the string.

// Example 1:
// Input:
// S = aabb
// Output:  ab 
// Explanation: 'a' at 2nd position is
// appearing 2nd time consecutively.
// Similiar explanation for b at
// 4th position.

// Example 2:
// Input:
// S = aabaa
// Output:  aba
// Explanation: 'a' at 2nd position is
// appearing 2nd time consecutively.
// 'a' at fifth position is appearing
// 2nd time consecutively.
 
// Your Task:
// You dont need to read input or print anything. Complete the function removeConsecutiveCharacter() which accepts a string as input parameter and returns modified string.
 
// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(|S|).
 
// Constraints:
// 1<=|S|<=105
// All characters are lowercase alphabets.

//🔴approach :
//  string removeConsecutiveCharacter(string S)
//     {
//         string temp;
//         temp.push_back(S[0]);
        
//       for(int i=1;i<S.size();i++)
//        {
//           if(S[i-1]!=S[i]){
//               temp.push_back(S[i]);
//             }
//        }
//        return temp;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                  //❓Question: Wildcard String matching

// Given two strings wild and pattern where wild string may contain wild card characters and pattern string is a normal string. Determine if the two strings match. The following are the allowed wild card characters in first string :-

// * --> This character in string wild can be replaced by any sequence of characters, it can also be replaced by an empty string.
// ? --> This character in string wild can be replaced by any one character.
// Example 1:

// Input: wild = ge*ks
//        pattern = geeks
// Output: Yes
// Explanation: Replace the '*' in wild string 
// with 'e' to obtain pattern "geeks".
// Example 2:

// Input: wild = ge?ks*
//        pattern = geeksforgeeks
// Output: Yes
// Explanation: Replace '?' and '*' in wild string with
// 'e' and 'forgeeks' respectively to obtain pattern 
// "geeksforgeeks"

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function match() which takes the string wild and pattern as input parameters and returns true if the string wild can be made equal to the string pattern, otherwise, returns false.

// Expected Time Complexity: O(length of wild string * length of pattern string)
// Expected Auxiliary Space: O(length of wild string * length of pattern string)

// Constraints:
// 1<=length of the two string<=10^3 

//🔴approach:
//  bool f(int i, int j, string wild, string pattern) {
          
//         if(j==pattern.size()) {
            
//             while(i<wild.size()) {
//                 if(wild[i] != '*')  return false;
//                 i++;
//             }
//             return true;
//         }
        
        
//         bool fl=false;

//         if(wild[i]==pattern[j]||wild[i]=='?') {
//             return f(i+1,j+1,wild,pattern);
//         }
//         else if(wild[i]=='*') {
//             for(int k=j;k<=pattern.size();k++) {
//                 fl=  fl || f(i+1,k,wild,pattern);
//             }
//             return fl;
//         }
//         else if(wild[i]!=wild[j]) {
//             return false;
//         }
//     }
    
//     bool match(string wild, string pattern)
//     {
//         int n=wild.size();
//         int m=pattern.size();
        
//         return f(0,0,wild,pattern);  
//     }
//🔸time complexity: O(N x (*+?))
//🔸space compplexity: O(1)



//                  //❓Question:Function to find Number of customers who could not get a computer

// Write a function “runCustomerSimulation” that takes following two inputs 

// An integer ‘n’: total number of computers in a cafe and a string: 
// A sequence of uppercase letters ‘seq’: Letters in the sequence occur in pairs. The first occurrence indicates the arrival of a customer; the second indicates the departure of that same customer. 
// A customer will be serviced if there is an unoccupied computer. No letter will occur more than two times. 
// Customers who leave without using a computer always depart before customers who are currently using the computers. There are at most 20 computers per cafe.

// For each set of input the function should output a number telling how many customers, if any walked away without using a computer. Return 0 if all the customers were able to use a computer.
// runCustomerSimulation (2, “ABBAJJKZKZ”) should return 0
// runCustomerSimulation (3, “GACCBDDBAGEE”) should return 1 as ‘D’ was not able to get any computer
// runCustomerSimulation (3, “GACCBGDDBAEE”) should return 0
// runCustomerSimulation (1, “ABCBCA”) should return 2 as ‘B’ and ‘C’ were not able to get any computer.
// runCustomerSimulation(1, “ABCBCADEED”) should return 3 as ‘B’, ‘C’ and ‘E’ were not able to get any computer.


//🔴approach :
// #include<iostream>
// #include<cstring>
// using namespace std;
 
// #define MAX_CHAR 26
 
// // n is number of computers in cafe.
// // 'seq' is given sequence of customer entry, exit events
// int runCustomerSimulation(int n, const char *seq)
// {
//     // seen[i] = 0, indicates that customer 'i' is not in cafe
//     // seen[1] = 1, indicates that customer 'i' is in cafe but
//     //             computer is not assigned yet.
//     // seen[2] = 2, indicates that customer 'i' is in cafe and
//     //             has occupied a computer.
//     char seen[MAX_CHAR] = {0};
 
//     // Initialize result which is number of customers who could
//     // not get any computer.
//     int res = 0;
 
//     int occupied = 0; // To keep track of occupied computers
 
//     // Traverse the input sequence
//     for (int i=0; seq[i]; i++)
//     {
//         // Find index of current character in seen[0...25]
//         int ind = seq[i] - 'A';
 
//         // If First occurrence of 'seq[i]'
//         if (seen[ind] == 0)
//         {
//             // set the current character as seen
//             seen[ind] = 1;
 
//             // If number of occupied computers is less than
//             // n, then assign a computer to new customer
//             if (occupied < n)
//             {
//                 occupied++;
 
//                 // Set the current character as occupying a computer
//                 seen[ind] = 2;
//             }
 
//             // Else this customer cannot get a computer,
//             // increment result
//             else
//                 res++;
//         }
 
//         // If this is second occurrence of 'seq[i]'
//         else
//         {
//         // Decrement occupied only if this customer
//         // was using a computer
//         if (seen[ind] == 2)
//             occupied--;
//         seen[ind] = 0;
//         }
//     }
//     return res;
// }
 
// // Driver program
// int main()
// {
//     cout << runCustomerSimulation(2, "ABBAJJKZKZ") << endl;
//     cout << runCustomerSimulation(3, "GACCBDDBAGEE") << endl;
//     cout << runCustomerSimulation(3, "GACCBGDDBAEE") << endl;
//     cout << runCustomerSimulation(1, "ABCBCA") << endl;
//     cout << runCustomerSimulation(1, "ABCBCADEED") << endl;
//     return 0;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(max_char)


//                  //❓Question: Transform String

// Given two strings A and B. Find the minimum number of steps required to transform string A into string B. The only allowed operation for the transformation is selecting a character from string A and inserting it in the beginning of string A.

// Example 1:
// Input:
// A = "abd"
// B = "bad"
// Output: 1
// Explanation: The conversion can take place in
// 1 operation: Pick 'b' and place it at the front.

// Example 2:
// Input:
// A = "GeeksForGeeks"
// B = "ForGeeksGeeks"
// Output: 3
// Explanation: The conversion can take
// place in 3 operations:
// Pick 'r' and place it at the front.
// A = "rGeeksFoGeeks"
// Pick 'o' and place it at the front.
// A = "orGeeksFGeeks"
// Pick 'F' and place it at the front.
// A = "ForGeeksGeeks"
// Your Task: 
// You dont need to read input or print anything. Complete the function transform() which takes two strings A and B as input parameters and returns the minimum number of steps required to transform A into B. If transformation is not possible return -1.

// Expected Time Complexity: O(N) where N is max(length of A, length of B) 
// Expected Auxiliary Space: O(1)  

// Constraints:
// 1<= A.length(), B.length() <= 104


//🔴approach: 
// int transform (string A, string B)
//     {
//         int n = A.length() ;
//         int m = B.length() ;
//         if( n != m ) return -1;
         
//         string temp = A;
//         string temp1 = B;

//         sort(temp.begin(), temp.end()) ;
//         sort(temp1.begin(), temp1.end());

//          if(temp != temp1) return -1;
        
//         int i = n-1, j = m-1, count = 0;
        
//         while(i >=0 && j >=0) {
//             if(A[i] == B[j]) {
//                 i--;
//                 j--;
//             }
//             else{
//                 count++;
//                 i--;
//             }
//         }
//         return count;
//     }
//🔸time complexity: O(N+m log n)
//🔸space complexity: O(N + M)


//🔴approach: Optmised
// int transform (string A, string B)
//     {
//           //code here.
//         unordered_map<char,int>unm;
//         for(int i=0;i<A.length();i++){
//             unm[A[i]]++;
//         }
//         for(int i=0;i<B.length();i++){
//             unm[B[i]]--;
//         }
//         for(auto i:unm){
//             if(i.second!=0)return -1;
//         }
//         int i=A.length()-1;
//         int j=B.length()-1;
//         int count=0;
//         while(i>=0 && j>=0){
//             if(A[i]==B[j]){
//                 i--;
//                 j--;
//             }
//             else{
//                 count++;
//                 i--;
//             }
//         }
//         return count;
//     }
//🔸time complexity: O(N)
//🔸space compleity: O(N+M)


//               //❓Question: Isomorphic string

// Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
// Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.
// Note: All occurrences of every character in str1 should map to the same character in str2

// Example 1:
// Input:
// str1 = aab
// str2 = xxy
// Output: 1
// Explanation: There are two different
// charactersin aab and xxy, i.e a and b
// with frequency 2and 1 respectively.

// Example 2:
// Input:
// str1 = aab
// str2 = xyz
// Output: 0
// Explanation: There are two different
// charactersin aab but there are three
// different charactersin xyz. So there
// won't be one to one mapping between
// str1 and str2.
// Your Task:
// You don't need to read input or print anything.Your task is to complete the function areIsomorphic() which takes the string str1 and string str2 as input parameter and  check if two strings are isomorphic. The function returns true if strings are isomorphic else it returns false.

// Expected Time Complexity: O(|str1|+|str2|).
// Expected Auxiliary Space: O(Number of different characters).
// Note: |s| represents the length of string s.

// Constraints:
// 1 <= |str1|, |str2| <= 2*104


//🔴approach:
// bool areIsomorphic(string str1, string str2)
//     {
        
//         int n = str1.length() ;
//         int m = str2.length() ;
//         if(n != m) return false;
        
//         int m1[256] = {0} ;
//         int m2[256] = {0} ;
        
//         for(int i=0; i<n; i++){
//             if( !m1[str1[i]] && !m2[str2[i]]) {
//                 m1[str1[i]] = str2[i] ;
//                 m2[str2[i]] = str1[i] ;
//             }
//             else if(m1[str1[i]] != str2[i]){
//                 return false;
//             }
//         }
        
//         return true ;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(no of different character)


//                     //❓QUestion: Recursively print all sentences that can be formed from list of word lists

// Given a list of word lists How to print all sentences possible taking one word from a list at a time via recursion? 

// Example: 

// Input: {{"you", "we"},
//         {"have", "are"},
//         {"sleep", "eat", "drink"}}

// Output:
//   you have sleep
//   you have eat
//   you have drink
//   you are sleep
//   you are eat
//   you are drink
//   we have sleep
//   we have eat
//   we have drink
//   we are sleep
//   we are eat
//   we are drink 

//🔴approach:
// #include <iostream>
// #include <string>
 
// #define R 3
// #define C 3

// using namespace std;
 
// // A recursive function to print all possible sentences that can be formed from a list of word list
// void printUtil(string arr[R][C], int m, int n, string output[R])
// {
//     // Add current word to output array
//     output[m] = arr[m][n];
 
//     // If this is last word of current output sentence, then print the output sentence
//     if (m==R-1)
//     {
//         for (int i=0; i<R; i++)
//         cout << output[i] << " ";
//         cout << endl;
//         return;
//     }
 
//     // Recur for next row
//     for (int i=0; i<C; i++)
//        if (arr[m+1][i] != "")
//           printUtil(arr, m+1, i, output);
// }
 
// // A wrapper over printUtil()
// void print(string arr[R][C])
// {
//    // Create an array to store sentence
//    string output[R];
 
//    // Consider all words for first row as starting points and print all sentences
//    for (int i=0; i<C; i++) {
//      if (arr[0][i] != "") {
//         printUtil(arr, 0, i, output);
//      }
//    }
// }
 
// // Driver program to test above functions
// int main()
// {
//    string arr[R][C]  = {{"you", "we"},
//                         {"have", "are"},
//                         {"sleep", "eat", "drink"}};
 
//    print(arr);
 
//  return 0 ;
// }
//🔸time complexity: O(n^m)
//🔸space complexity: O(m)




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


