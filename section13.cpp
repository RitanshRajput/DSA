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


// 29/149