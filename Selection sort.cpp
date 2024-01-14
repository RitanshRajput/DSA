// 🔴🔴 SELECTION SORT :

// When we store element of an arrray in either increasing or decreasing order is called sorting .

// 🔸 In selection sort we play with different round of passes :
//    which means in every round of iteration we will replace the first value by the smallest element in that round of element.

// example:
//  input = {64, 25, 12, 22, 11} ;

// Round 1 :   [11], 25, 12, 22, [64]      // In this round iteration started from 0th index to nth index and replace the smallest element with the first element
// Round 2 :   11, [12], [25], 22, 64      // In this round iteration started from 1th index to nth index and replace the smallest element with the second element
// Round 3 :   11, 12, [22], [25], 64      // In this round iteration started from 2th index to nth index and replace the smallest element with the third element
// Round 4 :   11, 12, 22, 25, 64          // All the element in the array is sorted :

// 🔴 Time complexity for selection Sort :
//    a   b    c    d   e         // no of element
//    4   3    2    1   0         // no of comparision per iteration
//   n-4  n-3  n-2  n-1          // size of array= n   (so comparision will be n-4, n-3, n-2, n-1)

//  1 +2+3+4 ..... (n-3) + (n-2) + (n-1)
//  = n(n-1) / 2
//  = n² - n / 2
//  = O(n²)            // Time complexity

// Time complexity :   O(n²)

// 🔴 Space complexity :
//  no extra variable is created so : O(1)

// 🔸Use Case :
//  whenever the array / vector size is small where we have time and space constraint.
//  we will use Selection Sort

// ❓ Question :
//  sort the array using selection sort :

// #include<iostream>
// using namespace std ;

// int printArray(int arr[], int n){
//       for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//       }
// }

// void selectionSort(int* arr, int n){

//     for(int i=0; i<n ; i++){
//         int minIndex = i;
//         for(int j=i+1; j<n; j++ ){
//              if( arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         swap(arr[minIndex], arr[i]) ;
//     }

//     printArray(arr, n) ;
// }

// int main(){
// int arr[5] =  {64, 25, 32, 22, 11};
// int n = 5 ;

//  selectionSort(arr, n) ;
//     return 0 ;
// }

// 🔘 Is selection Sort stable or unstable ?

// 🔸 A sorting algorithm is said to be stable if two objects with equal or same keys appear in the same order in sorted output as they appear in the input array to be sorted.
//    Any comparison based sorting algorithm which is not stable by nature can be modified to be stable by changing the key comparison operation so that the comparison of two keys
//    considers position as a factor for objects with equal key or by tweaking it in a way such that its meaning doesn’t change and it becomes stable as well.

// 🔸 Selection sort works by finding the minimum element and then inserting it in its correct position by swapping with the element which is in the position of this minimum element. This is what makes it unstable.
//    Swapping might impact in pushing a key(let’s say A) to a position greater than the key(let’s say B) which are equal keys. which makes them out of desired order.

// 🔘 STABLE SORTING  :
//  Maintain the relative order od number/records in case of a tie.
//  The original key/element is still in its same place even after sorting.

//    5  8  9  [8]  3
//        \     |
//    3  5  8  [8]  9

// Ex : 🔸merge sort, 🔸counting sort, 🔸insertion sort, 🔸bubble sort

// 🔘 UNSTABLE SORTING :
//  Does not maintain the relative order of number/records in case of a tie.
//  The original key/element is not in the same place after sorting.

//    5  8  9  [8]  3
//          \  /
//           \/
//           /\
//    3  5  8  [8]  9

// Ex : 🔸 Quick sort, 🔸Heap sort , 🔸Selection sort

// 🔴🔴 BUBBLE SORT :

// In bubble sort we compare the element of neighbour indexes
// And swap the greater element with the smaller element.

// Ex :
// input:      10  1   7  6  14  9

// Round 1:    [1][10]  7  6  14  9
//              1  [7][10] 6  14  9
//              1  7  [6][10] 14  9
//              1  7   6  10  14  9               // no change
//              1  7   6  10 [9][14]            //first greatest element on its position 14

// Round 2:     1  7  6  10  9  14
//              1  7  6  10  9  14               // no change
//              1 [6][7] 10  9  14
//              1  6  7  10  9  14               //no change
//              1  6  7 [9][10] 14             // second largest element on its position 10

// Round 3:     1  6  7  9  10  14
//              1  6  7  9  10  14             //no change
//              1  6  7  9  10  14             // no change
//              1  6  7  9  10  14             // no change
//              1  6  7  9  10  14           // All the elements sorted

// 🔴 Time complexity for Bubble Sort :
//    a   b    c    d   e         // no of element
//    4   3    2    1   0         // no of comparision per round
//   n-4  n-3  n-2  n-1          // size of array= n   (so comparision will be till n-1, n-2, n-3, n-4)

//  1 +2+3+4 ..... (n-3) + (n-2) + (n-1)
//  = n(n-1) / 2
//  = n² - n / 2
//  = O(n²)            // Time complexity   // n = size of array

// Time complexity :
// Best case ==>  O(n)  linear time
// Worst case ==> O(n²)  reversed array

// 🔴 Space complexity :
//  no extra variable is created so : O(1)

// ❓ Question :
//  Sort all the element in the array using Bubble Sort :

// #include<iostream>
// using namespace std;

// int printArray(int arr[], int n){
//     cout<<"Bubble sort : "<<endl ;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" " ;
//     }
// }

// int bubbleSort(int arr[], int n){

//       for(int i=1; i<n; i++){       // we consider 0th index to be sorted so we start from 1th index to < nth index

//         for(int j=0; j<n-i; j++){   // process element from  0 to n-i th index  (0, 1, 2, 3, 4) (0, 1, 2, 3) (0, 1, 2) (0,1) (0)
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]) ;
//             }
//          }
//       }
//       return printArray(arr, n) ;
// }

// int main(){

// int arr[7] = {8, 22, 7, 9, 31, 5, 13} ;
// int n = 7 ;

// bubbleSort(arr, n);

//     return 0;
// }

// 🔸 Optimised above Bubble sort :
//  for best case if the array is already sorted :

// #include<iostream>
// using namespace std;

// int printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" " ;
//     }
// }

// int bubbleSort(int arr[], int n){
//     int swapped = false ;                 // varibale to check if swapping happened.
//       for(int i=1; i<n; i++){

//         for(int j=0; j<n-i; j++){

//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]) ;
//                 swapped = true ;             // if swapping happens means array is unsorted and make it true and repeat the following procedure
//             }
//          }
//          if(swapped == false)               // if swapping not happen means array is already sorted so in this case which is best case break the loop.
//          break ;                           // if false then break the loop
//       }
//       return printArray(arr, n) ;
// }

// int main(){

// int arr[6] = {10 , 1 ,  7 , 6 , 14,  9} ;
// int n = 6 ;

// cout<<endl<<" Bubble sorted array no. of element  : "<<bubbleSort(arr, n)<<endl ;

//     return 0;
// }

// 🔘 In-place sorting :
// 🔸 : A sort algorithm in which the sorted items occupy the same storage as the original ones
// Ex  : insertion sort, selection sort, quick sort, bubble sort, heap sort

// 🔘 Out-place sorting :
// 🔸 An in-place sorting algorithm sorts the elements in place: that is, it needs only O(1) extra space.
// 🔸 An out-of-place sorting algorithm needs extra space to put the elements in as it's sorting them. Usually this means O(n) extra space.
// Ex:  Merge sort    // as it requires O(n) extra space for merging.

// 🔴 Is a bubble sort an in-place algorithm?
//  🔸 A bubble sort is an in-place algorithm because it doesn't need an extra space and produces an output of the same size by manipulating the input in one place.

// 🔴🔴 INSERTION SORTING :

// 🔸In insertion sort we compare each element with its elements to check whether they are smaller or greater
//   If the element on the left side is greater then we will insert our element before that greater element else we will give it on the same place.

// 🔸Approach :

// Input :   {6, 5, 4, 3, 2, 1}

// comparing 1st element 6 :    [6]                    // no element on the left side to compare ,hence it will stay as it is.
// comparing 2nd element 5 :    [5, 6]                 // 5 is smaller than element on its left side so, we insert it before 1st element (before 6)
// comparing 3rd element 4 :    [4, 5, 6]              // 4 is compare with 6 which is greater then we insert it before 6 then again compare with left element(5, 4, 6)  now 5 is greater then 4 so inserted before 5
// comparing 4th element 3 :    [3, 4, 5, 6]           // 3 is 1st compare with 6 inserted before 6 (4,5, 3, 6), compare with 5 inserted before 5 (4, 3, 5, 6),  compare with 4 inserted before 4(3, 4, 5, 6)
// comparing 5th element 2 :    [2, 3, 4, 5, 6]        // 2 is 1st compare with 6 inserted before 6(3,4, 5, 2, 6), compare with 5 inserted before 5 (3, 4, 2, 5, 6), compare with 4 inserted before 4(3, 2, 4, 5, 6), compare with 3 inserted before 3 (2, 3, 4, 5, 6)
// comparing 6th element 1 :    [1, 2, 3, 4, 5, 6]     // after same process its been compare and inserted in its right position (before the greater element), hence the array is sorted.

// 🔸 In insertion sort we dont swap but shift the elements

// 🔴Time complexity : O(n²)
//  Best case  :  O(n)
//  worst case :  O(n²)

// 🔴Space complexity :
//   O(1)

// ❓ Question :
//  Sort the given array using Insertion sort:

// #include<iostream>
// using namespace std ;

// int insertionSort(int arr[], int n){

//     // assign ex: j (i-1) = 0th index , temp (arr[i]) = 1st index, j+1 (0th + 1) = 1st index

//       for(int i=1; i<n; i++){          // loop start from 1th to < nth index (bcoz we consider 0th index sorted)
//         int temp = arr[i] ;
//         int j = i-1 ;                  // declaring j outside the loop to use its value outside the scope
//          for( ; j >=0; j--) {

//           if(arr[j] > temp ){          // ex: if 0th index  > than 1st index
//             arr[j+1] = arr[j] ;       // then shift 0th index right side ex: {10, 1, 4} shift right side {10, 10, 4}
//            }
//          else{
//             break ;                    //else break the loop if left element is smaller means all other element on the left side will be smaller as well
//           }
//         }
//        //  value of j will be according to loop ex: j-- , j = 0
//         arr[j+1] = temp ;             // after assigning the value on the left side ex: {10, 10, 4} assign rigth value stored in temp to the left (1, 10, 4)
//       }

//     for(int i=0; i<n; i++){               // loop to print sorted array
//         cout<<arr[i]<<" " ;
//     }
//  return n ;
// }

// int main(){

// int arr[5] = {5, 4, 3, 2, 1} ;
// int n = 5 ;

// cout<<"Insertion Sort : "<<endl ;
// insertionSort(arr, n) ;

//     return 0;
// }
