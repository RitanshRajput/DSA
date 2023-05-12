
//                     //🔴🔴   Heap    🔴🔴

// A Heap is a special Tree-based data structure in which the tree is a complete binary tree.

//                [10]                              [100]
//              /      \                          /       \ 
//           [15]      [30]                    [40]       [50]
//         /     \    /     \                /     \     /    \   
//      [40]   [50]  [100]  [40]           [10]   [15]  [50]  [40]
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

//🔴 Characteristics of Heap:
// Heap has the following characteristics:
//🔸The system assigns a unique heap identifier to each heap within the activation group. 
//   The heap identifier for the default heap is always zero. 
//   A storage management-bindable API, called by a program or procedure,
//   uses the heap identifier to identify the heap on which it is to act. 
//   The bindable API must run within the activation group that owns the heap.
//🔸The size of a heap is dynamically extended to satisfy allocation requests.
//   The maximum size of the heap is (4GB – 512KB). 
//   This is the maximum heap size if the total number of allocations (at any one time) does not exceed 128 000.
//🔸The maximum size of any single allocation from a heap is limited to (16MB – 64KB).


//🔴 Operations Supported by Heap:

// Operations supported by min – heap and max – heap are same. 
// The difference is just that min-heap contains minimum element at root of the tree 
// and max – heap contains maximum element at the root of the tree.

//🔸Heapify:
// It is the process to rearrange the elements to maintain the property of heap data structure.
// It is done when a certain node creates an imbalance in the heap due to some operations on that node.
//  It takes O(log N) to balance the tree. 
// For max-heap, it balances in such a way that the maximum element is the root of that binary tree and 
// For min-heap, it balances in such a way that the minimum element is the root of that binary tree.

//🔸Insertion:
// If we insert a new element into the heap since we are adding a new element into the heap so it will distort the properties of the heap so we need to perform the heapify operation so that it maintains the property of the heap.
// This operation also takes O(logN) time.

// Examples:
// Assume initially heap(taking max-heap) is as follows

//           8
//         /   \
//        4     5
//       / \
//      1   2

// Now if we insert 10 into the heap
//            8
//         /     \
//        4       5
//      /  \      /
//     1    2    10 

// After heapify operation final heap will be look like this
//            10
//          /    \
//         4      8
//        /  \    /
//       1    2   5


//🔸Deletion:
// If we delete the element from the heap it always deletes the root element of the tree and replaces it with the last element of the tree.
// Since we delete the root element from the heap it will distort the properties of the heap so we need to perform heapify operations so that it maintains the property of the heap. 
// It takes O(logN) time.

// Example:

// Assume initially heap(taking max-heap) is as follows
//            15
//          /   \
//         5     7
//       /  \
//      2    3

// Now if we delete 15 into the heap it will be replaced by leaf node of the tree for temporary.
//            3
//          /   \
//         5     7
//        /    
//       2

// After heapify operation final heap will be look like this
//           7
//         /   \
//        5     3
//       /   
//      2

//🔸 getMax (For max-heap) or getMin (For min-heap):
// It finds the maximum element or minimum element for max-heap and min-heap respectively 
// and as we know minimum and maximum elements will always be the root node itself for min-heap and max-heap respectively. 
// It takes O(1) time.

//🔸removeMin or removeMax:
// This operation returns and deletes the maximum element and minimum element from the max-heap and min-heap respectively. 
// In short, it deletes the root element of the heap binary tree.


//🔴Applications of Heap Data Structure:
//🔸Priority Queues: Priority queues can be efficiently implemented using Binary Heap 
//   because it supports insert(), delete() and extractmax(), decreaseKey() operations in O(log N) time. 
//🔸Binomial Heap and Fibonacci Heap :  are variations of Binary Heap. 
//   These variations perform union also in O(log N) time which is an O(N) operation in Binary Heap.
//🔸Order statistics: The Heap data structure can be used to efficiently find the kth smallest (or largest) element in an array. 
//   You can see this gfg article to know more about the kth smallest or largest element.

//🔸Advantages of Heaps:
// Fast access to maximum/minimum element (O(1))
// Efficient Insertion and Deletion operations (O(log n))
// Flexible size
// Can be efficiently implemented as an array
// Suitable for real-time applications

//🔸Disadvantages of Heaps:
// Not suitable for searching for an element other than maximum/minimum (O(n) in worst case)
// Extra memory overhead to maintain heap structure
// Slower than other data structures like arrays and linked lists for non-priority queue operations.


//❓What is heap:
// Heap is a complete Binary Tree 
// That comes with a heap order property (Max-heap) and (Min-heap)

//❓WHat is CBT (complete binary tree) :
// A complete binary tree is a binary tree where nodes are filled in from left to right.
// In a complete binary tree: Every level except the last one is full. 
// The last level's nodes are as far left as possible.

//         [1]                          [1]
//       /     \                      /     \ 
//     [2]      [3]                  [2]     [3]
//    /   \    /   \                /   \    / 
//   [4]  [5] [6]  [7]             [4]  [5] [6]

//                  Complete binary Tree


//                 [1]
//               /     \ 
//             [2]     [3]
//            /   \      \  
//          [4]  [5]     [6]
//       
//          Not a complete Binary Tree



//                   //🔴Insertion in Heap :

// Taking Max-heap 
//                 [60]
//               /     \ 
//             [50]     [40]
//            /   \       
//          [30]  [20]     

// We will implement insertion in Heap using Array 
//         [x  | 60 | 50 | 40 | 30 | 20 ]
//          0    1    2    3    4    5        

// WE will not consider  0th Index.

// For every Node on ith index there Left child will be found on 
//  (2 * i) index

// For every Node on ith index there right child will be found on 
//  (2 * i + 1) index

// And parent Node will be found on
//  ( i / 2) index


// 🔸steps:
// 1. Insert at the end (of the array and tree)
// 2. Take that element to its correct position
//    means compare that element to its parent element if the inserted 
//    element is greater than its parent element then swap both nodes


//🔴Insertion Implementation:

// #include<iostream>
// using namespace std;

// class heap{
//    public:
//    int arr[100] ;
//    int size ;

// // heap initialise data structure function
//    heap(){
//       arr[0] = -1 ;
//       size = 0 ;
//    }

// // insertion function
//    void insert(int val) {
//       size = size + 1 ;
//       int index = size ;
//       arr[index] = val ;

//       while(index > 1) {
//         int parent = index / 2;

//         if(arr[parent] < arr[index]) {
//             swap(arr[parent], arr[index]) ;
//             index = parent;
//         }
//         else{
//             return ;
//         }
//       }  
//    }

// // traverse / print function
//    void print(){
//     for(int i=1; i<=size; i++) {
//         cout<< arr[i] << " " ;
//     }
//     cout<<endl ;
//    }

// } ;


// //driver code
// int main() {

// heap h ;
// h.insert(50) ;
// h.insert(55) ;
// h.insert(53) ;
// h.insert(52) ;
// h.insert(54) ;

// h.print() ;
// //output: 55 54 53 50 52
// //                 [55]
// //               /     \ 
// //             [54]     [53]
// //            /   \        
// //          [50]  [52] 

//     return 0;
// }

//🔴Time complexity: O(log N)   // bcoz everytime we are inserting an element we are comparing it with its previous nodes




//                    //🔴Deletion in heap :

//                 [55]
//               /     \ 
//             [54]    [53]
//            /   \ 
//         [50]   [52]


// steps:
// 1. put/swap  root/parent node with the last node
//                 [52]....... 
//               /     \     |
//             [54]    [53]  | 
//            /   \          |
//         [50]   [55]........


// 2. Remove last node
//                 [52] 
//               /     \     
//             [54]    [53]  
//            /             
//         [50]   

// 3. propagate root node to its correct position
//                 [54] 
//               /     \     
//             [52]    [53]  
//            /             
//         [50]

//🔴Deletion implementation:
// #include<iostream>
// using namespace std;

// class heap{
//    public:
//    int arr[100] ;
//    int size ;

//    heap() {
//     arr[0] = -1 ;
//     size = 0 ;
//    }

// // insertion code
//     void insert(int val) {
//         size = size + 1;
//         int index = size ;
//         arr[index] = val ;

//         while(index > 1) {
//             int parent = index / 2 ;

//             if( arr[parent] < arr[index]) {
//                 swap(arr[parent], arr[index]) ;
//                 index = parent;
//             }
//             else{
//                 return ;
//             }
//         }
//     }

// //print code
//     void print() {
//         for(int i=1 ; i<=size; i++) {
//             cout<< arr[i] << " " ;
//         }
//         cout<<endl ;
//     }

// //🔸deletion function 
//   void deleteFromHeap() {
//     if(size == 0) {
//         cout<< " Nothing to delete"<< endl ;
//         return;
//     }
//     //step1: put last element into first position
//     arr[1] = arr[size] ;

//     //step2: remove last element 
//     size-- ;
    
//     //step3: take root node to its correct position
//     int i = 1;
//     while(i < size) {
//         int leftIndex = 2 * i ;
//         int rightIndex = 2 * i + 1 ;

//         if(leftIndex < size && arr[i] < arr[leftIndex]) {
//             swap(arr[i], arr[leftIndex]) ;
//             i = leftIndex ;
//         }
//         else if(rightIndex < size && arr[i] < arr[rightIndex]) {
//             swap(arr[i], arr[rightIndex]) ;
//             i = rightIndex ;
//         }
//         else{
//             return ;
//         }
//     }
//   }


// } ;

// //driver code
// int main() {

// heap h ;
// h.insert(50) ;
// h.insert(55) ;
// h.insert(53) ;
// h.insert(52) ;
// h.insert(54) ;

// h.print() ;
// //output: 55 54 53 50 52
// //                 [55]
// //               /     \ 
// //             [54]     [53]
// //            /   \        
// //          [50]  [52] 

// h.deleteFromHeap() ;

// h.print() ;
// //output:  54 52 53 50
// //                 [54]
// //               /     \ 
// //             [52]     [53]
// //            /           
// //          [50]  

//     return 0;
// }
//🔴Time complexity: O(log N)


// //🔸Modified deletion function  :
//   void deleteFromHeap() {
//     if(size == 0) {
//         cout<< " Nothing to delete"<< endl ;
//         return;
//     }
//     //step1: put last element into first position
//     arr[1] = arr[size] ;

//     //step2: remove last element 
//     size-- ;
    
//     //step3: take root node to its correct position
//     int i = 1;
//     while(i < size) {
//         int leftIndex = 2 * i ;
//         int rightIndex = 2 * i + 1 ;

//         if(leftIndex <= size && rightIndex <= size){
//            if (arr[leftIndex] > arr[rightIndex] && arr[leftIndex] > arr[i]){
//             swap(arr[leftIndex],arr[i]);
//             i = leftIndex;
//           }
//           else if(arr[leftIndex] < arr[rightIndex] && arr[rightIndex] > arr[i]){
//             swap(arr[rightIndex],arr[i]);
//             i=rightIndex;
//           }
//           else{
//             return;
//           }   
//        }
//        else if(leftIndex <= size && arr[leftIndex] > arr[i]){
//         swap(arr[leftIndex],arr[i]);
//         i=leftIndex; 
//        }
//        else if(rightIndex <= size && arr[rightIndex] > arr[i]){
//         swap(arr[rightIndex],arr[i]);
//         i=rightIndex;
//        }
//        else{
//         return;
//       }
//     }
//   }




//                      //🔴🔴Heapify Algo:

//  In Complete binary tree leaf Node lies from:
//   (n/2 + 1)  --> nth index 

// input: 
//         [x  | 54 | 53 | 55 | 52 | 50 ]
//          0    1    2    3    4    5   

//                 [54] 1th
//               /     \ 
//         2th [53]     [55] 3rd
//            /   \         
//      4th [52]   [50] 5th

//  N == 5  (total size of array)
//  Leaf Node ==> (N/2 + 1) --> Nth index
//            ==> (5/2 + 1) --> 5
//            ==> (2 + 1)  --> 5
//            ==>  3 ---->  5          
//so leaf node lies from 3rd index to 5th index

//🔸So if we see carefully all the leaf node are already processed so 
//  if we are trying to process from 1th --> nth index 
//  then we can skip the leaf node part as they are already processed

//🔸 Which means we can process from  1th ---> (n/2) index
//    processed means to rearrange all the element to ther correct position

//🔸heapify helps to rearrange a certain element in the heap to its correct position


//🔴Heapify Implementation:

// #include<iostream>
// using namespace std;

// class heap{
//    public:
//    int arr[100] ;
//    int size ;

//    heap() {
//     arr[0] = -1 ;
//     size = 0 ;
//    }

// // insertion code
//     void insert(int val) {
//         size = size + 1;
//         int index = size ;
//         arr[index] = val ;

//         while(index > 1) {
//             int parent = index / 2 ;

//             if( arr[parent] < arr[index]) {
//                 swap(arr[parent], arr[index]) ;
//                 index = parent;
//             }
//             else{
//                 return ;
//             }
//         }
//     }

// //print code
//     void print() {
//         for(int i=1 ; i<=size; i++) {
//             cout<< arr[i] << " " ;
//         }
//         cout<<endl ;
//     }

// //deletion function 
//   void deleteFromHeap() {
//     if(size == 0) {
//         cout<< " Nothing to delete"<< endl ;
//         return;
//     }
//     //step1: put last element into first position
//     arr[1] = arr[size] ;

//     //step2: remove last element 
//     size-- ;
    
//     //step3: take root node to its correct position
//     int i = 1;
//     while(i < size) {
//         int leftIndex = 2 * i ;
//         int rightIndex = 2 * i + 1 ;

//         if(leftIndex <= size && rightIndex <= size){
//            if (arr[leftIndex] > arr[rightIndex] && arr[leftIndex] > arr[i]){
//             swap(arr[leftIndex],arr[i]);
//             i = leftIndex;
//           }
//           else if(arr[leftIndex] < arr[rightIndex] && arr[rightIndex] > arr[i]){
//             swap(arr[rightIndex],arr[i]);
//             i=rightIndex;
//           }
//           else{
//             return;
//           }   
//        }
//        else if(leftIndex <= size && arr[leftIndex] > arr[i]){
//         swap(arr[leftIndex],arr[i]);
//         i=leftIndex; 
//        }
//        else if(rightIndex <= size && arr[rightIndex] > arr[i]){
//         swap(arr[rightIndex],arr[i]);
//         i=rightIndex;
//        }
//        else{
//         return;
//       }
//     }
//   }

// } ;


// //🔸Heapify function: for max heap
//  void heapify(int arr[], int n, int i) {

//     int largest = i;
//     int left = 2 * i ;
//     int right = 2 * i + 1;

//     if( left <= n && arr[largest] < arr[left] ) {
//         largest = left ;
//     }
//     if( right <= n && arr[largest] < arr[right]) {
//         largest = right ;
//     }

//     if(largest != i) {
//         swap(arr[largest],arr[i]) ;
//         heapify(arr, n, largest) ;
//     }
//  }
//  //🔴heapify function time complexity: O(Log N)

// //driver code
// int main() {

// heap h ;
// h.insert(50) ;
// h.insert(55) ;
// h.insert(53) ;
// h.insert(52) ;
// h.insert(54) ;
// h.print() ;

// h.deleteFromHeap() ;
// h.print() ;



// int arr[6] = {-1, 54, 53, 55, 52, 50} ;
// //        [54]
// //       /    \
// //     [53]   [55]
// //    /    \ 
// //   [52]  [50]
// int n = 5 ;
// for(int i=n/2; i>0; i--) {
//     heapify(arr, n, i) ;
// }
//  //🔴heapify Time complexity using inside iteration: O(N)

// cout<<" printing the heapified array : "<<endl ;

// for(int i=1; i<=n; i++){
//     cout<< arr[i] <<" " ;
// }
// cout<<endl ;
// //output: 55 53 64 52 50
// //        [55]
// //       /    \
// //     [53]   [54]
// //    /    \ 
// //   [52]  [50]


//     return 0;
// }



//                     //❓Question: Build Min-heap

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



//                     //🔴🔴Heap Sort : Max-heap

// input: 
//         [x  | 70 | 60 | 55 | 45 | 50 ]
//          0    1    2    3    4    5   

//                 [70]
//               /     \ 
//             [60]     [55] 
//            /   \         
//         [45]   [50] 

//🔸 algo :
//step1: swap first element with the last element
//step2: size-- decrement
//step3: put root node to its correct position

//🔴Heap sort : algorithm
// #include<iostream>
// using namespace std;

// class heap{
//    public:
//    int arr[100] ;
//    int size ;

//    heap() {
//     arr[0] = -1 ;
//     size = 0 ;
//    }

// // insertion code
//     void insert(int val) {
//         size = size + 1;
//         int index = size ;
//         arr[index] = val ;

//         while(index > 1) {
//             int parent = index / 2 ;

//             if( arr[parent] < arr[index]) {
//                 swap(arr[parent], arr[index]) ;
//                 index = parent;
//             }
//             else{
//                 return ;
//             }
//         }
//     }

// //print code
//     void print() {
//         for(int i=1 ; i<=size; i++) {
//             cout<< arr[i] << " " ;
//         }
//         cout<<endl ;
//     }

// //deletion function 
//   void deleteFromHeap() {
//     if(size == 0) {
//         cout<< " Nothing to delete"<< endl ;
//         return;
//     }
//     //step1: put last element into first position
//     arr[1] = arr[size] ;

//     //step2: remove last element 
//     size-- ;
    
//     //step3: take root node to its correct position
//     int i = 1;
//     while(i < size) {
//         int leftIndex = 2 * i ;
//         int rightIndex = 2 * i + 1 ;

//         if(leftIndex <= size && rightIndex <= size){
//            if (arr[leftIndex] > arr[rightIndex] && arr[leftIndex] > arr[i]){
//             swap(arr[leftIndex],arr[i]);
//             i = leftIndex;
//           }
//           else if(arr[leftIndex] < arr[rightIndex] && arr[rightIndex] > arr[i]){
//             swap(arr[rightIndex],arr[i]);
//             i=rightIndex;
//           }
//           else{
//             return;
//           }   
//        }
//        else if(leftIndex <= size && arr[leftIndex] > arr[i]){
//         swap(arr[leftIndex],arr[i]);
//         i=leftIndex; 
//        }
//        else if(rightIndex <= size && arr[rightIndex] > arr[i]){
//         swap(arr[rightIndex],arr[i]);
//         i=rightIndex;
//        }
//        else{
//         return;
//       }
//     }
//   }

// } ;


// //Heapify function: for max heap
//  void heapify(int arr[], int n, int i) {

//     int largest = i;
//     int left = 2 * i ;
//     int right = 2 * i + 1;

//     if( left <= n && arr[largest] < arr[left] ) { // indexing start from 1 therefore left <= n
//         largest = left ;
//     }
//     if( right <= n && arr[largest] < arr[right]) { // indexing start from 1 therefore right <= n
//         largest = right ;
//     }

//     if(largest != i) {
//         swap(arr[largest],arr[i]) ;
//         heapify(arr, n, largest) ;
//     }
// }

// //🔴Heap Sort : algorithm
// void heapSort(int arr[], int n) {
//     int size = n ;
//     while( size > 1) {
//         //step 1: swap
//         swap(arr[size], arr[1]) ;

//         //step2: decrement size--
//         size-- ;

//         //step3: put root element to its correct position
//         heapify(arr, size, 1);
//     }
// }


// //driver code
// int main() {

// heap h ;
// h.insert(50) ;
// h.insert(55) ;
// h.insert(53) ;
// h.insert(52) ;
// h.insert(54) ;
// h.print() ;

// h.deleteFromHeap() ;
// h.print() ;


// // Heap Creation:
// int arr[6] = {-1, 54, 53, 55, 52, 50} ;
// int n = 5 ;
// for(int i=n/2; i>0; i--) {
//     heapify(arr, n, i) ;
// }

// cout<<" printing the heapified array : "<<endl ;

// for(int i=1; i<=n; i++){
//     cout<< arr[i] <<" " ;
// }
// cout<<endl ;


// // heap sort:
// heapSort(arr, n) ;

// cout<<" printing the Heap sort output: "<<endl ;

// for(int i=1; i<=n; i++){
//     cout<< arr[i] <<" " ;
// }
// cout<<endl ;

//     return 0;
// }
// Heap sort
//🔴Time complexity: O(nLogN)



//               //🔴Build In Max-heap and Min-heap function in STL
 
// #include<iostream>
// #include<queue>           //import through
// using namespace std ;

// int main() {

//     //Max-heap
//     priority_queue<int> pq ;
     
//     pq.push(4) ;
//     pq.push(2) ;
//     pq.push(5) ;
//     pq.push(3) ;

//  cout<<" priority queue (max-heap) size : "<< pq.size() <<endl ;   //output: 4
//  cout<<" priority queue (max-heap) top : "<< pq.top() <<endl;       //output: 5

//    pq.pop() ;

//  cout<<" priority queue (max-heap) top : "<< pq.top() <<endl;       //output: 4


//     //  Min-heap
//     priority_queue<int, vector<int>, greater<int> > minheap ;

//     minheap.push(4) ;
//     minheap.push(2) ;
//     minheap.push(5) ;
//     minheap.push(3) ;
  
//  cout<<" priority queue (min-heap) size : "<< minheap.size() <<endl ;   //output: 4
//  cout<<" priority queue (min-heap) top : "<< minheap.top() <<endl;       //output: 2

//    minheap.pop() ;

//  cout<<" priority queue (min-heap) top : "<< minheap.top() <<endl;       //output: 3


// return 0;
// }


// 81/149