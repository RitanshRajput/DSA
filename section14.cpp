        //🔴🔴 Important Keywords in C++ 



               //1️⃣ MACROS :

//🔸A macro is a piece of code in a program that is replaced by the value of the macro. 
// Macro is defined by #define directive.
// Whenever a macro name is encountered by the compiler, 
// it replaces the name with the definition of the macro.

//🔸 # = preprocessor 
// The preprocessors are the directives, which give instructions to the compiler to preprocess the information before actual compilation starts.
// All preprocessor directives begin with #, and only white-space characters may appear before a preprocessor directive on a line.
// Preprocessor directives are not C++ statements, so they do not end in a semicolon (;).
// You already have seen a #include directive in all the examples. This macro is used to include a header file into the source file.
// There are number of preprocessor directives supported by C++ like #include, #define, #if, #else, #line, etc. Let us see important directives −

//🔸 #define = use to create/define Macro
// The #define preprocessor directive creates symbolic constants.
// The symbolic constant is called a macro and the general form of the directive is −
//ex:  #define macro-name replacement-text 

//🔸Whenever we want to use a particular value in our code for a number of times.
// but we dont want to write the same thing again and again, and if we write about that
// what if we want to change the value in the future we cant just go and change the value in all our code
// what if we define like double PI = 3.14 and now use PI and if in future we want to change the value we can just update the double PI = 3.14
// we can do this but it will effect our code speed it will minimal but still be there

// therefore we use Macro :
// 1.No extra space is taken while declaring Macro
// 2.and replacing piece of code with macro name before compile time
// 3.wont change in the main function or any function unless change in the the #define declaration

//🔸Implementation :
//creating:   #define macro-name replacement-text 

// #include<iostream>
// using namespace std;

// #define PI 3.14

// int main(){
// int r = 5;
// double area = PI * r * r ;       // pi r square, area of triangle

// cout<<"area of triangle is : "<< area <<endl ;    //output : 78.5

//     return 0;
// }


//🔸 Function-Like Macros:
// You can use #define to define a macro which will take argument as follows −

// #include <iostream>
// using namespace std;

// #define MIN(a,b) (((a)<(b)) ? a : b)

// int main () {
//    int i, j;
   
//    i = 100;
//    j = 30;
   
//    cout <<"The minimum is " << MIN(i, j) << endl;    //output : The minimum is 30

//    return 0;
// }


// 🔴Types Of Macros :

//🔸1. Object-like Macros:
// An object-like macro is a simple identifier that will be replaced by a code fragment.
// It is called object-like because it looks like an object in code that uses it.
// It is popularly used to replace a symbolic name with numerical/variable represented as constant.
// Below is the illustration of a simple macro:

// #include <iostream>
// using namespace std;
 
 // #define DATE 31
 
// int main()
// {
//     cout << "Lockdown will be extended" << " upto " << DATE << "-MAY-2020";
 
//     return 0;
// }
// Output
// Lockdown will be extended upto 31-MAY-2020


//🔸2. Chain Macros: 
// Macros inside macros are termed as chain macros. 
// In chain macros first of all parent macro is expanded then the child macro is expanded. 
// Below is the illustration of a Chain Macro:

// #include <iostream>
// using namespace std;
 
// #define INSTAGRAM FOLLOWERS
// #define FOLLOWERS 138
 
// int main(){

//     cout << "Geeks for Geeks have " << INSTAGRAM << "K followers on Instagram!";
 
//     return 0;
// }
// //Output:
// //Geeks for Geeks have 138K followers on Instagram.
// Explanation: 
// INSTAGRAM is expanded first to produce FOLLOWERS.
// Then the expanded macro is expanded to produce the outcome as 138K. 
// This is called the chaining of macros.

//🔸3. Multi-line Macros:
// An object-like macro could have a multi-line. 
// So to create a multi-line macro you have to use backslash-newline. 
// Below is the illustration of multiline macros:

// #include <iostream>
// using namespace std;
 
// #define ELE 1, \
//             2, \
//             3
 
// int main()
// {
//     // Array arr[] with elements
//     // defined in macros
//     int arr[] = { ELE };
 
//     // Print elements
//     printf("Elements of Array are:\n");
 
//     for (int i = 0; i < 3; i++) {
//         cout << arr[i] << ' ';
//     }
 
//     return 0;
// }
// Output:
// Elements of Array are:
// 1  2  3  

//🔸4. Function-like Macro:
// These macros are the same as a function call. 
// It replaces the entire code instead of a function name. 
// Pair of parentheses immediately after the macro name is necessary. 
// If we put a space between the macro name and the parentheses in the macro definition, then the macro will not work. 
// A function-like macro is only lengthened if and only if its name appears with a pair of parentheses after it. 
// If we don’t do this, the function pointer will get the address of the real function and lead to a syntax error.

// Below is the illustration of function-like macros:

// #include <iostream>
// using namespace std;
 
// #define min(a, b) (((a) < (b)) ? (a) : (b))
 
// int main()
// {
 
//     // Given two number a and b
//     int a = 18;
//     int b = 76;
 
//     cout << "Minimum value between"
//          << a << " and " << b
//          << " is: " << min(a, b);
 
//     return 0;
// }
// Output
// Minimum value between 18 and 76 is 18


               //2️⃣Global Variable :

//🔸A global variable can be accessed from anywhere in the entire program. 
// It is usually declared at the top or start of the program outside of all blocks and functions of the program.
// It can be accessed from any function without any error.

// sharing variable using &reference variable :
// When a variable is declared as a reference,
// it becomes an alternative name for an existing variable. 
// A variable can be declared as a reference by putting ‘&’ in the declaration. 

// #include <iostream>
// using namespace std;
 
// int main()
// {
//     int x = 10;
 
//     // ref is a reference to x.
//     int& ref = x;
 
//     // Value of x is now changed to 20
//     ref = 20;
//     cout << "x = " << x << '\n';
 
//     // Value of x is now changed to 30
//     x = 30;
//     cout << "ref = " << ref << '\n';
 
//     return 0;
// }
// Output: 
// x = 20
// ref = 30

//🔸Another example of reference variable:

// #include<iostream>
// using namespace std;

// void a(int& i) {
//     cout<< i <<endl;
// }

// void b(int& i){
//     cout<< i <<endl ;
// }

// int main() {
// int i = 5 ;
//  a(i) ;             //output : 5
//     return 0;
// }


//🔸Global Variables :
// As the name suggests, Global Variables can be accessed from any part of the program.
// They are available through out the life time of a program.
// They are declared at the top of the program outside all of the functions or blocks.

// Declaring global variables: 
// Global variables are usually declared outside of all of the functions and blocks, at the top of the program. They can be accessed from any portion of the program.

// #include<iostream>
// using namespace std;
 
// // global variable
// int global = 5;
 
// // global variable accessed from
// // within a function
// void display()
// {
//     cout<<global<<endl;
// }
 
// // main function
// int main()
// {
//     display();
     
//     // changing value of global
//     // variable from main function
//     global = 10;
//     display();
// }
// Output: 
// 5
// 10
// In the program, the variable “global” is declared at the top of the program outside all of the functions 
// so it is a global variable and can be accessed or updated from anywhere in the program.  

//🔸 Using Global variable is bad practice / not suggested to use



                     //3️⃣INLINE function :

//🔸Inline function is one of the important feature of C++. 
//  So, let’s first understand why inline functions are used and what is the purpose of inline function?
// When the program executes the function call instruction the CPU stores the memory address of the instruction following the function call,
// copies the arguments of the function on the stack and finally transfers control to the specified function.
// The CPU then executes the function code, stores the function return value in a predefined memory location/register and returns control to the calling function.
// This can become overhead if the execution time of function is less than the switching time from the caller function to called function (callee). 
// For functions that are large and/or perform complex tasks, the overhead of the function call is usually insignificant compared to the amount of time the function takes to run. 
// However, for small, commonly-used functions, the time needed to make the function call is often a lot more than the time needed to actually execute the function’s code. 
// This overhead occurs for small functions because execution time of small function is less than the switching time.

//🔸C++ provides an inline functions to reduce the function call overhead. 
// Inline function is a function that is expanded in line when it is called.
// When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. 
// This substitution is performed by the C++ compiler at compile time. 
// Inline function may increase efficiency if it is small.
// The syntax for defining the function inline is:

// inline return-type function-name(parameters)
// {
//     // function code
// }  

//🔸Remember, inlining is only a request to the compiler, not a command. 
//  Compiler can ignore the request for inlining. Compiler may not perform inlining in such circumstances like:
// 1) If a function contains a loop. (for, while, do-while)
// 2) If a function contains static variables.
// 3) If a function is recursive.
// 4) If a function return type is other than void, and the return statement doesn’t exist in function body.
// 5) If a function contains switch or goto statement.

//🔸Inline functions provide following advantages:
// 1) Function call overhead doesn’t occur.
// 2) It also saves the overhead of push/pop variables on the stack when function is called.
// 3) It also saves overhead of a return call from a function.
// 4) When you inline a function, you may enable compiler to perform context specific optimization on the body of function. Such optimizations are not possible for normal function calls. Other optimizations can be obtained by considering the flows of calling context and the called context.
// 5) Inline function may be useful (if it is small) for embedded systems because inline can yield less code than the function call preamble and return.

//🔸Inline function disadvantages:
// 1) The added variables from the inlined function consumes additional registers, 
//   After in-lining function if variables number which are going to use register increases than they may create overhead on register variable resource utilization. 
//   This means that when inline function body is substituted at the point of function call, total number of variables used by the function also gets inserted. 
//   So the number of register going to be used for the variables will also get increased. So if after function inlining variable numbers increase drastically then it would surely cause an overhead on register utilization.
// 2) If you use too many inline functions then the size of the binary executable file will be large, because of the duplication of same code.
// 3) Too much inlining can also reduce your instruction cache hit rate, thus reducing the speed of instruction fetch from that of cache memory to that of primary memory.
// 4) Inline function may increase compile time overhead if someone changes the code inside the inline function
//    then all the calling location has to be recompiled because compiler would require to replace all the code once again to reflect the changes, otherwise it will continue with old functionality.
// 5) Inline functions may not be useful for many embedded systems. Because in embedded systems code size is more important than speed.
// 6) Inline functions might cause thrashing because inlining might increase size of the binary executable file. Thrashing in memory causes performance of computer to degrade.
// The following program demonstrates the use of use of inline function.

// #include <iostream>
// using namespace std;
// inline int cube(int s)
// {
//     return s*s*s;
// }
// int main()
// {
//     cout << "The cube of 3 is: " << cube(3) << "\n";
//     return 0;
// } //Output: The cube of 3 is: 27


//🔸Another implementation :

//🔸1. in this code repeatation of ternary function is irritating :
// #include<iostream>
// using namespace std;
// int main() {

// int a = 1 , b = 2 ;
// int ans = 0 ;

// ans = (a > b) ? a : b ;

// a = a + 3 ;
// b = b + 1 ;

// ans = (a > b) ? a : b ;

//     return 0;
// }

//🔸2. so save irritation and extra space we created a function with reference variable : int&
// #include<iostream>
// using namespace std;

// int getMax(int& a, int& b) {
//     return (a > b) ? a : b ;
// }

// int main() {
// int a = 1 , b = 2 ;
// int ans = 0 ;

// ans = getMax(a, b) ;

// a = a + 3 ;
// b = b + 1 ;

// ans = getMax(a,b) ;

//     return 0;
// }


//🔸3. the above function is still calling the function so it effects the performance so we use INLine function
// inline function only works with a function with 1 line code.
// #include<iostream>
// using namespace std;

// inline int getMax(int& a, int& b) {
//     return (a > b) ? a : b ;
// }

// int main() {
// int a = 1 , b = 2 ;
// int ans = 0 ;

// ans = getMax(a, b) ;

// a = a + 3 ;
// b = b + 1 ;

// ans = getMax(a,b) ;

//     return 0;
// }



              //4️⃣ DEFAULT Argument :

//🔸A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. 
// In case any value is passed, the default value is overridden. 

// 1) The following is a simple C++ example to demonstrate the use of default arguments. 
//   Here, we don’t have to write 3 sum functions; 
//   only one function works by using the default values for 3rd and 4th arguments. 

// #include <iostream>
// using namespace std;
 
// // A function with default arguments,
// // it can be called with 2 arguments or 3 arguments or 4 arguments.
// int sum(int x, int y, int z = 0, int w = 0)    //assigning default values to z,w as 0
// {
//     return (x + y + z + w);
// }
 
// int main()
// {
//     // Statement 1
//     cout << sum(10, 15) << endl;
   
//     // Statement 2
//     cout << sum(10, 15, 25) << endl;
   
//     // Statement 3
//     cout << sum(10, 15, 25, 30) << endl;
//     return 0;
// }
// Output :
// 25
// 50
// 80
// Time Complexity: O(1)
// Space Complexity: O(1)


//🔸Another Implmentation :
// here we have initialise start with a default value of 0, 
// means if any argument is not provided from the main function then 
//  assume start to be 0. and implement the function
// #include<iostream>
// using namespace std ;

// void print( int arr[], int n, int start = 0) {
//     for(int i=start; i<n; i++){
//         cout<< arr[i] <<" ";
//     }
//     cout<<endl ;
// }

// int main() {
//     int arr[5] = {1, 2, 4, 6, 8} ;
//     int n = 5 ;
//     print(arr, n) ;       //output : 1 2 4 6 8
//     print(arr, n, 2) ;    //output : 4 6 8

//     return 0;
// }

//🔴 ALways start with right most paramter to create a default argument
// in the above void function if we try to , initialise a parameter with default value
// without declaring the rightmost paramter then it will through error
// void print(int arr[], int n = 0, int start)  //error

//🔴 h/w = const variable