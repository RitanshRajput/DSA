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

// Following are the valid pointer declaration −
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


//🔴 Pointers have many but easy concepts and they are very important to C++ programming.
//   There are following few important pointer concepts which should be clear to a C++ programmer −

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


// 🔸 Important :
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

// int arr[10] = {1} ;
// //ERROR
// // arr = arr+1 ;   //output : error: incompatible types in assignment of 'int*' to 'int [10]'

// int *ptr = &arr[0] ;
// cout<<" ptr : "<< ptr <<endl ;        //output :  0x61ff0c  (address of arr[0th index])
// cout<<"*prt " << *ptr <<endl ;

// ptr = ptr + 1 ;
// cout<<" ptr + 1 : "<< ptr <<endl ;    //output : 0x61ff10  (address of arr[1th index])
// cout<<"*prt " << *ptr <<endl ;

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
// cout<<" pointer *ctr : "<< *ctr <<endl ;    //output : a        (value at ch[0th index])
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

// int *ptr = arr;
// cout<< "ptr:" <<sizeof(ptr)<< endl;       //output: 4

// cout<<"printing sum of all no. in array : "<< getSum(arr, 5) <<endl ;   //output : 65
// cout<<"printing sum of all no. in array : "<< getSum(arr+2, 3) <<endl ;   //output : 42  {13 + 14 + 15}
// cout<<"printing sum of all no. in array : "<< getSum(arr+3, 2) <<endl ;   //output : 29  {14 + 15}


//     return 0;
// }



//                    //🔴🔴Double Pointer:

//🔸 when we define a pointer to a pointer, the first pointer is used to store the address of the variables,
//   and the second pointer stores the address of the first pointer.
//   For this very reason, this is known as a Double Pointer or Pointer to Pointer.

//ex:
//  int a = 5 ;
//  int* ptr = &a ;            //pointer      (ptr = address of a)
//  int** ptr2 = &ptr ;        //double Pointer  (ptr2 = address of ptr)
//  int*** ptr3 = &ptr2 ;      //Level three pointer  (ptr3 = address of ptr2)


//🔸Implementation :
// #include<iostream>
// using namespace std ;
// int main() {

// int a = 5 ;
// int* ptr = &a ;
// int** ptr2 = &ptr ;


// cout<<"value at i : "<< a <<endl ;             //output : 5
// cout<<"value at i : "<< *ptr <<endl ;          //output : 5
// cout<<"value at i : "<< **ptr2 <<endl ;        //output : 5

// cout<<"address of i : "<< &a <<endl ;          //output : 0x61ff0c
// cout<<"address of i : "<< ptr <<endl ;         //output : 0x61ff0c
// cout<<"address of i : "<< *ptr2 <<endl ;       //output : 0x61ff0c

// cout<<"address of ptr : "<< &ptr <<endl ;      //output : 0x61ff08
// cout<<"address of ptr : "<< ptr2 <<endl ;      //output : 0x61ff08

// cout<<"address of ptr2 : "<< &ptr2 <<endl ;   //output :  0x61ff04

//     return 0;
// }


//🔸Implementation : update double pointer 
// #include<iostream>
// using namespace std ;

// void update(int **ptr2 ){

//     //No changes 
//     // ptr2 = ptr2 + 1;

//         // before i : 5
//         // before ptr : 0x61ff08
//         // before ptr2 : 0x61ff04
//         // after i : 5
//         // after ptr : 0x61ff08
//         // after ptr2 : 0x61ff04
    

//    // change in ptr value :
//     // *ptr2 = *ptr2 + 1 ;

//        // before i : 5
//        // before ptr : 0x61ff08
//        // before ptr2 : 0x61ff04
//        // after i : 5
//        // after ptr : 0x61ff0c
//        // after ptr2 : 0x61ff04

//     // change in i value :
//     **ptr2 = **ptr2 + 1 ;

//       // before i : 5
//       // before ptr : 0x61ff08
//       // before ptr2 : 0x61ff04
//       // after i : 6
//       // after ptr : 0x61ff08
//       // after ptr2 : 0x61ff04
// }

// int main(){

// int i = 5 ;
// int *ptr = &i ;
// int **ptr2 = &ptr ;

// cout<<"before i : "<< i << endl;
// cout<<"before ptr : "<< ptr << endl;
// cout<<"before ptr2 : "<< ptr2 << endl;
// update(ptr2) ;
// cout<<"after i : "<< i << endl;
// cout<<"after ptr : "<< ptr << endl;
// cout<<"after ptr2 : "<< ptr2 << endl;

//     return 0;
// }


//❓Question : mcQ 

// #include<iostream>
// using namespace std;
// int main() {

// int first = 8 ;
// int second = 18 ;
// int *ptr = &second ;

// *ptr = 9;              // *ptr means value at address of second which is 18 , change 18 into 9

// cout<<"first : "<< first << endl ;         //output : 8
// cout<<"second : " <<second << endl ;       //output : 9
//     return 0;
// }

//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

//     int first = 6 ;
//     int *p = &first ;         // p = address of first , *p has value of first 6
//     int *q = p ;              // *p = p , means *q now has value of p which is address of first
//     (*q)++ ;                  // (*q)++ = first execute then increment value at address which p has as a value which is of first 6 = 7

//     cout<<"first : "<<first <<endl ;   //output : 7      , since this is the execution hence the value is incremented

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int first = 8;
// int *p = &first ;              // p = has address of first, *p = has value at address of first
// cout<< (*p)++ << " "<<endl ;   // output:  8 ,    (*p)++ = first execute then increment value at address of first
// cout<< first << endl ;         // output : 9 ,   incremented value of first

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int *p = 0;
// int first = 110 ;
// *p = first ;                // if we initialise a null pointer then if are assiging a new value to the pointer then
//                             // then assign it as *p = &first ;
// cout<< *p <<endl ;          //segmentation error

//     return 0;
// }

//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int first = 8 ;
// int second = 11 ;
// int *third = &second ;        
// first = *third ;          //first = 8, *third = 11, now first = 11
// *third = *third + 2 ;     //*third = 11 + 2 =13

// cout<< first <<endl ;       //output : 11
// cout<< second <<endl ;       //output : 13

//     return 0;
// }

 //❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// float f = 12.5 ;
// float p = 21.5 ;
// float* ptr = &f ;
// (*ptr)++ ;             //*ptr = 12.5 , (*ptr)++ = first execute then increment = 13.5
// *ptr = p ;             //*ptr = p , means value at address of f becomes value at p which is 13.5 = 21.5

// cout<< *ptr <<endl ;      //output : 21.5
// cout<< f <<endl ;         //output : 21.5
// cout<< p <<endl ;         //output : 21.5

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int arr[5] ;              // arr of type int = 4byte , arr of 5 = 5 * 4 = 20
// int *ptr;                 // ptr of type int = 4byte , varies and could also be 8byte
// cout<< sizeof(arr) <<endl ;  //output : 20 
// cout<< sizeof(ptr) <<endl ;  //output : 8

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int arr[] = {11, 21, 13, 14} ;
// cout<< *(arr) << endl ;         //output : 11      only arr means address of first index , *arr means value present that address = 11
// cout<< *(arr+1) <<endl ;       // output : 21     *(arr+1) means address of first index + 1 = second index 

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int arr[6] = {11, 12, 31} ;
// cout<< arr <<endl ;       //output : 0x61fef8     arr means address of first index
// cout<< &arr <<endl ;      //output : 0x61fef8     &arr means address of arr which is first index

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int arr[6] = {11, 13, 114} ;
// cout<< (arr + 1) <<endl ;      //output : 0x61fefc   , arr = address of 1st index , arr+1 = address of 1st index + 1 = address 2nd index

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int arr[6] = {11, 13, 114} ;
// int *p = arr ;
// cout<< p[2] <<endl ;      //output : 114    , p[2] = *(p+2) 

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int arr[] = {11, 13, 11, 15, 16} ;
// cout<< *arr <<endl ;            //output : 11  , arr = address at 1st index , *arr = value at that address
// cout<< *(arr + 3) <<endl ;      //output : 15  , arr = address at 1st index , *arr+3 = value at that address+ 3

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// int arr[] = {11, 12, 13, 114} ;
// int *ptr = arr++ ;             // arr++ = is not possible it means we are trying to update symbol table

// cout<< *ptr <<endl ;      //output : error
//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// char ch = 'a' ;
// char* ptr = &ch ;      //ptr = pointing address of ch
// ch++ ;            // ch++ execute then increment = 'b' 
// cout<< *ptr << endl ;     //output : b    , since ptr pointing address of ch the value change will reflect 
//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// char arr[] = "abcdef" ;
// char *p = &arr[0] ;         // when we use pointer on char array , then ptr doesnt print address instead it prints the whole char array :
// cout<< p <<endl ;    //output : abcdef

//     return 0;
// }

//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// char arr[] = "abcdef" ;
// char *p = &arr[0] ;
// p++ ;                     // p = abcdef , p++ = p+1 ,  when we use pointer in char array it prints the whole char array , so abcdef = bcdef
// cout<< p <<endl ;        //output: bcdef  , p++ = instead of printing from 0th index print from 1th index
//     return 0;
// }

//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {

// char str[] = "babbar" ;
// char *p = str ;
// cout<< str[0] <<endl ;    //output: b  , str = address of 1st index , str[0] = value at 0th index means first index
// cout<< p[0] <<endl ;      //output: b  , p = prints whole char array instead of address, here p[0] = value at index 0, first index  
//     return 0;
// }

//❓ Question : mcQ

// #include<iostream>
// using namespace std;

// void update(int *p) {
//     *p = (*p) * 2 ;       //updating value at address of &i = 10 * 2 = 20
// }
// int main() {
    
//     int i = 10;
//     update(&i) ;     // sending address of i
//     cout<< i <<endl ;  //output : 20

//     return 0;
// }

//❓ Question : mcQ

// #include<iostream>
// using namespace std;

// int main() {
    
// int first = 110 ;
// int *p = &first ;         // p = address of first
// int **q = &p ;            // q = address of pointer p
// int second = (**q)++ + 9 ;   // **q = value at first 110, (**q)++ = execute first then increment , + 9

// cout<< first <<endl ;  // output : 111         //executed (**q)++
// cout<< second <<endl ; // output : 120         //executed and at last incremented (**q)++ + 9

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;
// int main() {
    
//     int f = 100 ;
//     int *p = &f ;            // p = address of f
//     int **q = &p ;           // q = address of p , 
//     int s = ++(**q) ;        // s = ++(**q) , preincrement = increment then execute , **q => value at f = 100 ,  ++(**q) => f = 101 , hence s = 101
//     int *r = *q ;            // *r = *q = value at p = address of f = 101 
//     ++(*r) ;                 // ++(*r) , preincrement = increment then execute ++(**r) = *q = address of p = address of f = 101 => 102
//     cout<< f <<endl ;    //output : 102
//     cout<< s <<endl ;    //output : 101

//     return 0;
// }


//❓ Question : mcQ

// #include<iostream>
// using namespace std;

// void increment(int **ptr) {
//     ++(**ptr) ;   //preincrement = increment then execute, num = 110 =>11
// }

// int main() {

// int num = 110 ;
// int *ptr = &num ;
// increment(&ptr) ;  //passing address of ptr, which has address of num as value , which as 110 as value

// cout<< num <<endl ;        //output : 111

//     return 0;
// }


//🔴 Coding Ninja : pointer practice question :

//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {
// float f = 10.5 ;
// float p = 2.5 ;
// float* ptr = &f ;          // p = address of f , *p = 10.5
// (*ptr)++ ;                // (*ptr)++ = post-increment execute and then increment fo *ptr = 10.5 = 11.5 , f = 11.5
// *ptr = p ;                // *ptr = 11.5 , *ptr = p , *ptr = 2.5 , f = 2.5

// cout<< *ptr <<endl ;   //output : 2.5
// cout<< f << endl ;     //output : 2.5 
// cout<< p <<endl ;      //output : 2.5

//     return 0;
// }

//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int a = 7 ;
// int b = 17 ;
// int* c = &b ;        // c = address of b , *c = 17
// *c = 7 ;            // *c = 7 ;  b = 7

// cout<< a <<endl ;    //output : 7
// cout<< b <<endl ;    // output: 7

//     return 0;
// }

//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int *ptr = 0 ;        //pointer initialise with 0
// int a = 10 ;
// *ptr = a ;           // if pointer is first initialise with 0 then if again initialise with another variable it must use & ampersand operator
 
// cout<< *ptr <<endl ;    //output:  error

//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int b = 10 ;
// int *a = &b ;

// // which of the following gives the memory address of variable 'b' pointed by pointer 'a' 
// //1.  a             // a = address of b
// //2.  *a            // *a = value at b
// //3.  &a            // &a = address of itself
// //4. address(a)     // error
//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// char ch = 'a' ;
// char* ptr = &ch ;       // ptr = address of ch but prints whole char arr , *ptr = value at ch
// ch++ ;                  // ch++ = postincrement execute first then increment ch ='b'

// cout<< *ptr <<endl ;   //output : 

//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int a = 7 ;
// int *c = &a ;      // c = address of a , *c = value at a
// c = c + 1 ;        // c = c+1 , address of a + 1 , 
//                    // now pointing to another another variable suppose address of a = 100 , then c = c + 1 => 100 + 1 => 101

// cout<< a <<endl ;      //output : 7
// cout<< *c <<endl ;     // garbage value

//     return 0;
// }

// //❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// //Assume the memory address of variable 'a' is 400 (and an integer takes 4 bytes), what will be the output?
// int a = 7;          // integers takes 4 byte for address, example says address of a = 400
//                     // 400 401 402 403
// int *c = &a;
// c = c + 3;         // c = c + 3  ( 3 * 4bytes = 12bytes ==> 400 + 12 ) , 4bytes = 400 401 402 403 , 4bytes= 404 405 406 407, 4bytes = 408 409 410 411, 4bytes = 412 413 414 415
// cout<< c << endl;   // assume output: 412

//     return 0;
// }

// //❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// //Assume memory adddress of variable 'a' is 200 and a double variable is of size 8 bytes
// // what will be the output :

// double a = 10.54;       //double = 8byte for address , given 200 as address of a = 200 201 202 203 204 205 206 207 8bytes
// double *d = &a;         // d = address of a , *d = value of a = 10.54
// d = d + 1;              // d = d + 1 , (200 + 8bytes , 1 * 8bytes = 8bytes)  
//                         // d = 200 201 202 203 204 205 206 207
//                         // d = 208 209 210 211 212 213 214 215

// cout  << d << endl;    // output: 208

//     return 0;
// }



//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// //asssume integer takes 4 bytes and integer pointer 8bytes
// int a[5] ;      // int = 4bytes , arr[5] = means each value takes 4bytes = (5 * 4bytes = 20)
// int *c ;        // integer pointer = 8bytes
// cout<< sizeof(a) <<endl ;  //output : 20
// cout<< sizeof(c) <<endl ;  //outout : 8

//     return 0;
// }


// //❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int a[] = {1,2,3,4} ;       // array name itself always point to the address of 0th = first index
// cout<< *(a) << endl ;       // *a = value at 0th index     == 1
// cout<< *(a+1) <<endl ;      // *(a+1) = value (0 + 1)index == 2

//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// // assume that address of 0th index of array 'a' is 200, what is the output?
// int a[3] = {1,2,3} ;    // array name itself always point to the address of 0th = first index  
// cout<< *(a+2) <<endl ;  // *(a+2) = value at (0 + 2)index == 3

//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int a[] = {1,2,3,4} ;
// int *p = a++ ;          // a++ cannot be done since it is trying to manipulate symbol table
//                        // means array a = address of 0th index , a++ = here we are trying to change the address itself which is already assign
// cout<< *p <<endl ;  //output : error

//     return 0;
// }



//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int arr[] = {4,5,6,7} ;
// int *p = (arr + 1) ;      //arr = pointing to address of 0th index , so arr + 1 = 0th index  + 1 = 1st index
// cout<< *arr + 9 ;        // *arr = value of 0th index, *arr + 9 = 4 + 9 = 13

//     return 0;
// }



// //❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// //Assume address of 0th index 'b' is 200, what is the output :
// char b[] = "xyz" ;
// char* c = &b[0] ;        //c = address of b but in char arrray pointer c print whole string , *c = value at ch (whole string)
// cout<< c <<endl ;       // output : xyz

// // c stores the address of start of array 'b' (and not of its value) . so the entire array is printed when c is printed
//     return 0;
// }



//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// char s[] = "hello" ;
// char* p = s ;        // p = s , s is char array which means s is pointing to the 0th index address
// cout<< s[0] << endl ;  //output : h
// cout<< p[0] <<endl ;   //output : h


// // In C++, when you use only the name of a character array, 
// // the compiler automatically converts it into a pointer to the first element of the array.
// // When you pass this pointer to an input/output function, such as cout or printf,
// // it assumes that the pointer represents a null-terminated string and prints the characters starting from the pointer until it encounters a null character (\0).
//     return 0;
// }



// //❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// char arr[20] ;
// int i ;

// for( i=0 ; i<10; i++) {
//     *(arr +i) = 65 + i ;      // arr = address of 0th index , *arr = value at 0th index, *(arr + i) = (0th + i)
//                               // Uppercase => 65 = 'A' , 89 = 'Z' , Lowercase => 97 = 'a' , 112 = 'z'
//                               // i will iterate from 0 to 10 , and stop at i = 11
// }

// *(arr + i) = '\0' ;       // i = 11 
// cout<< arr <<endl ;

//    return 0;
// }



// //❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// char *ptr ;       // null pointer
// char Str[] = "abcdefg" ;
// ptr = Str ;       // ptr = str , ptr = address of str , str = 'abcdefg'
// ptr += 5 ;       // ptr += 5 , ptr = ptr + 5 , print from 5th index

// cout<< ptr ;     //output: fg

//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int numbers[5] ;      //array of int numbers[5] with 5 space
// int *p ;              // null pointer

//  p = numbers ;        // p = address of numbers = 0th index
// *p = 10 ;             // *p = 10 at 0th index
//  p = &numbers[2] ;    // p = address of number[2] 3rd index
// *p = 20 ;             // *p = 20 at 2nd index
//  p-- ;                // p-- , postdecrement , p = numbers[2] -- , p = numbers[1] , p = address of number 1st index 
// *p = 30;              // *p = 30 at 1st index
//  p = numbers + 3 ;    // p = address of numbers[1] + 3 , p = address of number[4] , 4th index
// *p = 40 ;             // *p = 40 at 3rd index
//  p = numbers ;        // p = address of numbers[0]
//  *(p+4) = 50 ;        // *(p+4) = value number[0] + 4 , p = number[4] 4th index = 50

//  for( int n=0; n<5; n++) {
//     cout<< numbers[n] <<" , " ;    //output : 10 30 20 40 50
//  } 

//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// char st[] ="ABCD" ;

// for(int i=0; st[i] != '\0'; i++) {
//     cout<< st[i] << *(st)+i << *(i + st) <<i[st] ;    //output : A65AAB66BBC67CCD68DD
// }

// // learning purpose :
// // cout<<endl; 
// // for(int i=0; st[i] != '\0'; i++) {
// //      cout<< st[i]    << endl ;   // st = address of 0th index ,  st[i] = st[0] st[1] st[2] st[3] = ABCD 
// //      cout<<*(st)+i   << endl ;   //*st = value of st = 0th index , *(st)+i = *(A)+0 *(A)+1 *(A)+2 *(A)+3 = 65 66 67 68
// //      cout<<*(i + st) <<endl ;    // *(i+st) = value of st+i ,  *(i + st) = *(0 + st) *(1+st) *(2+st) *(3+st) = ABCD
// //      cout<<i[st]     <<endl ;    // i[st] = st[i] , therefore 0[st] 1[st] 2[st] 3[st] = ABCD
// // }

//     return 0;
// }



// //❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// float arr[5] = {12.5 , 10.0, 13.5, 90.5, 0.5} ;
// float *ptr1 = &arr[0] ;   // ptr1 = address of arr[0] , *ptr = arr[0]
// float *ptr2 = ptr1 + 3 ;  // ptr2 = ptr +3 , address of address of arr[0] + 3 , *ptr2 = arr[4] 

// cout<< *ptr2 << "," ;   // output : 90.5 
// cout<< ptr2 - ptr1  ;   // output : ptr2 - ptr1 , index 3 - index 0 ==> index 3

//     return 0;
// }

//❓ what will be the output ?
// #include<iostream>
// using namespace std ;

// void changeSign(int *p) {
//     *p = (*p) * -1 ;          // a = p , *a = (*a) * -1,  *a = (10) * -1 ==> -10
// }

// int main() {

// int a = 10 ;
// changeSign(&a) ;         // passing address of a , pass by reference(means changes will reflect in main variable)
// cout<< a <<endl ;  //output:  -10

//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;

// void fun(int a[]){
//     cout<< a[0] << " " ;   //output 2
// }

// int main() {

// int a[] = {1,2,3,4} ;
// fun(a + 1) ;   // passing value of a+1 , 0+1, 1st index == 2 (pass by value) changes will not reflect in main variable
// cout<< a[0] ;  // output: 1
//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;

// void square(int *p) {
//     int a = 10 ;        // another variable a inside void function 
//     p = &a ;            // *p again assign with variable a of void function not the main function
//    *p = (*p) * (*p) ;   //changes happen in variable a inside void function not in main function due to another variable with same name inside void function
// }

// int main() {

// int a = 10 ;
// square(&a) ;          //passing address of a , pass by reference
// cout<< a <<endl ;   //output : 10
//     return 0;
// }



//❓ what will be the output ?
// #include<iostream>
// using namespace std ;

// void swap(char *x, char *y) {           // function to swap two pointer
//     char *t = x ;                       // pass by value no effect in main variable
//       x = y ;
//       y = t ;
//  }

// int main() {

// char *x = "ninjasquiz" ;        //*x = value = "ninjasquiz"
// char *y = "codingninjas" ;      //*y = value = "codingninjas"
// char *t ;             // null pointer
// swap(x,y) ;      //swapping x and y (pass by value ) , now *x = "ninjasquiz" ,  *y = "codingninjas"
// cout<< x << " , "<< y <<endl ;  //output : "ninjasquiz" , "codingninjas" 

// t = x ;    // t = address of x "ninjasquiz" 
// x = y ;    // x = address of y  "codingninjas"
// y = t ;    // y = address of t "ninjasquiz"
// cout<< x << " , "<< y <<endl ;  //output : "codingninjas" , "ninjasquiz" 

//     return 0;
// }



//❓ what will be the output ?
// #include<iostream>
// using namespace std ;

// void Q(int z) {    // passed by value (no effect in x of void p)
//     z += z ;       // x = z , x = x + x , x = 7 + 7 =14
//     cout<<"Z :" << z <<endl ;  //output : 14
// }

// void p(int *y) {  // passed by reference 
//      int x = *y + 2 ;   //x = 5 + 2 = 7  // another variable x , so no effect on main function variable x, main func x = 5
//      Q(x) ;             // passing value of x , (pass by value)
//      *y = x - 1 ;       // *y still pointing to the value of x in main function , so *y = x - 1 , means *y = 7 - 1 == 6 , x in main function x = 6
//      cout<<"x :" << x << endl ;   //output : 7
//  }

// int main() {

// int x = 5 ;
// p(&x) ;          // passing address (pass by reference)
// cout<<"main x :"<< x ;  //output : 6

//     return 0;
// }



//❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int a = 10 ;
// int *p = &a ;    // p = address of a , *p = value at a
// int **q = &p ;   // q = address of p , *q = value at p = address of a
// int b = 20 ;     
// *q = &b ;        // *q = value at p (Address of a) is changed to (address of b) ,
//                  // which means *p = value at b instead of a, 
// (*p)++ ;         //(*p)++  hence (*p)++  , *p = *p + 1 ==> *p = 20 + 1 ==> 21

// cout<< a <<" , "<< b <<endl ;    //output : 10 , 21


// p points to a.
// q points to p directly and a through p (double pointer).
//*q = value stored in p is changes to address of b instead of that of a .
//(*P)++ = valuee that p points to, which now is of b , is incremented by 1 (b becomes 21).
// value of a remains unchanged

//     return 0;
// }



//❓ what will be the output ?
// #include<iostream>
// using namespace std ;

// int f(int x, int *py, int **ppz){
//     int y, z ;       //initialise int y and int z

//     **ppz += 1 ;      // **ppz = **a ,  **ppz += 1 ==> **ppz = 4 + 1 => 5
//     z = **ppz ;       // z = **ppz , z = 5

//     *py +=2 ;         // *py = *b , *py +=2 ==> *py = (4 before now) 5 + 2 ==> 7
//     y = *py ;         //  y = *py , y = 7

//     x += 3 ;           // x = c , x += 3, x = 4 + 3 ==> 7 (no effect on value of c still 4)

//     return x + y + z;   // x + y + z ==> 5 + 7 + 7
// }

// int main() {

// int c , *b, **a ;       //initialise int c = null integer, int *b = null pointer, int **a = null double pointer
// c = 4 ;                 // c = 4 
// b = &c ;                // b = address of c , *b = value of c = 4
// a = &b ;                // a = address of b , *a = value of b = address of c

// cout<< f(c , b, a) ;   // (pass by value) //output: 19  (5 +7 +7)

//     return 0;
// }



// //❓ what will be the output ?
// #include<iostream>
// using namespace std ;
// int main() {

// int ***r , **q, *p, i = 8 ;  //initialise ***r level 3 null pointer, **q null double pointer, *p  null pointer , int i = 8
// p = &i;         // p = address of i , *p = value of i = 8
// (*p)++ ;        // (*p)++ = value of i +1 , (*p)++ = 8 + 1 , *p = 9  , i = 9
// q = &p ;        // q = address of p , *q = value at p , address of i
// (**q)++ ;       // (**q)++ = value at p , value at i = 9 + 1 , (**q) = 10 therefore *p = 10 and i = 10
// r = &q ;        // r = address of q , *r = value at q, **r = value at p, ***r = value at i = 10

// cout<< *p << endl ;   //output : 10       
// cout<< **q << endl ;  //output : 10
// cout<< ***r << endl ; //output : 10
//     return 0;
// }


//❓ what will be the output ?
// #include<iostream>
// using namespace std ;

// void increment(int **p){  //pass by reference
//     (**p)++ ;         //(**p)++ = num + 1 ==> 10 + 1 ==> 11
// }
// int main() {

// int num = 10 ;
// int *ptr = &num ;  // p = addresss of num, *ptr = value at num = 10
// increment(&ptr) ;  //pass by reference , passing address of num
// cout<< num <<endl ;
//     return 0;
// }