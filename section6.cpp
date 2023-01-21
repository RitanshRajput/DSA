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



//❓ Question :
//🔘Implementation through code of Binary search:

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start =0 ;
    int end = size -1 ;
    // int mid = (start + end)/2 ;         // Logically this is right but in case of C.P  it might exceed the range of integer which 2^31 - 1
    int mid = start + (end - start)/ 2;    // therefore we created this formula

   while(start<=end){
     if(arr[mid] == key){
        return mid ;
     }

     if(key > arr[mid]){                   //Go to right side (start = middleIndex + 1 ) ➡️
        start = mid + 1;
     }
     else{
        end = mid - 1 ;                   //Go to left side (end = middleIndex - 1)    ⬅️
     }

    //  mid = (start+end) / 2;               // again find middle index, might go wrong in case of CP exceed the integer range 2^31 - 1
     mid = start + (end - start)/2;       // this will properly work even in worst case

   }
   return -1 ;                            //If not found
}

int main(){
  int even[6] = {2, 4, 6, 8, 12, 14}  ;
   int odd[5] = {3, 5, 7, 9, 11} ;

  int index = binarySearch(even, 6, 12); 
  cout<<" Index of 12 is "<< index <<endl ;

  int Oddindex = binarySearch(odd, 5, 20); 
  cout<<" Index of 20 is "<< Oddindex <<endl ;

    return 0;
}


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

