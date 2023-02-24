           //🔴🔴Refrence Variable
// 🔸A reference variable is one that refers to the address of another variable. 
// It represents the name of another variable, location, or value. 
// Once you initialize the variable references, that variable will be referred to using the variable name or reference name

//🔴 Pass By Value :
//🔸When you use pass-by-value, the compiler copies the value of an argument in a calling function
//  to a corresponding non-pointer or non-reference parameter in the called function definition.
//  The parameter in the called function is initialized with the value of the passed argument.

//🔸Implentation :

// #include<iostream>
// using namespace std ;
// int update(int n){          // passing by value (n) creating a copy of n variable 
//     n++ ;
// }
// int main() {
//  int n = 2;
//  cout<< "before : "<< n << endl ;      //output :  2
//  update(n) ;
//  cout<< "after : "<< n << endl ;      //output :  2

//     return 0;
// }


//🔸More practice :
// #include<iostream>
// using namespace std ;
// int update(int n){
//     n++ ;
//     return n ;
// }
// int main() {
//  int n = 2;
//  cout<< "before : "<< n << endl ;      //output :  2
//  update(n) ;
//  cout<< "after : "<< n << endl ;      //output :  2

//     return 0;
// }



//🔴 Pass by Reference :
//🔸 Pass-by-reference means to pass the reference of an argument in the calling function
//   to the corresponding formal parameter of the called function. 
//   The called function can modify the value of the argument by using its reference passed in.

//🔸Implementation :

// #include<iostream>
// using namespace std;

// int update(int& n){      // passing by reference( &n) address of n 
//     n++ ;
// }
// int main() {

// int n = 2 ;

// cout<< " before : "<< n <<endl ;  //output : 2
// update(n) ;
// cout<< " after : "<< n <<endl ;  //output : 3

//     return 0 ;
// }


//🔸More practice :

// #include<iostream>
// using namespace std;

// int update(int& n){      // passing by reference( &n) address of n 
//     n++ ;
//     return n ;
// }
// int main() {

// int n = 2 ;

// cout<< " before : "<< n <<endl ;  //output : 2
// update(n) ;
// cout<< " after : "<< n <<endl ;  //output : 3

//     return 0 ;
// }




                         // 🔴Bad practice in Array :

// Never make array size of a variable  :
//ex:

//  int n ;
//  cin >> n ;

//  int arr[n] ;      //🔸Bad Practice , assigning a variable as a size of array :

// why : bcoz when we assign a dynamic variable as a size if array then the 
// value of variable n will be assign in runtime execution and best practice says that
// we must declare array[size] at beginning in compile time execution.
// bcoz when we create a program then two things created in memory 1) stack 2) heap
// so suppose we create a arr of size n which is yet to get the value, the stack at the time might 
//  be created in low memory or it might has less memory, and after runtime when variable n will the 
// get the value and if that value turn out to taking more space than stack which is been already created 
// it will crash the program .

                          //🔴Dynamic Memory Allocation :

// ❓ SO what if we want to use a variable as array size (Array[size]) ;
// We will use space from Heap to assign variable dymamically: 
// And Whenever we want to create anything in the heap 
// 🔴 we use  'NEW'  keyword 

//🔴 When we create something using stack then it is called Static Allocation 
//🔴 When we create something using Heap then it is called Dynamic Memory Allocation 

// So whenever we create a variable in Heap we cannot assign value directly in it 
/// and Also cannot name it :
//ex : new char ;  new int ; 
// So how to assign value in it: Using Pointer 
//ex : char* ch = new char;  int* ptr = new int ;

// How memory is allocated in above declaration : 
//ex : char* ch = new char ;

//        STACK                                HEAP
//       _______________            ___________________________________
//      |               |          |                                  |
//      |ch[add of char]|          |         char[]                   |
//      |_______________|          |                                  |
//                                 |__________________________________|

// here pointer *ch  = will access char from heap :
// it will take total of 9byte, pointer *ch = 8byte, char = 1byte  , 8byte in 64 bit system
// it will take total of 5byte, pointer *ch = 4byte, char = 1byte  , 4byte in 32 bit system

// #include<iostream>
// using namespace std ;
// int main(){

// char ch = 'q' ;
// cout<<" size of ch : "<< sizeof(ch) <<endl ;   // output : 1

// char* c = &ch ;
// cout<<" size of ch : "<< sizeof(c) <<endl ;    //output : 4

//  return 0;   
// }

// #include<iostream>
// using namespace std ;
// int main(){

// int a = 1 ;
// cout<<" size of ch : "<< sizeof(a) <<endl ;   // output : 4  

// int* ptr = &a ;
// cout<<" size of ch : "<< sizeof(ptr) <<endl ;    //output : 4  , 8 in 64 bit system

//  return 0;   
// }


//🔴 Stack Allocation:
//  The allocation happens on contiguous blocks of memory. 
//  We call it a stack memory allocation because the allocation happens in the function call stack. 
//  The size of memory to be allocated is known to the compiler and whenever a function is called, its variables get memory allocated on the stack.
//  And whenever the function call is over, the memory for the variables is de-allocated. This all happens using some predefined routines in the compiler. 
//  A programmer does not have to worry about memory allocation and de-allocation of stack variables. This kind of memory allocation is also known as Temporary memory allocation 
//  because as soon as the method finishes its execution all the data belonging to that method flushes out from the stack automatically.
//  This means any value stored in the stack memory scheme is accessible as long as the method hasn’t completed its execution and is currently in a running state.

//🔸Key Points:

// It’s a temporary memory allocation scheme where the data members are accessible only if the method( ) that contained them is currently running.
// It allocates or de-allocates the memory automatically as soon as the corresponding method completes its execution.
// We receive the corresponding error Java. lang. StackOverFlowError by JVM, If the stack memory is filled completely.
// Stack memory allocation is considered safer as compared to heap memory allocation because the data stored can only be accessed by the owner thread.
// Memory allocation and de-allocation are faster as compared to Heap-memory allocation.
// Stack memory has less storage space as compared to Heap-memory.

// int main()
// {
//    // All these variables get memory
//    // allocated on stack
//    int a;
//    int b[10];
//    int n = 20;
//    int c[n];
// }



//🔴 Heap Allocation: 
// The memory is allocated during the execution of instructions written by programmers. 
// Note that the name heap has nothing to do with the heap data structure. 
// It is called a heap because it is a pile of memory space available to programmers to allocate and de-allocate. 
// Every time when we made an object it always creates in Heap-space and the referencing information to these objects is always stored in Stack-memory. 
// Heap memory allocation isn’t as safe as Stack memory allocation because the data stored in this space is accessible or visible to all threads. 
// If a programmer does not handle this memory well, a memory leak can happen in the program.

//🔸The Heap-memory allocation is further divided into three categories:- 
// These three categories help us to prioritize the data(Objects) to be stored in the Heap-memory or in the Garbage collection.

// Young Generation – 
// It’s the portion of the memory where all the new data(objects) are made to allocate the space and whenever 
// this memory is completely filled then the rest of the data is stored in Garbage collection.

// Old or Tenured Generation –
// This is the part of Heap-memory that contains the older data objects that are not in frequent use or not in use at all are placed.

// Permanent Generation – 
// This is the portion of Heap-memory that contains the JVM’s metadata for the runtime classes and application methods.

// Key Points:
// We receive the corresponding error message if Heap-space is entirely full,  java. lang.OutOfMemoryError by JVM.
// This memory allocation scheme is different from the Stack-space allocation, here no automatic de-allocation feature is provided. We need to use a Garbage collector to remove the old unused objects in order to use the memory efficiently.
// The processing time(Accessing time) of this memory is quite slow as compared to Stack-memory.
// Heap memory is also not as threaded-safe as Stack-memory because data stored in Heap-memory are visible to all threads.
// The size of the Heap-memory is quite larger as compared to the Stack-memory.
// Heap memory is accessible or exists as long as the whole application(or java program) runs.

// int main()
// {
//    // This memory for 10 integers
//    // is allocated on heap.
//    int *ptr  = new int[10];
// }


// ❓ How to allocate a array using dynamic memory allocation :
// #include<iostream>
// using namespace std ;

// int Sum(int* arr, int n) {       // function for sum of array elements
//     int sum = 0 ;
//     for(int i=0 ; i<n ; i++){
//         sum += arr[i] ;
//     }

//     return sum ;
// }

// int main() {

// // variable to assign Size of array :
//  int n;
//  cout<<" enter size :" <<endl ;
//  cin>> n ;

// // assigning new array in heap memory and accessing through pointer *arr:
//  int *arr = new int[n] ;      // here size is assign in array which is in heap

// // taking array input:
// cout<<" enter "  << n << " array element : " <<endl ;
//  for(int i=0; i<n; i++ ){
//     cin>> arr[i] ;
//  }

// int ans = Sum(arr,n) ;

// cout<<" answer is  : "<< ans <<endl ;

// return 0;
// }


//🔴 When we create a varaible/rray in Static memory (STACK) is automatically delete that array/variable after execution is complete
//🔴 But when we create array/variable Dynamic Memory (HEAP) it does not get deleted automatically we have to manually delete that variable/array from HEAP .
//🔸 How to delete a Dymanic variable/ or variable assign in HEap
//  using "DELETE" keyword

//ex: int* a = new int ;     // created a variable in HEAP
//   delete a;              // deleted that variable using DELETE keyword

//🔸How to delete an array from HEAP:

//ex: int* arr = new int[n] ;    //created a array of size n in HEAP
//    delete []arr ;             // deleted that array using [] after DELETE keyword to let the system know delete whole array


//🔴 CodeStudio Dynamic Memory Reference: https://bit.ly/3ewm1TF
///🔴H/w : void pointer  
///🔴H/w : address typecasting