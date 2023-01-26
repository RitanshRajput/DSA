                    ////🔴🔴 BINARY SEARCH :

//🔸 Binary search is only applicable for Monotonic function.
//🔸 Monotonic function :=> value is either in increasing or either decreasing in order
// Ex: (monotonic elements)
// [2, 5, 8, 15, 40]  increasing ,    [100, 34, 12, 8, 6, 2, 1] decreasing

//🔘 Implementation :
//❓Suppose we have a array in which we want to find a element which is equal to key(the no. we are looking for)
//🔸 1> At first we will find the middle index of that array.  // How to find middle index : midIndex = (startingIndex + EndIndex) / 2  
//🔸 2> Now we compare the key with the middle number. if found then its good if not then we decide which side to check // either left of middleIndex of right of middleIndex
//🔸 3> To decide which side to search for we will compare the key with middleElement either it is greater than keyy or less than key // if greater then right side =>  , if less than key then search left side <=
//🔸 4> Now whichever side we choose we will only search on that side (either left or right we ignore other) 
//🔸 5> Then we again repeat the 1st process in which we first find the middle index and then compare to it
//🔸 6> and repeat.


//❓ Question :
//                                Index =  0  1  2   3   4
//🔸 Find the key=13 in the given array = [1, 3, 5, 13, 28] element

//🔸=> find middle index = 2 
//🔸=> compare key with the middle element : key == 5   (No not equal to 13)
//🔸=> check whether the key is greater or less than key : 13 > 5 (key is greater than 5)
//🔸=> if greater we move onto right side indexes =>  [13, 28]  (right side of middle index)
//🔸=> find middle index (mid = (3 + 4) / 2) => 3
//🔸=> compare key is equal to mid element :   key == 13  (yes Found  13 == 13)



//❓ Question :s
//🔘Implementation through code of Binary search:

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key) {
//     int start =0 ;
//     int end = size -1 ;
//     // int mid = (start + end)/2 ;         // Logically this is right but in case of C.P  it might exceed the range of integer which 2^31 - 1
//     int mid = start + (end - start)/ 2;    // therefore we created this formula

//    while(start<=end){
//      if(arr[mid] == key){
//         return mid ;
//      }

//      if(key > arr[mid]){                   //Go to right side (start = middleIndex + 1 ) ➡️
//         start = mid + 1;
//      }
//      else{
//         end = mid - 1 ;                   //Go to left side (end = middleIndex - 1)    ⬅️
//      }

//     //  mid = (start+end) / 2;               // again find middle index, might go wrong in case of CP exceed the integer range 2^31 - 1
//      mid = start + (end - start)/2;       // this will properly work even in worst case

//    }
//    return -1 ;                            //If not found
// }

// int main(){
//   int even[6] = {2, 4, 6, 8, 12, 14}  ;
//    int odd[5] = {3, 5, 7, 9, 11} ;

//   int index = binarySearch(even, 6, 12); 
//   cout<<" Index of 12 is "<< index <<endl ;

//   int Oddindex = binarySearch(odd, 5, 20); 
//   cout<<" Index of 20 is "<< Oddindex <<endl ;

//     return 0;
// }


//🔴 Time Complexity of above Binary Search is O(log n) :

//    [ | | | | | | | | ]  => arrray of size N  

//    [ | | | | |]        => First Iteration  N / 2    => also equal to N / 2^0

//    [ | | |]            => First Iteration  N / 4    => also equal to N / 2^1

//    [ | |]              => First Iteration  N / 8    => also equal to N / 2^2
//    . 
//    .
//    .
//    []                  => Nth iteration    N / 2^k


//  =>    N / 2^k  =  1
//  =>    N = 2^K 
//  =>    k = log N               // This is how Binary search Time complexity is O(log N)  worst case (upper bound)


//🔘Pair <int , int> =  Pair is used to combine together two values that may be of different data types.
//                    =  The C++ pair allows you to store two disparate items as a single entity
//🔸Ex : 
//  how to access pair , By using . dot and keyword first , second (.first = tells to store in first value,  .second = tells to store in second value )
//  pair<int, int> result ;              //declaration of pair
//  answerOne  = 2,    answerTwo = 4 ;   //two different values
//  result.first = answerOne ;             // assigning value in pair         
//  result.second = answerTwo ;           // assigning value in pair 

// output :  2 4


//❓ Question :
// first and last position of an element in sorted array (using binary search) :
//Ex:
// input : {0,1,2,2,2}
//key = 2 
//output : 2, 4        (first occurence 2, last occurence 4) 

//input: {0,1,2,3,4,4}
//key = 5
//output : -1, -1,   (first occurence not found so -1,  same for last occurence not found so -1)

//input : {o,1,1,2,3,4,5}
//key = 3
//output : 4, 4         {first occurence 4, last occurence 4}



// #include <iostream>
// using namespace std;

// int firstOccurence(int arr[], int size, int key) {          // first occurence left side from mid ⬅️
//          int start = 0 ;
//          int end = size - 1 ;
//          int mid = start + (end - start)/2 ;
//          int ans = -1 ;
//          while(start <= end){

//             if(arr[mid] == key ){                    
//                   ans = mid ;
//                  end = mid - 1 ;
//             }
//             else if( key > arr[mid]){
//                  start = mid + 1 ;
//             }
//             else if( key < arr[mid] ){
//                  end =  mid - 1;
//             }
//             mid = start + (end - start)/2 ;
//          }
//         return ans ;
// }

// int lastOccurence(int arr[], int size, int key){     // last occurence right side from mid ➡️ 
//           int start = 0;
//           int end = size - 1;
//           int mid = start + (end - start)/2 ;
//           int ans = -1 ;

//           while(start <= end){

//             if( arr[mid] == key ){
//                ans = mid ;
//                start = mid + 1;
//             }
//             else if(key > arr[mid]){
//                start = mid + 1 ;
//             }
//             else if(key < arr[mid]){
//                end = mid - 1;
//             }
//             mid = start + (end - start)/2 ;
//           }
//           return ans ;
// }

// int main(){

//  pair<int, int>  result;                    //testing pair method
// int arr[8] = {0, 1, 2, 3, 4, 4, 4, 5} ;
// int key = 4 ;
// cout<<" first occurence of "<<key<<" is at index " <<firstOccurence(arr, 8, key) <<endl ;
// cout<<" last occurence of "<<key<<" is at index "<<lastOccurence(arr, 8, key) <<endl ;

// result.first = firstOccurence(arr, 8, key) ;           //testing pair method
// result.second = lastOccurence(arr, 8, key) ;           //testing pair method

// cout<<" Pair first value "<<result.first <<endl ;      //testing pair method
// cout<<" Pair second value "<<result.second <<endl;     //testing pair method

//    return 0;
// }


//❓ Question :
// Find total number of occurence in a sorted array (using binary search)
//ex:
// input : {1,2,3,4,4,4,5,6} :
// key = 4 ;
// output : 3       // 3 times number 4 occured in the array

// #include<iostream>
// using namespace std ;

// int leftSide(int arr[], int size, int key){
//          int start = 0;
//          int end = size -1 ;
//          int mid = start + (end - start)/2 ;
//          int ans = 0 ;

//          while( start <= end) {
//             if(arr[mid] == key){
//                ans = mid ;
//                end = mid - 1;
//             }
//             else if(key > arr[mid]){
//                start = mid + 1; 
//             }
//             else if(key < arr[mid]){
//                end = mid - 1;
//             }
//             mid  = start + (end - start)/2 ;
//          }
//          return ans ;
// }

// int rightSide(int arr[], int size, int key){
//             int start = 0;
//             int end = size -1 ;
//             int mid = start + (end - start)/2 ;
//             int ans  = -1 ;

//             while(start <= end){
//                 if(arr[mid] == key ){
//                   ans = mid ;
//                   start = mid + 1 ;
//                 }
//                 else if(key > arr[mid]){
//                   start = mid + 1;
//                 }
//                 else if(key < arr[mid]){
//                   end = mid - 1;
//                 }
//                 mid = start + (end - start)/2 ;
//             }
//             return ans ;
// }

// int main(){
 
//  int arr[7] = {1,3,3,3,4,4} ;
//  int key = 3; 

//  int left = leftSide(arr, 6, key) ;
//  int right = rightSide(arr, 6, key) ;
//  int total = (right - left) + 1;

//  cout<<" Total number of occurence of "<<key<< " in the array is :"<<total<<endl ;

//    return 0;
// }



//❓ Question :
// Peak index in a moutain array (using binary search):
// moutain array means numbers form a moutain in graph representation :
// Ex :
// input = {0, 1, 2, 0}
// graph :
//       |     
//     2 |  /\            0,1,2
//     1 | /  \           0,1
//     0 |/    \          0             {0,1,2,0}  moutain array
//       |____________
//       0   1   2

// So we need to find peak element (maximum element) in a moutain arrray.
// mountain array is still sorted if we see carefully {0,1, 2, 0}
//  increasing = {0,1,2}
//  decreasing = {2, 0}


//🔸 Approach:
//                   if(arr[i-1] < arr[i]  > arr[i+1])
//                                   /\
//                                  /  \ 
//                                 /    \
//                                /      \
//   if(arr[i] < arr[i - 1])     /        \    if( arr[i] > arr[i + 1])
//    


// #include<iostream>
// using namespace std;

// int peak(int arr[], int size){
//    int start = 0;
//    int end = size -1 ;
//    int mid = start + (end - start)/2 ;

//    while(start < end){
//       if(arr[mid] < arr[mid + 1]){
//          start = mid + 1;
//       }
//       else {
//          end = mid ;
//       }
//       mid = start + (end - start)/ 2;
//    }
//    return start ;
// }

// int main() {

// int arr[4] = {1, 2, 4, 1} ;
// int answer = peak(arr, 4) ;

// cout<<" peak element in given array is at index  : "<<answer<<endl ;

//    return 0 ;
// }


//❓ Question :
// find Pivot element in a given array : (without using binary search)
// pivot = means the sum of left side element is equal to sum of right side element of that particular element.
//ex:
// input : {1,2,2,8,4,1} ;
// sum of left element  = 1,2,2 = 5
// sum of right element = 4,1   = 5
// left and right element of 8  = 8 is pivot .
// output: 8 

// #include<iostream>
// using namespace std;

// int pivotelement(int a[], int n)   
// {
//     int s1 = 0;
//     int s2 = 0;

//     for(int i = 0; i < n-1; i++)
//     {
//         if(i==0 || i==n-1) 
//             continue;

//         s1=0, s2=0; 

//         for(int k = 0; k<i; k++) 
//         {
//             s1 += a[k];
//         }
//         for(int j = i+1; j<n; j++) 
//         {
//             s2 +=a[j];
//         }
//         if(s1 == s2)
//         {
//             return i;              
//         }

//     }
//     return -1;         //return -1 if pivot not found
// }

// int main(){
// int arr[6] = {1,2,2,7,2,3} ;
 
// cout<<" Pivot element is at index :"<<pivotelement(arr , 6)<<endl ;

//    return 0;
// }



//❓ Question :
//2> Find Pivot element in moutain or rotated sorted array : (using binary search O(log n) ) ;
//  Here Pivot means minimum element in array :
// Ex:
// input : {7,9, 1, 2, 3} ;
// Graph representation :
//             |          .(9)
//             |          
//             |    .(7)
//             |                      .(3)
//             |                 .(2)
//             |            .(1)  =============>  Pivot element (minimum)
//             |_______________________

//output :  index[2] (value = 1)


// #include<iostream>
// using namespace std;

// int pivot(int arr[], int size){
//     int start = 0; 
//     int end =  size - 1;
//     int mid = start + (end - start)/2 ;

//     while(start< end){
//         if(arr[mid] >= arr[0]){              // check if mid is greater than or equal to arr[0]
//             start = mid +1 ;                 // if greater then start = mid + 1
//         }
//         else{                                // if mid is not greater than equal to arr[0] then
//             end = mid ;                      // end = mid ;
//         }  
//         mid = start + (end - start)/2 ;
//     }
//     return start ;                            //return start or end both will give right asnwer .
// }

// int main() {
//     // int arr[5] = {3, 5, 1, 3, 6} ;
//     int arr[5] = {3, 8, 10, 17, 1} ;
//     int result = pivot(arr, 5) ;

//     cout<<" pivot is at index :"<<result<<endl ;
//     return 0;
// }



//❓ Question :
// Find key in sorted rotating array ?
//Ex:
//input = {7, 8, 1, 2, 3} ;
//key = 2 ;
// output = true  // 2 exist in array


// #include<iostream>
// using namespace std ;

//  int pivot(int arr[], int size){                    // code to find pivot (minimum element) in the array
//        int start = 0 ;
//        int end = size -1 ;
//        int mid = start + (end - start)/2 ;

//        while(start < end){
//         if(arr[mid] >= arr[0]){
//           start = mid + 1;
//         }
//         else{
//           end = mid ;
//         }
//        mid = start + (end - start)/2 ; 
//        }
//        return start ;
//  }

//  int binarySearch(int arr[], int s, int e , int key){          // Binary search to find the key element in the array 
//         int start = s ;
//         int end = e ;
//         int mid = start + (end - start)/2 ;

//         while(start<=end){
//           if(arr[mid] == key){
//              return mid ;
//           }
//           else if(key < arr[mid]){
//             end = mid - 1;
//           }
//           else if(key > arr[mid]) {
//             start = mid + 1 ;
//           }
//           mid = start + (end - start)/2 ;
//         }
//           return -1 ;
//  }

//  int findPosition(int arr[], int size, int key) {              // function to find the position of the key in rotated sorted array using pivot and binary search together
        
//         int PivotResult = pivot(arr, size) ;                       // store pivot result (min element in the arrray)

//         if( key >=arr[PivotResult] && key <= arr[size - 1] ) {          // if the key is greater then equal to min element and key is smaller than equal to size -1 
//            return binarySearch(arr, PivotResult,  size -1 , key ) ;     // then do binary search on the right side ➡️ of the mid element
//         }
//         else{
//           return binarySearch( arr, 0 , PivotResult-1 , key ) ;         // else do binary search on the left side of the mid element of the arra
//         }
//  }

// int main(){
//   int arr[5] = {7, 8, 1, 2, 3} ;
//   int key = 3 ;

//   cout<< " Pivot : "<<pivot(arr, 5)<<endl ;                          //testing pivot 
//   cout<< " Binary search : "<<binarySearch(arr, 0, 4, key)<<endl ;   // testing binary
//   cout<< " Key element is at index : "<<findPosition(arr, 5, key)<<endl ;  //main answer
//   return 0 ;
// }



//❓ Question :
// Square root Using Binary search ?
//Ex:
// input : 36
// output : 6  (square root of 36 == 6) ;
// 
 
//  #include<iostream>
// using namespace std;

// long long sqrt(int n) {                    // we use long long int because when we use same code in leetcode the integer range is 2^31 (and mid*mid might exceed that , thats why we use long long )
      
//       int start = 0 ;                      
//       int end = n - 1;
//       long long int mid = start + (end - start)/2 ;
//       int ans = -1 ;

//       while(start <= end){

//          if((mid*mid) > n)
//          {
//           end = mid - 1;
//          }
//          else if((mid*mid) < n)
//          {
//           start = mid + 1;
//          }
//          else if((mid*mid) == n)
//          {
//           return  mid ;
//          }

//          mid = start + (end - start)/ 2;
//       }

//       return ans ;
// }

// int main(){
  
//   int input = 144 ;
 
//  cout<< " square root of "<<input<<" is "<<sqrt(input)<<endl ;

//   return 0 ;
// }



//OR🔴 above code with decimal answer : (Not working properly )

//  #include<iostream>
// using namespace std;

//     int sqrt(int n) {                    
      
//       int start = 0 ;                      
//       int end = n - 1;
//       int mid = start + (end - start)/2 ;
//       int ans = -1 ;

//       while(start <= end){

//          if((mid*mid) > n)
//          {
//           end = mid - 1;
//          }
//          else if((mid*mid) < n)
//          {
//           start = mid + 1;
//          }
//          else if((mid*mid) == n)
//          {
//           return  mid ;
//          }

//          mid = start + (end - start)/ 2;
//       }
//       return ans ;
//  }

//  double morePrecision(int n, int precision, int tempSol){

//     double factor = 1;
//     double ans = tempSol;
    
//     for(int i=0; i<precision; i++){
//         factor = factor/10 ;
        

//         for(double j=ans; (j*j)<n; j += factor){
//             ans = j;
//         }
//     }
//     return ans ;
//  }


// int main(){
  
//   int n = 36 ;
//   int precision = 2 ;
//   int tempSol = sqrt(n) ;
//  cout<< " square root of "<< n <<" is "<< tempSol <<endl ;

//  int tempSol = sqrt(n) ;
//  cout<<" sqrt with precision : "<<morePrecision(n, precision, tempSol)<< endl ;
//   return 0 ;
// }




////❓ QUestion : (Google, Amazon, facebook) 
// 🔴Book Allocation Problem :
//  Given an array 'arr' of integer numbers. where 'arr[i]' represents the number of pages in the 'i-th' book .
//  there are 'm' number of students and the task is to allocate all the books to their students. allocate boooks in such a way that :

//   1. Each student gets at least one book.
//   2. Each book should be allocated to a student.
//   3. book allocation should be in a contigous manner.   //contigous means we cannot allocated books from between like if we array={10, 20, 30, 40} then here contigous manner means straight sequnence wise like 10,20 = to student 1, and 30,40= to student 2, etc

// you have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum.

//Ex:
// array of book = [10, 20, 30, 40] 
// no. of student m = 2
// total no. of books n = 4  
// number of pages in array of books = value => 10(pages in 1st book), 20(pages in 2nd book), 30, 40 

//🔸ways :   [10, 20, 30, 40]      
//  1st  :    10 | 20 30 40         // student 1 = 10, student 2 = 20,30,40 
//  2nd  :    10 20 | 30 40         // student 1 = 10,20 student 2 = 30,40 
//  2nd  :    10 20 30 | 40         // student 1 = 10,20,30  student 2 = 40 

//🔸you have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum.
//The above line means  : 

//  10 | 20,30,40 = sum of all pages of books which allocated to student-1 is '10 = 10' and student-2 is '20+30+40  = 90'  so maximum is max(10, 90) = 90  
//  10,20 | 30,40 = sum of all pages of books which allocated to student-1 is '10+20 = 30' and student-2 is '30+40  = 70'  so maximum is max(30, 70) = 70  
//  10,20,30 | 40 = sum of all pages of books which allocated to student-1 is '10+20+30 = 60' and student-2 is '40  = 40'  so maximum is max(60, 40) = 60  

//🔸Now we have to return minimum of the all max, So minimum of min (90, 70, 60) = 60  output ANSWER = 60


// #include<iostream>
// using namespace std;

// bool isPossible(int arr[], int n, int m, int mid){

//     int studentCount = 1;
//     int pageSum = 0;
//           cout<<" mid in ispossible  : "<<mid<<endl ;
//     for(int i=0; i<n ; i++){
//               cout<<" arr[i] : "<<arr[i]<<endl ;
//         if( pageSum + arr[i] <= mid ){
//             pageSum += arr[i] ;
//             cout<<" PageSum : "<<pageSum<<endl ;
//         }
//         else {
//             studentCount++ ;
//             if( studentCount > m || arr[i] > mid) {
//                 cout<<" false studentcount , arr[i]>mid : "<<studentCount<<" , "<<arr[i]<<endl ;
//                 return false ;
//             }
//             pageSum = arr[i] ;
//             cout<<" studentcount, pageSum else : "<<studentCount<<" , "<<pageSum<<endl ;
//         }
//     }
//     cout<<" true  : "<<endl ;
//     return true ;
// }

// int allocateBooks( int arr[], int n, int m){

//               int s = 0 ;
//               int sum = 0;

//             for(int i=0; i<n ; i++){
//                 sum += arr[i] ;
//             }    
//             cout<<" Sum : "<<sum<<endl ;
//             int e = sum ;
//             int ans = -1;
//             int mid = s + (e-s)/2 ;
//             cout<<" e , ans, mid : "<<e<<" , "<<ans<<" , "<<mid<<" , "<<endl ;

//             while(s<=e){
//                 if( isPossible(arr, n, m, mid) ){
//                      ans = mid ;
//                      e = mid - 1;
//                      cout<<" inside while ans, e : "<<ans<<" , "<<e<<" , "<<endl ;
//                 }                
//                 else {
//                     s = mid + 1 ;
//                     cout<<" else in while s : "<<s<<endl ;
//                 }
//                 mid = s + (e-s)/2 ;
//                 cout<<" start and end mid atlast : "<<s<<" , "<<e<<" , "<<mid <<endl ;
//             }

//          return ans; 
// }

// int main(){

// int arr[4] = {10, 20, 30, 40} ;

// int result = allocateBooks(arr, 4, 2) ;

// cout<<" Answer is : "<<result <<endl ;

//     return 0;
// }


//🔴 Again solved the above book allocation problem by me :

// #include<iostream>
// using namespace std ;

// int isPossible(int arr[], int n, int m, int mid) {
             
//              int studentCount = 1 ;
//              int pageSum = 0 ;

//              for(int i=0; i<n; i++){

//                 if(pageSum + arr[i] <=mid){
//                     pageSum += arr[i] ;
//                }
//                else{
//                   studentCount++ ;

//                   if(studentCount > m || arr[i] > mid){
//                     return false ;
//                   }
//                   pageSum = arr[i] ;
//                } 
//           }
//        return true ;
// }

// int allocateBooks(int arr[], int n, int m){
             
//              int start = 0;
//              int sum = 0;
//              for(int i=0; i<n; i++){
//                 sum += arr[i] ;
//              }
            
//             int end = sum ;
//             int ans = -1 ;
//             int mid = start + (end - start)/2 ;

//             while(start<=end){

//                 if( isPossible(arr, n, m, mid)){
//                     end = mid - 1;
//                     ans = mid ;
//                 }
//                 else{
//                     start = mid + 1;
//                 }
//                 mid = start + (end - start) / 2;
//             }
//             return ans ;
// }

// int main(){

// int arr[4] = {10, 20, 30, 40} ;

// int result = allocateBooks(arr, 4, 2) ;

// cout<<" Answer is : "<<result <<endl ;

//     return 0;
// }



//❓ Question (google, amazon, facebook):
//🔴Painter's Partition Problem :

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



//❓ Questions (google, amazon, facebook) :
//🔴 Aggresive Cows :

// Given an array of length 'N', where each elements denotes the position of a arr. now you have 'N' stalls and
// an integer 'K' which denotes the number of cows that are aggresive. to prevent the cows from hurting each other, 
// you need to assign the cows to the stalls such that the minimun distance between any two of them is as large as possible. 
// return the largest minimum distance.

// input : {4, 2, 1, 3, 6} ;  //stalls positions
// no. of stalls N = 5 ;
// no. of cows  k = 2 ;

// output: 5             // because in this case we need to obtain maximum distance between two cows placed in the stalls

// explaination :

// stalls     4    2    1    3     6
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


// #include<iostream>
// #include<algorithm>                    // library for sort
// #include <vector>                      // library for max
// using namespace std ;

// int isPossible(int arr[], int k, int n, int mid) {
            
//             int cowCount = 1;
//             int lastPosition = arr[0] ;

//             for(int i=0; i<n; i++){

//                 if(arr[i] - lastPosition >= mid){
//                      cowCount++ ;

//                      if(cowCount == k){
//                         return true ;
//                      }
//                      lastPosition = arr[i] ;
//                 }
//             }
//             return false; 
// }

// int aggressiveCows(int arr[], int k, int n){
 
//        int start = 0;
//        int maxi = -1 ;

//        for(int i=0; i<n; i++){                           // loop to find maximum value in the array
//           maxi = max(maxi, arr[i]) ;                   // store the max number in maxi 
//        }

//        int end = maxi ;
//        int ans = -1 ;
//        int mid = start + (end - start)/2; 

//        while(start<=end){

//            if( isPossible(arr, k, n, mid)){
//              ans = mid ;
//              start = mid + 1;
//            }
//            else{
//               end = mid - 1;
//            }
//         mid = start + (end - start)/2 ;
//        }
//    return ans ;
// }


// int main(){
 
//  int arr[5] = {4, 2, 1, 3, 6} ;
//  int n = 5 ;
//  int k = 2 ;

//   int arraySize = sizeof(arr) / sizeof(arr[0]) ;             // getting size of original array  
//   sort(arr, arr + arraySize) ;                              // sort the original array 

       
// cout<<" Answer of aggresive cow : "<<aggressiveCows(arr, k, n)<<endl ;


//     return 0;
// }



