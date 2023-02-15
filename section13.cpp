         /*********🔴🔴🔴 POINTERS in C++     */

//🔸 A pointer is a variable that stores the memory address of an object. 
//   Pointers are used extensively in both C and C++ for three main purposes: 
//  to allocate new objects on the heap,
//  to pass functions to other functions.
//  to iterate over elements in arrays or other data structures.

//🔸Symbol Table :
// It is an important data structure created and maintained by the compiler in order to 
// keep track of semantics of variables i.e: it stores information about the scope and 
// binding information about names, information about instances of various entities such as  
// variables and function names, classes , object, etc.

//🔸As you know every variable is a memory location and
//  every memory location has its address defined which can be accessed
//  using ampersand (&) operator which denotes an address in memory. 
//Consider the following which will print the address of the variables defined −

// #include <iostream>
// using namespace std;

// int main () {
//    int  var1;
//    char var2[10];

//    cout << "Address of var1 variable: ";
//    cout << &var1 << endl;

//    cout << "Address of var2 variable: ";
//    cout << &var2 << endl;

//    return 0;
// }

//🔸When the above code is compiled and executed, it produces the following result −
// Address of var1 variable: 0xbfebd5c0
// Address of var2 variable: 0xbfebd5b6


//🔸 What are Pointers?
// A pointer is a variable whose value is the address of another variable. 
// Like any variable or constant, you must declare a pointer before you can work with it. 
// The general form of a pointer variable declaration is −
//ex: 
//  type *var-name;

// Here, type is the pointer's base type; it must be a valid C++ type and var-name is the name of the pointer variable.
// The asterisk you used to declare a pointer is the same asterisk that you use for multiplication. 
// However, in this statement the asterisk is being used to designate a variable as a pointer. 

//Following are the valid pointer declaration −
// int    *ip;    // pointer to an integer
// double *dp;    // pointer to a double
// float  *fp;    // pointer to a float
// char   *ch     // pointer to character

// The actual data type of the value of all pointers, whether integer, float, character, or otherwise, 
// is the same, a long hexadecimal number that represents a memory address.
// The only difference between pointers of different data types is the data type of the variable or constant that the pointer points to.


//🔸 Using Pointers in C++
// There are few important operations, which we will do with the pointers very frequently. 
// (a) We define a pointer variable. 
// (b) Assign the address of a variable to a pointer.
// (c) Finally access the value at the address available in the pointer variable. 
// This is done by using unary operator * that returns the value of the variable located at the address specified by its operand. 
// Following example makes use of these operations −

// #include <iostream>
// using namespace std;

// int main () {
//    int  var = 20;   // actual variable declaration.
//    int  *ip;        // pointer variable 

//    ip = &var;       // store address of var in pointer variable

//    cout << "Value of var variable: ";
//    cout << var << endl;

//    // print the address stored in ip pointer variable
//    cout << "Address stored in ip variable: ";
//    cout << ip << endl;

//    // access the value at the address available in pointer
//    cout << "Value of *ip variable: ";
//    cout << *ip << endl;

//    return 0;
// }

//🔸When the above code is compiled and executed, it produces result something as follows −
// Value of var variable: 20
// Address stored in ip variable: 0xbfc601ac
// Value of *ip variable: 20


//🔴 Pointers have many but easy concepts and they are very important to C++ programming. There are following few important pointer concepts which should be clear to a C++ programmer −

//🔴 Concept & Description
//1. Null Pointers :
// C++ supports null pointer, which is a constant with a value of zero defined in several standard libraries.

// 2. Pointer Arithmetic:
// There are four arithmetic operators that can be used on pointers: ++, --, +, -

// 3. Pointers vs Arrays:
// There is a close relationship between pointers and arrays.

// 4.Array of Pointers:
// You can define arrays to hold a number of pointers.

// 5.Pointer to Pointer :
// C++ allows you to have pointer on a pointer and so on.

// 6.Passing Pointers to Functions:
// Passing an argument by reference or by address both enable the passed argument to be changed in the calling function by the called function.

// 7.Return Pointer from Functions:
// C++ allows a function to return a pointer to local variable, static variable and dynamically allocated memory as well.


//🔸Implementation :
//🔸 print value of integer and address of that integer:

// #include<iostream>
// using namespace std;

// int main() {

// int num = 5 ;
// cout<< num <<endl ;     // print value of num  output: 5

// cout<< "address of num : "<< &num <<endl ;    //print address of num using & = ampersand
// // output : 0x61ff0c  in hexadecimal format (0-9 a b c d e f)

//     return 0;
// }

//🔸Implementation :
//🔸 store address as value in a pointer :

// #include<iostream>
// using namespace std;

// int main(){

// // // int *ptr ;   // never initialise a pointer like this this is said to be a bad practice
// //  bcoz if we initialise like this and then try to manipulate the the pointer without knowing what address it is pointing it could be dangerous

// int num = 10 ;              // output : 5
// int *ptr = &num ;          // output : 5
// // int  str = &num ;       // error: we cannot assign address of variable to other variable
// // int *str = num ;        // error :we can point to address of any variable ,not the variable itself

// cout<<" &num :"<< &num <<endl ;       //output : 0x61ff08   address itself
// cout<<" &*ptr :"<< &*ptr <<endl ;     //output : 0x61ff08   pointer address itself

// cout<<" num  :"<< num <<endl ;        //output : 5  value of num
// cout<<" *ptr :"<< *ptr <<endl ;       //output : 5  value of num
// cout<<" ptr : "<< ptr <<endl ;        //outout :  0x61ff08  value in pointer ptr is address of num
// // cout<<" str  :"<< str <<endl ;     //output : error
// // cout<<" *str :"<< *str <<endl ;    //output : error

// cout<<"size of integer num : "<<sizeof(num) <<endl ;   // output : size = 4 byte
// cout<<"size of pointer ptr : "<<sizeof(ptr) <<endl ;   // output : size = 4 byte or mostly 8 byte ( size of pointer may vary sometime it takes double the size of integer bcoz it stores address)

//     return 0;
// }

//🔸 & = ampersand means address of variable 
//🔸 * = esterisk means dereference operator (ex: *p = value at address pointed by p)
// let say int *ptr = &num
// int *ptr means ptr is a pointer to integer 

//🔸char *ptr = &ch 
// char *ptr means ptr is a pointer to character

//🔸double *ptr = &d
// double *ptr means ptr is a pointer to double



//🔸Implementation :

// #include<iostream>
// using namespace std ;

// int main() {
// // int *ptr = 0 ;
// // cout<<" *ptr :"<< *ptr <<endl ;    // output: segmentation fault means 0 address does not exist

// // int i= 5;
// // int *p = 0 ;
// // p = &i ;
// // cout<<" p :" << p <<endl ;       //output: 0x61ff08
// // cout<<" *p :" << *p <<endl ;     //output : 5

// // int num = 5 ;
// // int *ptr = &num ;
// // int a = num + 1 ;      // num + 1

// // cout<<" *ptr : "<< *ptr <<endl ;       //output : 5
// // cout<<"  ptr : "<<  ptr <<endl ;       //output : 0x61ff08
// // cout<<"  a   : "<<  a <<endl ;         //output : 6
// // cout<<"  num   : "<<  num <<endl ;     //output : 5

// // int num = 5 ;
// // int *ptr = &num ;
// // int b = num++  ;       // num++ 
// // cout<<" *ptr : "<< *ptr <<endl ;       //output : 6
// // cout<<"  ptr : "<<  ptr <<endl ;       //output : 0x61ff04
// // cout<<"  b   : "<<  b <<endl ;         //output : 5
// // cout<<"  num   : "<<  num <<endl ;     //output : 6


// int num = 6 ;
// int a = num ;
// cout<<" before a++  num : "<< num <<endl ;           //output : 6
// a++ ;
// cout<<" after a++  num : "<< num <<endl ;           //output : 6

// int *p = &num ;
// cout<<"before *p++ :"<< num <<endl ;    //output : 6
// (*p)++ ;
// cout<<"after *p++ :"<< num <<endl ;     //output : 7


//     return 0 ;
// }


//❓ Question :
// copy pointer 

// #include<iostream>
// using namespace std;
// int main() {

// int num = 6;
// int *p = &num ;
// int *q = p ;      //copying a pointer in another pointer
// cout<<" *p and p : "<< *p <<" , "<< p <<endl ;     //output : 6, ox61ff04
// cout<<" *q and q : "<< *q <<" , "<< q <<endl ;     //output : 6, ox61ff04

//     return 0 ;
// }


//🔸 Important :
//  #include<iostream>
// using namespace std;
// int main() {

// int i = 5 ;
// int *ptr = &i ;

// cout<<" before *ptr++ : "<< *ptr <<endl ;   //output : 5
// (*ptr)++  ;
// cout<<" after *ptr++ : "<< *ptr <<endl ;   //output : 6

// cout<<" before ptr++ : "<< ptr <<endl ;   //output : 0x61ff0c  
// (ptr)++  ;
// cout<<" after *ptr++ : "<< ptr <<endl ;   //output : 0x61ff10  address increase by 4 byte bcoz we know that 1 integer takes 4byte of memory so ptr + 1 = ptr + 4byte

// (ptr)++  ;
// cout<<" again after *ptr++ : "<< ptr <<endl ;   //output : 0x61ff14   address increase by 4byte from ff10 to ff14
//     return 0 ;
// }




//🔴🔴 Pointer in array :

// int arr[10] ;   [0|1||2|3|4|5|6|7|8|9]
//🔸So the address of first block of array is the name of that array :
//ex:
// print address of first block of above array :
// ans : arr

//🔸Implementation :

// #include<iostream>
// using namespace std ;
// int main() {

// int arr[10] ;

// cout<<" address of first memory block is : "<<arr<<endl ;    //output: 0x61fee8
//     return 0;
// }


//🔸 Can we use & ampersand to print address of array memory block : yes we can
//🔸Implementation :

// #include<iostream>
// using namespace std ;
// int main() {

// int arr[10] = {0} ;

// cout<<" address of array memory using & ampersand : "<< &arr[0] <<endl ;   //output : 0x61fee8
// cout<<" address of array memory using & ampersand : "<< &arr[1] <<endl ;   //output : 0x61feec
// cout<<" address of array memory using & ampersand : "<< &arr[2] <<endl ;   //output : 0x61fef0


// cout<<" printing value of array : "<<arr[0]<<endl ;                       //output : value = 0
// cout<<" printing address of 1st index of array : "<<arr<<endl ;           //output : address of first index =  0x61fed8
// cout<<" address of array memory using & ampersand : "<< &arr[0] <<endl ;  //output : address using ampersand & = 0x61fee8

//     return 0;
// }



//🔸More practice :  how to print value in array using *pointer 
//🔸Implementation :

// #include<iostream>
// using namespace std;
// int main() {

// int arr[5] = {1, 2, 3, 4 , 5} ;

// // cout<<" printing value using *arr[1] : "<< *arr[1] <<endl ;      //output : error not valid 

// cout<<" printing value using * estrisk pointer of 1st index : "<< *arr <<endl ;  //output : 1 
// cout<<" printing value using *arr + 1 to print 2nd index : "<< *arr + 1 <<endl ;  //output : 2 

// cout<<" printing value using *(arr + 1) : "<< *(arr + 1) <<endl ;    //output : 2
// cout<<" printing value using *(arr + 2) : "<< *(arr + 2) <<endl ;    //output : 3

// cout<<" printing value using *(arr) + 3 : "<< *(arr) + 3 <<endl ;    //output : 4
// cout<<" printing value using *(arr) + 4 : "<< *(arr) + 4 <<endl ;    //output : 5

//     return 0;
// }


//🔸More practice : when we write arr[2] = prints value at index 3, also *(arr + 2) = prints value at index at 3
//  arr[3] = {1, 2, 3}     = suppose address of 1 = 101, 2 = 105, 3 = 109  
//  arr = 101
// *arr = 1
// *(arr + 2) => (101 + 2)   // 2 means 8 bytes  , 1 = 4 byte
//            => (101 + 8byte)  
//            => (109)       
// value at 109 is =>  3


//🔴🔴formula 
//    arr[i] = *(arr + i)
//OR
//    i[arr] = *(i + arr)

// #include<iostream>
// using namespace std;
// int main() {
// int arr[5] = {11, 12, 13, 14, 15} ;
// int i = 3 ;

// cout<<"Using  arr[i] : "<< arr[i] <<endl ;   //output: 14
// cout<<"Using  i[arr] : "<< i[arr] <<endl ;   //output: 14

// cout<<"Using  arr[i] = *(arr + i) : "<< *(arr + 3) <<endl ;   //output: 14
// cout<<"Using  i[arr] = *(i + arr) : "<< *(i + arr) <<endl ;   //output: 14

//     return 0;
// }


//🔘 Differences in pointer/ Arrays :

// size of array block : arr[10]    => 4byte each x 10 memory block =>  size =  40
// size of pointer : *ptr = &arr[0] => 4byte + 4byte  => size =  8 

// #include<iostream>
// using namespace std;
// int main() {

// int arr[10] ;
// cout<<" size of arr  in byte : "<< sizeof(arr) <<endl;      //output : 40     (4byte * 10)
// cout<<" size of *arr  in byte : "<< sizeof(*arr) <<endl;    //output : 4     
// cout<<" size of &arr  in byte : "<< sizeof(&arr) <<endl;    //output : 8      (address stored)      

// int *ptr = &arr[0] ;
// cout<<" size of ptr  in byte : "<< sizeof(ptr) <<endl;    //output : 8      (address stored)
// cout<<" size of *ptr in byte : "<< sizeof(*ptr) <<endl;   //output : 4 
// cout<<" size of &ptr in byte : "<< sizeof(&ptr) <<endl;   //output : 8       (address stored)

//     return 0 ;
// }


//🔸More practice : & ampersand gives address of that variable

// #include<iostream>
// using namespace std ;
// int main() {

// int arr[20]= {1,2,3,4,5} ;
// cout<<" Printing &arr[0] : "<< &arr[0] <<endl ;   //output : 0x61feb0  (adddress of arr[0])
// cout<<" Printing &arr    : "<< &arr <<endl ;      //output : 0x61feb0  (address of arr[0th])
// cout<<" Printing arr     : "<< arr <<endl ;       //output : 0x61feb0  (address of arr[0th])

// int *ptr = &arr[0] ;
// cout<<" Printing ptr  : "<< ptr <<endl ;         //output : 0x61feb0 (address of arr[0th index])
// cout<<" Printing *ptr : "<< *ptr <<endl ;         //output : 1       (value at 0th index)
// cout<<" Printing &ptr : "<< &ptr <<endl ;         //output : 0x61feac (address of ptr)

//     return 0 ;
// }

//🔸More practice : symbol table content cannot be changed :
//ex:  int arr[10] ;
//  arr = arr + 1;   //output : error arr[10] is not assignable

// we can do that with pointer

// #include<iostream>
// using namespace std;
// int main() {

// int arr[10] ;
// //ERROR
// // arr = arr+1 ;   //output : error: incompatible types in assignment of 'int*' to 'int [10]'

// int *ptr = &arr[10] ;
// cout<<" ptr : "<< ptr <<endl ;        //output :  0x61ff0c  (address of arr[0th index])

// ptr = ptr + 1 ;
// cout<<" ptr + 1 : "<< ptr <<endl ;    //output : 0x61ff10  (address of arr[1th index])

//     return 0;
// }


//🔴🔴Pointer in character array :

//🔸cout function for interger array and char array is differently implemented .
//  arr  = cout return address of 0th index
//  char = cout return entire string

// #include<iostream>
// using namespace std;
// int main() {

// int arr[5] = {1,2,3,4,5} ;
// char ch[5] = "abcd" ;

// cout<<" arr : "<< arr <<endl ;        //output :  0x61fefc
// cout<<" ch  : "<< ch <<endl ;        //output :  abcd

// char *ctr = &ch[0] ;
// cout<<" pointer ctr  : "<< ctr <<endl ;     //output : abcd    (entire string)
// cout<<" pointer *ctr : "<< *ctr <<endl ;    //output : 1        (value at ch[0th index])
// cout<<" pointer &ctr : "<< &ctr <<endl ;    //output : 0x61fef0  (address of pointer ctr)

// char temp = 'z' ;
// char *p = &temp ;
// cout<<"  p  : "<< p <<endl ;        //output : z<?a      (bcoz here p couldn't find '\0' null character so it move forward till it found '\0' null character)

// char cha[6] = "abdce" ;
// // char *ptr = "asbke" ;         // Bad practice / Risky / Do not attempt

//     return 0;
// }



//🔴🔴Pointer in function :

// #include<iostream>
// using namespace std;

// void print (int *p) {

//     cout<<"printing value through function using pointer : "<< *p <<endl ;
// }

// void update(int *ptr) {
//     //🔸address updating :
//     // ptr = ptr + 1 ;
//     // cout<<" updating inside update function : "<< ptr <<endl ;  //output :  0x61ff0c  
//     // // only updating the address of update function ptr not the real ptr address

//    //🔸value updating  :
//    *ptr = *ptr + 1 ;
//    cout<< " updating value of *ptr : "<< *ptr <<endl ;  //output : 7
//    // but when we update the value of *ptr in function it reflect in main function too
//    // bcoz we are passing by value

// }

// int main() {

// int value = 5 ;
// int *ptr = &value ;

// print(ptr) ;          //output : 5

// cout<<" before updating adddress of ptr : "<< ptr <<endl ;    //output : 0x61ff08
// update(ptr) ;
// cout<<" after updating adddress of ptr  : "<< ptr <<endl;      //output : 0x61ff08
// // bcoz we are passing by value in void update function and when it is updating 
// // ptr = ptr+1 it is changing address of ptr of that update function not the address of  main function ptr
// // hence after updating it is returning the original ptr address not the update function ptr

// cout<<" before updating value of *ptr : "<< *ptr <<endl ;   //output : 6
// update(ptr) ;
// cout<<" after updating value of *ptr : "<< *ptr <<endl ;   //output : 7
// // When we try to update the *ptr value it updating the value in update function as well as main function .
// // 

//     return 0;
// }


//🔸more practice :
// Benefit of using pointer in function :
// we can send a part of array in function from pointer :
// int arr[5] = {1,2,3,4,5}
// getSum(arr+2, 3)   // here we are sending only (3 , 4, 5) in function as argument

// #include<iostream>
// using namespace std;

// int getSum(int *arr, int n) {
 
//    cout<<" size of paramter arr in function : "<< sizeof(arr) <<endl ;   // output : 4 
//    // bcoz here arr[] is not the showing arr[] in main function it is actually
//    // acting like *arr, so we can write int *arr as a parameter instead of int arr[]

//     int sum = 0;
//     for(int i=0; i<n; i++) {
//         // sum = sum + arr[i]  ;         //output : 65   
//         sum = sum + i[arr]  ;           //output: 65
//     }
//     return sum ;
// }

// int main() {

// int arr[5] = {11, 12, 13, 14, 15} ;
// cout<<"printing sum of all no. in array : "<< getSum(arr, 5) <<endl ;   //output : 65
// cout<<"printing sum of all no. in array : "<< getSum(arr+2, 3) <<endl ;   //output : 42  {13 + 14 + 15}
// cout<<"printing sum of all no. in array : "<< getSum(arr+3, 2) <<endl ;   //output : 29  {14 + 15}


//     return 0;
// }

//🔴 Homework 29/149 1:3:15

