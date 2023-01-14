     /********** 🔴🔴 Flowchart   */

//🔸 FLowchart is Diagramatical way to describe the problem statement or a situation before making it into code.
//🔸basic components in flowchart:
//1. Problem
//2.start point/task
//3.input/output condition
//4.process involve
//5.decision to be made
//6.End point/result



//🔘 Components In flowchart:
 
//1. (    )   = start/end          (ellipse)
//2. /      /  =Input/output/print    (read a, b)   (parallelogram)
//3.  |     |  =process/calculation  (i= i+1 )      (rectangle)
//4.  🔷      =decision making /condition making     (if no, if yes )   (Diamond)
//5. ⬆️ ⬇️   =to show flow direction/ connecting components
//6.  🔘    =connector   (circle)




//🔘 Psuedo code  (psuedo means Nakli ):

//🔸Generic Way of representing code/logic/flow to slove the problem/approach

//ex: psudo code for Sum of 2 no.
// => Read a
// => Read b
// => Sum = a+b
// => print sum



//🔘🔘 First Program in C++.

// #include <iostream>
// using namespace std;

// int main() 
// {
//     cout<<"Namaste Duniya..." <<endl ;
    
// }


// #include<iostream>   = this is input/output library for the code to understand syntaxes
// using namespace std;  = this is for certain object to works like cout / cin
// int main() = this is our main function within which we will write all our code
// cout<<     = this is used to print anything on the  output screen 
// << endl;   = for newline
// <<'\n';    = for newline
// "hello.\n" =here also \n will print newline or move cursor to new line
// << '\n';   = newline 
// ;          = semi-colon tells that the line is completed/ended to the compiler.


//🔘 Variable :
//🔸 integer   = int    = a, b, name, age ; takes generally 4byte = 32bit , but also varies could be 2bytes depends on the memory.
//🔸 character = char   = 'a', 'b', 'c'   ; takes 1byte = 8bit of spaces in memory.
//🔸 Boolean   = bool   = true, false     ; takes 1 byte = 8bit .
//🔸 float     = float  = 1.4, 22.44      ; takes 8byte = 64bit
//🔸 double    = double = 232.3454        ; takes 8byte = 64bit


//🔘 Naming conventions:
//🔸int    a = 123 ;
//🔸char   b = 'a' ;
//🔸bool   c = true ;
//🔸float  d = 1.4 ;
//🔸double e = 12.23 ;

//🔘 Sizeof() ;
//🔸 Sizeof tells about the size of the varibale ;
//ex: 
// #include <iostream>
// using namespace std;

// int main() 
// {
//     int a = 123;
//     int size = sizeof(a) ;
//     cout<<"size of a :" << size  <<endl ;           //output:  size of a :4 
// }


//🔘 How memory space is alloted to a variable ?
//🔸 Once a variable been declare suppose int a = 5 ;
// then the compiler will convert that value into binary code.
//🔸 what is Binary code? is it the language that machine understand everything that we tell machine
// to do he doesn't understand by our language he understand its own language.(which is Binary code language).
// so binary code are :
//  0 = 00
//  1 = 01
//  2 = 10
//  3 = 11
//  4 = 100
//  5 = 101
//  6 = 110
//  7 = 111
//  8 = 1000
//  9 = 1001
//  10 = 1010 
//  11 = 1011

// if we declare int a = 5 ; then the compiler will give integer a 4byte of space 
// inside which the it will store 5 as 101 in binary code
//🔸 What if there is a character ?
// in programming language every character is assign with a number which is called ASCII value. 
// ASCII stands for American Standard Code for Information Interchange.

//🔘 Type Casting ?
// A type cast is basically a conversion from one type to another. 
// There are two types of type conversion: 
// 1.Implicit type conversion :  
// 2.Explicit type conversion :

// 1.Implicit Type Conversion Also known as ‘automatic type conversion’.
// Done by the compiler on its own, without any external trigger from the user.

// 2.Explicit Type Conversion: This process is also called type casting and it is user-defined.
//  Here the user can typecast the result to make it of a particular data type.

//ex:
//    #include<iostream>
//    using namespace std ;

//    int main() {
//     int a = 'b' ;
//   cout << a << endl ;          //output :  98
//    char b = 99 ;
//   cout << b << endl ;           //output: c

//    }

//🔸 When we try to assign a higher variable to lower it will not work or the value will be garbage value:
//ex: char d = 12345                //output: 0 

//🔘How negative nnumbers are store?
//🔸 If the 1st digit/number after conversion into binary code is 0 then its positive if its 1 then negative
//🔸 This is done by 2's compliment.

//🔸 1. 1's compliment means :
// after conversion change all the value to the opposite number:
// suppose int a = -5 means 101 (at first -ve is ignored).
// for 4bytes of memory it becomes 0000 0000 0000 0101
// Now change 0 to 1 and 1 to 0 =  1111 1111 1111 1010  => 1st digit is 1 means negative to store

//🔸2. 2's compliment means:
// This simply means add 1 into main value after 1's compliment
//  int a = -5;
//   binary value  =  0000 0000 0000 0101
//  1's compliment =  1111 1111 1111 1010
//  2's compliment =                  + 1
//                 = 1111 1111 1111 1 101         => 1st digit is 1 means negative to store


// To print we again use 1's compliment add +1 :
//  1's compliment above value :   0000 0000 0000 0010
//  2's compliment add 1       :   0000 0000 0000 0101    => 101 to print becomes 5


//🔘🔘 Operators:
//🔸 Operators are way to do the mathematic calculation through code.
// type:
//  add => +
//  sub => -
//  multiply => *  
// divide => /     (gives qoutient)
// modulas =>  %  (gives remainder)


//🔸when we divide int/int    =>  int 
//🔸when we divide float/int  =>  float
//🔸when we divide double/int =>  double

//🔘 Relational Operator :

// assign  =                       (a=b)
// is equal to ==                  (a==b)
// is greater than  >              (a>b)
// is smaller than  <              (a<b)
// is greater than equal to  >=    (a>=b)
// is smaller than equal to  <=    (a<=b)
// is Not equal to   !=            (a!=b)

//🔘 Logical Operator :

//  AND operator  &&      (Yebhi && Yebhi)
//  OR operator   ||       (Ya toh hai || Ya toh hai)
//  NOT operator   !       (! true ko kardo false) (! false ko kardo true) 




