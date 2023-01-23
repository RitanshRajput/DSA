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

// long long int sqrt(int n) {                    
      
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

// // double decimal(int n, int precision, int tempSol) {
// //      double factor = 1 ;
// //      double answer = tempSol ;

// //      for(int i=0; i<precision; i++){
// //         factor = factor / 10 ;
// //         for(int j=answer; j*j<n; j=j+factor) {
// //             cout<<factor<<endl ;
// //                answer = j ;
// //                cout<<answer<<endl ;
// //         }
// //      }
// //          return answer ;
// // }


// int main(){
  
//   int input = 36 ;
//  cout<< " square root of "<<input<<" is "<<sqrt(input)<<endl ;

//  int temp = sqrt(input) ;
//   cout<<" decimal = "<<decimal(input, 2, temp)<<endl ;
 
//   return 0 ;
// }