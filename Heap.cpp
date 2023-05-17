
//                     //🔴🔴   Heap    🔴🔴

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

// WE will not consider  0th Index. in this 

//🔴 For 0-based indexing :
// For every Node on ith index there Left child will be found on 
//  (2 * i) index

// For every Node on ith index there right child will be found on 
//  (2 * i + 1) index

// And parent Node will be found on
//  ( i / 2) index

//🔴 For 1-based indexing :
// For every Node on ith index there Left child will be found on 
//  (2 * i + 1) index

// For every Node on ith index there right child will be found on 
//  (2 * i + 2) index





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

//🔴 if 1-based indexing : (int i = n/2 ; i > 0; i--)
//🔴 if 0-based indexing : (int i = n/2-1 ; i >=0; i--)

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
// int left = 2 * i ;              //left = for 0-based indexing = 2* i + 1
// int right = 2*i + 1 ;           //right= for 0-based indexing = 2* i + 2

// if(left <= n && arr[largest] < arr[left]) {  // for 0-based indexing == left < n
//     largest = left ;
// }
// if(right <= n && arr[largest] < arr[right]) { // for 0-based indexing == right < n
//     largest = right ;
// }

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
//🔴 if 1-based indexing : (int i = n/2 ; i > 0; i--)
//🔴 if 0-based indexing : (int i = n/2-1 ; i >=0; i--)
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




//                //❓Question: Kth smallest Element 

// Given an array arr[] and an integer K where K is smaller than size of array, 
// the task is to find the Kth smallest element in the given array. 
// It is given that all array elements are distinct.

// Note :-  l and r denotes the starting and ending index of the array.

// Example 1:

// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Explanation :
// 3rd smallest element in the given 
// array is 7.
// Example 2:

// Input:
// N = 5
// arr[] = 7 10 4 20 15
// K = 4
// Output : 15
// Explanation :
// 4th smallest element in the given 
// array is 15.

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function

//🔴Appraoch 1:
// sort the array
// return arr[k - 1]

// #include<iostream>
// #include<algorithm>
// using namespace std ;

// int kthSmallest(int arr[], int l, int r, int k) {
//    sort(arr, arr+r) ;         // time complexity: O(nlogN)
//    return arr[k-1] ;          // time complexity: O(1)
// }
//🔸Time complexity: O(N log N)



//🔴Approach 2: solve using Heap

//step1:create a max-heap for the first K element
//step2: for rest element ( k ---> n-1th)element, if element < heap.top() then
//   heap.pop() (remove the top element == (maxelement))
//   heap.push() and push the smaller element in the heap
//step3: top of the heap will be our answer

// #include<iostream>
// #include<queue>
// using namespace std;

// int kthSmallest(int arr[], int s, int e, int k) {
//     // create a max-heap === priority_queue 
//     //push first k element in the max-heap
//     priority_queue<int> pq ;

//     for(int i=0; i<k; i++) {
//         pq.push(arr[i]) ;
//     }

//     //step2: for rest element ( k ---> n-1th)element, if element < heap.top() then
//     //   heap.pop() (remove the top element == (maxelement))
//     //   heap.push() and push the smaller element in the heap
//     for(int i=k; i<=e; i++) {
//         if(arr[i] < pq.top()) {
//           pq.pop() ;
//           pq.push(arr[i]) ;
//         }
//     }

//     //step3: return heap->top
//     int ans = pq.top() ;
    
//     return ans;
// }
// in the first loop from 0 to k we are building the maxHeap by insertion which has T.C of O(log n) and for k ele it is O(klogk) .
// In the second loop for rem elements i=k to i=(n-k) we are comparing and insertion will take  O((n-k)logk) .
// Hence overall O(nlogk) .
//🔴Time complexity: O(n log k)
//🔴space complexity: O(K)



//                    //❓Question: Is Binary Tree Heap

// Given a binary tree. The task is to check whether the given tree follows the max heap property or not.
// Note: Properties of a tree to be a max heap - Completeness and Value of node greater than or equal to its child.

// Example 1:

// Input:
//       5
//     /  \
//    2    3
// Output: 1
// Explanation: The given tree follows max-heap property since 5,
// is root and it is greater than both its children.

// Example 2:

// Input:
//        10
//      /   \
//     20   30 
//   /   \
//  40   60
// Output: 0


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// } ;

// // node count function
// int countNode(Node* root) {
//     if(root == NULL){
//         return 0;
//     }
   
//    int ans = 1 + countNode(root -> left) + countNode(root-> right) ;
//    return ans;
// }

// // is complete binary tree function
// bool isCBT(Node* root, int index, int total) {
//     if(root == NULL)
//       return true ;

//     if( index >= total) {
//         return false; 
//     }
//     else{
//         bool left = isCBT(root -> left,  2*index + 1, total) ;
//         bool right = isCBT(root -> right, 2*index+2, total) ;
        
//         return (left && right) ;
//     }
// }

// // max order of the tree function
// bool isMaxOrder(Node* root) {
//     //base case
//     // if leaf node
//     if(root -> left == NULL && root -> right == NULL){
//         return true; 
//     }

//     if(root -> right == NULL) {
//         return (root->data  >  root->left->data) ;
//     }
//     else{
//         bool left = isMaxOrder(root -> left) ;
//         bool right = isMaxOrder(root -> right) ;

//     return ( left && right && 
//     ((root->data > root->left->data) && (root->data > root->right->data))) ;
//     }

// }


// //main function
// bool isHeap(Node* tree) {

//     int index = 0 ;
//     int totalCount = countNode(tree) ;

//     if( isCBT(tree, index, totalCount) && isMaxOrder(tree) ) {
//         return true ;
//     }
//     else{
//         return false;
//     }
// }
//🔴Time complexity: O(N)             // O(N)+O(N)+O(N)
//🔴space complexity: O(N)



//                 //❓Question: Merge Two Binary Max Heaps 

// Given two binary max heaps as arrays, merge the given heaps to form a new max heap.

// Example 1:

// Input  : 
// n = 4 m = 3
// a[] = {10, 5, 6, 2}, 
// b[] = {12, 7, 9}
// Output : 
// {12, 10, 9, 2, 5, 7, 6}
// Explanation :

//                  [10]
//                /      \  
//              [5]      [6]
//             /
//            [2]

//                  [12]
//                /      \  
//              [7]      [9]


//                  [12]
//                /      \  
//              [10]      [9]
//             /    \    /   \
//            [2]   [5] [7]   [6]


// #include<iostream>
// #include<vector>
// using namespace std;

// // heapify function ===>  for 1-based indexing algo
// void heapify(vector<int> &arr, int n, int i) {
//     int largest = i ;
//     int left = 2 * i + 1  ;              //left = for 1-based indexing = 2* i 
//     int right = 2* i + 2 ;           //right= for 1-based indexing = 2* i + 1

//     if(left < n && arr[largest] < arr[left]) {  // for 1-based indexing == left <= n
//         largest = left ;
//     }
//     if(right < n && arr[largest] < arr[right]) { // for 1-based indexing == right <= n
//         largest = right ;
//     }

//     if(largest != i) {
//         swap(arr[largest], arr[i]) ;
//         heapify(arr, n, largest) ;
//     }
// }

// //main function
// vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
//     //  merge both arrray
//     vector<int> ans ;
//     for(auto i:a) {
//         ans.push_back(i) ;
//     }
//     for(auto i:b){
//         ans.push_back(i) ;
//     }

//     // build heap using mergedn array
//     // if 1-based indexing === n/2 -->  >0
//     // if 0-based indexing === n/2-1 --> >=0
//     int size = ans.size() ;
//     for(int i= size/2 - 1; i>=0; i--){
//         heapify(ans, size, i) ;
//     }

//     return ans ;
// }
//🔴Time complexity: O(n logn)
//🔴space complexity: O(m+n)



//                 //❓Question: Minimum Cost of ropes

// There are given N ropes of different lengths, we need to connect these ropes into one rope. 
// The cost to connect two ropes is equal to sum of their lengths. 
// The task is to connect the ropes with minimum cost. 
// Given N size array arr[] contains the lengths of the ropes. 

// Example 1:

// Input:
// n = 4
// arr[] = {4, 3, 2, 6}
// Output: 
// 29

// Explanation:
// We can connect the ropes in following ways.
// 1) First connect ropes of lengths 2 and 3.
// Which makes the array {4, 5, 6}. Cost of
// this operation 2+3 = 5. 
// 2) Now connect ropes of lengths 4 and 5.
// Which makes the array {9, 6}. Cost of
// this operation 4+5 = 9.
// 3) Finally connect the two ropes and all
// ropes have connected. Cost of this 
// operation 9+6 =15
// Total cost for connecting all ropes is 5
// + 9 + 15 = 29. This is the optimized cost
// for connecting ropes. 
// Other ways of connecting ropes would always 
// have same or more cost. For example, if we 
// connect 4 and 6 first (we get three rope of 3,
// 2 and 10), then connect 10 and 3 (we get
// two rope of 13 and 2). Finally we
// connect 13 and 2. Total cost in this way
// is 10 + 13 + 15 = 38.

// Example 2:
// Input:
// n = 5
// arr[] = {4, 2, 7, 6, 9}
// Output: 
// 62 

// Explanation:
// First, connect ropes 4 and 2, which makes
// the array {6,7,6,9}. Cost of
// this operation 4+2 = 6. Next, add ropes 
// 6 and 6, which results in {12,7,9}. 
// Cost of this operation 6+6 = 12.
// Then, add 7 and 9, which makes the array {12,16}. 
// Cost of this operation 7+9 = 16. And
// finally, add these two which gives {28}.
// Hence, the total cost is 6 + 12 + 16 + 
// 28 = 62.


// #include<iostream>
// #include<queue>
// using namespace std ;

// long long minCost(long long arr[], long long n){
    
//     //create a min-heap
//     priority_queue<long long, vector<long long>, greater<long long> > pq ;
   
//    //insert element from array to min-heap
//    for(int i=0; i<n; i++) {
//     pq.push(arr[i]) ;
//    }

//     //calculate cost 
//     long long cost = 0 ;

//     while(pq.size() > 1) {
//         long long a = pq.top() ;
//         pq.pop() ;

//         long long b = pq.top() ;
//         pq.pop() ;

//         long long sum = a + b ;
//         cost += sum ;

//         pq.push(sum) ;
//     }

//     return cost ;
// }
//🔴Time complexity: o(n.logn)
//🔴space complexity:  O(N)


//                   //❓Question: Convert BST to min heap

// Given a binary search tree which is also a complete binary tree.
// The problem is to convert the given BST into a Min Heap with the condition 
// that all the values in the left subtree of a node should be less than 
// all the values in the right subtree of the node.
//  This condition is applied to all the nodes, in the resultant converted Min Heap. 

// Examples: 

// Input:            4
//                 /   \
//                2     6
//              /  \   /  \
//            1   3  5    7

// Output:          1
//                /   \
//               2     5
//             /  \   /  \
//            3   4  6    7 
// Explanation: The given BST has been transformed into a Min Heap. 
// All the nodes in the Min Heap satisfies the given condition, that is,
// values in the left subtree of a node should be less than the values in the right subtree of the node. 

//🔴approach:
// inorder(root, vector<int> in){
//     //base case
//       left call ;
//       insert in vector ;
//       right call ;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left ;
//     Node* right; 

//     Node(int d) {
//         this -> data = d ;
//         this -> left = NULL ;
//         this -> right = NULL ;
//     }
// } ;

// // inorder 
// void inorder(Node* root, vector<int> &in) {
//     //base case
//     if(root == NULL){
//         return ;
//     }

//     inorder(root -> left, in) ;
//     in.push_back(root -> data) ;
//     inorder(root ->right, in) ;
// }

// // preorder 
// void PreOrder(Node* root, vector<int> &ans, int &index, int n){
//     //base case
//     if(root == NULL || index >= n){
//        return ;
//     }
   
//    root -> data = ans[index++] ;
//    PreOrder(root -> left, ans, index, n) ;
//    PreOrder(root -> right, ans, index, n) ;
   
// }

// Node* convertBST(Node* root) {
//     vector<int> ans; 
//     inorder(root, ans) ;

//     int n = ans.size() ;
//     int index = 0 ;
//     preOrder(root, ans, index, n);
//     return root;
// }



//                    //❓Question : Kth largest sum subarrray

//You have been given an array/list of 'N' integers. Now you are supposed to find the K-th largest sum of the subarray.
//  Please note that a subarray is the sequence of consecutive elements of the array.

// Sample Input 1 :
// 2
// 3 3
// 3 -2 5
// 2 2
// 4 1
// Sample output 1 :
// 3
// 4
// Explanation of Sample output 1 :
// For the first test case, 
// Sum of [0, 0] = 3
// Sum of [0, 1] = 1
// Sum of [0, 2] = 6
// Sum of [1, 1] = -2
// Sum of [1, 2] = 3
// Sum of [2, 2] = 5
// All sum of subarrays are {6, 5, 3, 3, 1, -2} where the third largest element is 3.

// For the second test case, 
// Sum of [0, 0] = 4
// Sum of [0, 1] = 5
// Sum of [1, 1] = 1
// All sum of subarrays are {5, 4, 1} where the second largest element is 4.
 
// Sample Input 2 :
// 2
// 4 10
// 5 4 -8 6
// 3 1
// 1 2 3
// Sample output 2 :
// -8
// 6
// Explanation of Sample output 2 :
// For the first test case, among the sum of all the subarray, the tenth-largest sum will be -8.

// For the second test case, among the sum of all the subarray, the largest sum will be 6.

//constraints
// 1 <= T <= 50
// 1 <= N <= 100
// 1 <= K <= (N F (N + 1) ) / 2
//  -1000 <= ARR[i] <= 1000
// Where 'T' is the number of test cases, 'N' is the length of the given array/list, 
//'K' is the given integer and
// ARR[i] denotes the i-th element of the given array/list.
// Time limit: 1 sec

//🔴appraoch 1: 

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int getKthlargest(vector<int> &arr, int k) {

//     vector<int> sumStore ;
//     int n =  arr.size() ;
    
//     for(int i=0; i<n; i++) {
//         int sum = 0 ;

//         for(int j=i; j<n; j++) {
//             sum += arr[j] ;
//             sumStore.push_back(sum) ;
//         }
//     }

//     sort(sumStore.begin(), sumStore.end()) ;

//     return sumStore[sumStore.size() - k] ;

// }
//🔴Time complexity: O(n^2 logn)
//🔴space complexity: O(n^2)


//🔴 Approach 2: Optimised using heap (min-heap)
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// int getKthLargest(vector<int> &arr, int k) {
//     //create min-heap
//    priority_queue<int, vector<int>, greater<int> > mini ;

//    int n = arr.size() ;

//    for(int i=0; i<n; i++) {
//     int sum = 0 ;

//     for(int j=i; j<n; j++){
//         sum += arr[i] ;

//         if(mini.size() < k) {
//             mini.push(sum) ;
//         }
//         else{
//             if(sum > mini.top()) {
//                 mini.pop() ;
//                 mini.push(sum) ;
//             }
//         }
//      }
//    }

//   return mini.top() ;
// }
//🔴time complexity: O(N^2 logK)
//🔴space complexity: O(k)