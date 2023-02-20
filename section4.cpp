
// 🔴🔴 ARRAYS :
// 🔸 Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
// 🔸 To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
// 🔸 Array store similar type of item . (only int, only char) not mixup.
// 🔸 arrays are stored in contiguos location.
// 🔸 We can access value of array by index number, and index number start with 0 .

// 🔸 Declaration :
//  Ex:
//  int arr[10] ;   // array type=> int, name = array, size=>10(0th index - 9th index) , index => [0th ,1th ,2th ,3th ,4th ,5th ,6th ,7th ,8th ,9th] , Value => [garbage value, gv,gv,gv...]

// 🔸How to declare value in array:
// ex:
//  int number[5] = {11, 12, 13, 14, 15}       //{} curly braces are used to stored/define value of that array., index=>[0, 1, 2, 3, 4, 5]  ,  value=> [11, 12, 13, 14, 15]

// 🔸 what if we define array of size 5, but declare less value let say single value
// Ex for zero :
//  int number[5] ={0}               //In this case every index will have same value => [0,0,0,0,0],  this works only for 0, if we want to use another value then we

// Ex for value other than zero :
//  std:fill(array, array+5, 2) ;        // fill_n(arrayName, size, value) will add 2 to the entire array of 5.

// 🔸Implementation ;

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){

// int number[15];             //declaration
// cout<<"value at 13 index "<<number[13]<<endl ;  //accessing the array
//                                                 //output: 6422356 garbage value since we haven't initialized the array with any value it will through garbage value.

// int num[4] = {2, 3, 4, 5,} ;                  //initialising an array
// cout<<"value at 3 : "<<num[3]<<endl ;        //output : 5  ( 0 to n-1 )

// int data[5] = {2, 3, 4} ;
// int n = 5;

// for(int i=0; i<n; i++){                   // accessing array through loop
//     cout<<" "<<data[i];                       //output:  2 3 4 0 0  since we only define 3 value all the other gets either 0 or garbage value
// }
//  cout<<endl;

// int zero[5] ={0} ;                      // initialising only 0

// for(int i=0; i<5 ;i++) {
//     cout<<" "<<zero[i] ;                 //output:  0 0 0 0 0
// }
// cout<<endl;

// int one[5] ={1} ;                      // initialising only 1

// for(int i=0; i<5 ;i++) {
//     cout<<" "<<one[i] ;                 //output:   1 0 0 0 0
// }
// cout<<endl ;

// int two[5] ;                       //declare array
// fill_n(two, 5, 2) ;                // initialise using fill_n  method it takes parameter as (arrayName, arraySize, value) ;

// for(int i=0; i<5; i++){
//     cout<<" "<<two[i] ;           // ouput:  2 2 2 2 2
// }
// cout<<endl ;

//     return 0 ;
// }

// 🔸 Implementation Using Function :

// #include<iostream>
// #include<math.h>
// using namespace std;

// void printArr(int arr[], int size){           // Using function to access array

//  cout<< " printing the array using function "<<endl;
//  for(int i=0; i<size; i++){
//     cout<<" "<<arr[i] ;
//  }

// }
// int main(){

// int two[5]= {2,3,4,5,6};
// printArr(two, 5) ;           //output :  2 3 4 5 6
// cout<<endl ;

// char ch[5] ={'a', 'b', 'c', 'd'} ;           //declaring character array :
//    for(int i=0; i<5; i++){
//     cout<<" "<<ch[i];                    //output :  a b c d
//    }

// return 0;
// }

// 🔘 INT_MIN => stores lowest integer value which is -2^31   (^ power)
// 🔘 INT_MAX => stores highest integer value which is 2^31   (^ power)
// 🔸 to use this method use library => #include<limits.h>

// 🔘 max() => this is predefined function compares two value and tells max , it takes 2 paramter max(value1, value2) ;
// 🔘 min() => this is predefined function compare two value and tells min , it takes 2 paramter min(value1, value2) ;
// 🔸 to use this function use library => #include<algorithm>

// ❓ Question :
// find maximum and minimum in an array :

// #include<iostream>
// #include<math.h>
// #include<limits.h>
// #include<algorithm>
// using namespace std;

// // function for maximum number in array
//   int getMax(int num[], int size){
//        int maxi = INT_MIN ;

//        for(int i=0; i<size; i++){
//             maxi = max(maxi, num[i]) ;         // predefined function for max value inside for looop

//     //        if(num[i]> maxi) {              // if statement max value
//     //         maxi = num[i] ;
//     //        }
//        }
//        return maxi ;
//   }

// // function for minimum number in array ;
//   int getMin(int num[], int size){
//        int mini = INT_MAX ;

//        for(int i=0; i<size; i++){
//             mini = min(mini, num[i]) ;          //predefined function for min value inside for loop

//         //    if(num[i] < mini) {              // if statement for min value
//         //     mini = num[i] ;
//         //    }
//        }
//        return mini ;
//   }

//  int main(){

//   int size ;
//   cout<<"Enter size of array "<<endl ;
//   cin>>size ;

// //   int num[size] ;       // wrong practice never use this ;

//      int num[100];                  //right way even though if user enters 5 value the size is 100 it is still consider the best practice compare to int[size] above ;
//      for(int i=0; i<size; i++){     // taking input dynamically (means from user), statically(means define while writing code)
//         cin>>num[i] ;
//      }
//      cout<<endl ;

//      cout<< " Maximun value is : "<<getMax(num, size)<<endl  ;    //printing max value
//      cout<< " Manimun value is : "<<getMin(num, size)<<endl  ;    //printing min value

//     return 0 ;
//  }

// 🔸 Scope :
//  when we pass a integer value in function it create a copy of that integer value.
//  when we pass a array value in function it uses the address of that original array value.

// for integer value if we update the value in function it won't affect the original value in main function.
// but when array value is updated in function it will change the original value in main function as well bcoz it is using the address of that integer.

// 🔸 updating value of array from function :
//  #include<iostream>
//  using namespace std ;

//    void update(int arr[], int n){

//     cout<<"Inside the Void function "<<endl ;

//           arr[0] =120 ;            // updating 0th index by 120   (now the original value 2 will be updated by 120)
//           cout<<"updating in void function : "<<endl;
//            for(int i=0; i<3; i++){
//                cout<<" "<<arr[i];
//            }
//            cout<<endl ;

//     cout<<" Going back to main function "<<endl ;
//    }

// int main(){

// int arr[3] = {2,3,4};

// update(arr, 3) ;

//  cout<<"updating in main function : "<<endl;
// for(int i=0; i<3; i++){
//     cout<<" "<<arr[i];
// }
// cout<<endl ;

//     return 0 ;
// }

// ❓ Question :
//  Print sum of all element in an array :

// #include <iostream>
// using namespace std;

// int main(){

// int size ;
// cout<<"enter size: "<<endl;
// cin>>size ;

// int answer = 0 ;
// int arr[20] ;

// cout<<"enter values :"<<endl ;

// for(int i=0; i<size; i++){
//     cin>>arr[i] ;

//     answer = answer + arr[i] ;
// }
// cout<<" Sum of all number is : "<<answer <<endl ;
// cout<<endl ;

//     return 0;
// }

// 🔴🔴 Linear Search
// Linear search means to search element in straight way one by one in an array .

// ❓ Question :

// #include<iostream>
// using namespace std;

// bool search(int arr[], int size, int key) {
//       for(int i=0; i<size; i++) {

//         if(arr[i] == key ){
//             return 1 ;
//         }
//       }
//       return 0;
// }

// int main(){

// int arr[10] = {12, 2, -4, 11, 53, 78, 52, 90, 1, 6} ;

// int key ;
// cout<<"Enter the element to search for : "<<endl ;
// cin>>key ;

// bool found = search(arr, 10, key) ;

// if(found){
//     cout<<" Value is present "<<endl ;
// }
// else {
//     cout<<" Value is Not present "<<endl ;

// }
//     return 0 ;
// }

// 🔘 Swap() => this is a predefined function which is used to swap two value it takes two paramter (value1, value2)

// ❓ Question :
//  Reverse an array :

// #include<iostream>
// using namespace std;

//   void reverse(int arr[], int size) {
//     int start = 0 ;
//     int end = size-1 ;

//     while(start<=end) {
//         swap(arr[start], arr[end]) ;
//         start++ ;
//         end-- ;
//     }
//   }

//    void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<" "<<arr[i] ;
//     }
//     cout<<endl ;
//    }

// int main(){

//     int arrOdd[5] ={1,2,3,4,5} ;
//     int arrEven[6] ={1,2,3,4,5,6} ;

//     reverse(arrOdd, 5) ;
//     reverse(arrEven, 6) ;

//     printArray(arrOdd, 5) ;
//     printArray(arrEven, 6) ;

//     return 0;
// }

// ❓ Question :
//  swap alternate numbers:
// Ex:
//  {1,2,3,4,5,6}
//  output: {2,1,4,3,6,5}

// #include<iostream>
// using namespace std;

// void swappedanother(int arr[], int size){           //Another way to swapping alternate elements :

//     for(int i=0; i<size; i= i+2){
//            if(arr[i] < size) {
//             swap(arr[i], arr[i+1])  ;
//            }
//      }
// }

// void swapped(int arr[], int size){                // One way to swapp alternate element ;
//    int i = 1 ;

//     while(i<size){
//      int temp = arr[i] ;
//      arr[i] = arr[i-1] ;
//      arr[i-1] = temp ;

//      i = i + 2;

//     }
// }

// void printArray(int arr[], int size){
//      for(int i=0; i<size; i++){
//         cout<<" "<<arr[i] ;
//     }
//     cout<<endl ;
// }

// int main(){
//  int even[6] ={1,2,3,4,5,6}  ;
//  int odd[5] ={1,2,3,4,5} ;

// //   swapped(even , 6) ;
// //   swapped(odd , 5) ;

//   swappedanother(even , 6) ;
//   swappedanother(odd , 5) ;

//   printArray(even, 6) ;
//   printArray(odd, 5) ;

//     return 0;
// }

// 🔘 XOR (^) = has a property which says if two numbers are same then output will be 0 ;
//  Ex:    0^0 = 0 ,  1^1=0,  2^2=0 , ...

// ❓ Question
// Find unique in an array ;

// #include<iostream>
// using namespace std ;

// void printArray(int arr[], int size){
//      for(int i=0; i<size; i++){
//         cout<<" "<<arr[i] ;
//     }
//     cout<<endl ;
// }

// int main() {
//  int arr[6] ={2,2,1,2,3,3,}  ;

//    for(int i=0; i<6; i++){              // without using XOR bitwise operator :
//         int count = 0 ;

//       for(int j=0; j<6; j++){
//         if(arr[i] != arr[j]){
//             count++ ;
//         }
//      }
//        if(count == 5) {
//         cout<<arr[i]<<" Is unique "<<endl ;
//        }
//    }

//     return 0 ;
// }

// 🔘 size() = size() tells the size of vector/array ( arrayName.size() )

// ❓Question Leetcode easy 5️⃣ ;
//  Given an array of integers arr, return true if the number of occurrences of each value in 
//  the array is unique or false otherwise.

// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Example 2:

// Input: arr = [1,2]
// Output: false
// Example 3:

// Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
// Output: true

// #include <iostream>
// using namespace std;
// int main(){

//     return 0;
// }

// 🔴 Unsolved ;

// ❓ Question leetcode medium 6️⃣ ;
//  Given an integer array nums of length n where all the integers of nums are in the range [1, n] 
//  and each integer appears once or twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]

// Example 2:
// Input: nums = [1,1,2]
// Output: [1]

// Example 3:
// Input: nums = [1]
// Output: []

// #include <iostream>
// using namespace std;

// int duplicate(int arr[], int size){
//        int temp[ size ];
//        int k = 0;
//        int count = 0;
//        for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//         if(arr[i] == arr[j] ) {
//             temp[k] = arr[i] ;
//                k++ ;
//                count++ ;
//          }
//        }
//     }

//    // sorting array using selection sort :
//     for(int i=0; i<count; i++){
//       int minIndex = i;
//         for(int j=i+1; j<count; j++){
//             if( arr[j] > minIndex){
//                minIndex = j;
//             }
//             swap(arr[minIndex], arr[i]) ;
//         }
//         cout<<arr[i]<< ",";
//     }
//     cout<<endl; 
//       for(int i=0; i<count; i++){
//         cout<<temp[i] <<" ";
//     }
//     cout<<endl; 

// }

// int main(){

//     int num[8] = {4,3,2,7,8,2,3,1} ;
//     int size = 8 ;

//     duplicate(num, size) ;

//     return 0 ;
// }

// 🔴 Unsolved ;


// ❓ Question ;
//  find  duplicate in an array ;

// #include<iostream>
// using namespace std;

// int duplicate(int arr[], int size){        //using XOR operator:
//     int ans = 0 ;
//     for(int i=0; i<size ; i++){
//         // if xor ^ xor = 0, if xor ^ 0 = xor
//         // Xor ing all the array element from 0 to n-1  5^1^10^3^4^10 
//         ans = ans^arr[i] ;               
//     }
//     for(int i = 1; i<size; i++){
//         // again xor ing all element from 1 to n-1   1^2^3^4^5
//         ans = ans^i ;
//     }
//     cout<<"answer :" <<ans<<endl ;
// }

// int main(){
//  int arr[6] = {3,1,21,21,4,3} ;
//  int arr1[9] ={8,21, 2,5,4,7,21,3,6} ;

// //  duplicate(arr, 6) ;
// //  duplicate(arr1, 9) ;

//  for(int i=0; i<9; i++) {               // (brute force approach) without using XOR bitwise operator
//      int count = 0 ;

//      for(int j=i; j<9; j++){
//           if(arr1[i] == arr1[j]){
//             count++ ;
//           }
//      }
//      if(count > 1){
//         cout<<arr1[i]<<" is duplicate "<<endl ;
//      }
//  }
//     return 0;
// }

// ❓ Question :
//  two array similar element  / array intersection :

// #include<iostream>
// using namespace std;

// int main(){

// int arr1[5] = {1,2,3,4,5} ;
// int arr2[5] = {2,4,6,8,0} ;
// int answer[5] ;
//   for(int i=0; i<5; i++ ){

//     for(int j=0; j<5; j++){
//         if(arr1[i] == arr2[j]){
//             cout<<arr1[i]<<" ";
//         }

//     }
//   }

//     return 0;
// }

// ❓ Question :
//  Pair Sum : if any pair of number is equal to the given sum then output true.
//  input : arr[-5, 1, -40, 20, 6, 8, 7 ] , target sum = 15
//  output : true => (7, 8) or (-5, 20 )

// input : arr[-5, 4, -2, 16, 8, 9] , target sum = 15
// output : false

// #include <iostream>
// using namespace std;

// int main(){
//   int arr[8]={-5, 1, -40, 20, 6, 8, 7} ;        //arr contents pair
//   int arr2[6] = {-5, 4, -2, 16, 8, 9} ;         // arr don't contain pair
//   int target = 15;
//   int count = 0 ;
//   int find  ;

//   for(int i=0; i<8 ; i++){

//      for(int j=i+1; j<6; j++ ){
//         find = arr[i] + arr[j] ;
//         if(find == target ){
//             cout<<"( "<<arr[i]<<","<<arr[j]<<" )" <<endl ;
//              count++ ;
//         }
//      }
//   }

// if(count == 0){
//     cout<<" No pair found" <<endl ;
// }

//     return 0;
// }

// ❓ Question :
// Triplet Sum : if any triplet pair of number is equal to the given sum then output true.
// input : arr [2, 7, 4, 0, 9, 5, 1, 3] , target sum = 6
// output : true =>
// else :
// output : false

// #include <iostream>
// using namespace std;

// int main(){

// int arr[10]={5,3,8,7,9,1,0,2,6,4};
//     int sum=8;
//     int c ,n = 10 ,find=0;

//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1 ;j<n ;j++)
//         {
//             for(int k=j+1 ;k<n ;k++)
//             {
//                 c = arr[i] + arr[j] + arr[k];
//                 if(c==sum)
//                 {
//                     cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")\n";
//                     find=1;
//                 }
//             }
//         }
//     }
//     if(find==0)
//     cout<<"No triplet found!";
//     return 0;

//     return 0;
// }

// ❓ Question :
// Sort 0s and 1s :
// input : {0, 1, 0, 1, 1, 1, 0, 0};
// output : {0, 0, 0, 0, 1, 1, 1, 1} ;

// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n){    //approach 2
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<<" " ;
//     }
//     cout<<endl ;
// }

// void sortOne(int arr[], int n){
//     int i = 0, j = n-1 ;

//     while(i < j){
//         while(arr[i] == 0  &&  i<j){
//             i++ ;
//         }
//         while(arr[j] == 1  &&  i<j){
//             j-- ;
//         }

//         if(i<j) {
//         swap(arr[i], arr[j]) ;
//         i++ ;
//         j-- ;
//         }
//     }
// }

// int main(){

// int arr[8]= {1,1,1,1,0,0,0,0} ;
// int count = 0 ;

// sortOne(arr, 8) ;
// printArray(arr, 8) ;

// for(int i=0; i<8; i++){          //count increase if 0 (approach 1)
//     if(arr[i] == 0){
//         count++ ;
//     }
// }
// for(int i=0; i<count; i++){      // loop for 0
//     arr[i] = 0 ;
// }
// for(int i=count; i<8; i++){      //loop for 1
//     arr[i] = 1 ;
// }

// for(int i=0; i<8; i++){          //loop to print ;
//     cout<<arr[i]<<" " ;
// }

// return 0 ;
// }



// ❓ Question :
// Sort 0s and 1s and 2s :
// input : {0, 1, 0, 2, 2, 1, 0, 0};
// output : {0, 0, 0, 0, 1, 1, 2, 2} ;

// #include <iostream>
// using namespace std;
 
// void printArray(int arr[], int n){          //function to print array
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<<" " ;
//     }
//     cout<<endl ;
// }

// int main(){

// int arr[8]= {1,0,2,1,2,0,1,2} ;
// int zero = 0 ;
// int one = 0;
// int two = 0;


// for(int i=0; i<8; i++){             //Using brute force to check how many 0s, 1s, 2s are in the array
//     if(arr[i]== 0){
//         zero++ ;
//     }
//     else if(arr[i] ==1){
//         one++ ;
//     }
//     else if(arr[i]==2){
//         two++ ;
//     }
// }

// for(int i=0; i<zero; i++){              // adding the 0s in the array
//     arr[i]= 0;
// }
// for(int j=zero; j<(8-one+1); j++){      // adding the 1s in the array
//     arr[j]=1 ;
// }
// for(int k=(8-one+1); k<=(8-two+1); k++){  // adding the 2s in the array
//     arr[k]=2 ;
// }

// printArray(arr, 8) ;                  //Printing new array
// return 0 ;
// }


