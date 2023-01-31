                   //🔴🔴 Character-Array & Strings :

//🔸Char :
// A char is a C++ data type used for the storage of letters. 
// C++ Char is an integral data type, meaning the value is stored as an integer.
// It occupies a memory size of 1 byte. C++ Char only stores single character.
// Char values are interpreted as ASCII characters.

//ex: char a = 'z' ;

//🔸 Character-Array : 
// A Character array is a derived data type in C/cpp that is used to store a collection of characters or strings.
// A char data type takes 1 byte of memory, so a character array has the memory of the number of elements in the array

//ex alternative ways of defining a string/char-array : 
// char str[4] = "C++";
// char str[] = {'C','+','+','\0'};
// char str[4] = {'C','+','+','\0'};


//🔘String :
//A string is a variable that stores a sequence of letters or other characters, such as "Hello" or "May 10th is my birthday!". 
//Just like the other data types, to create a string we first declare it, then we can store a value

//ex:     string s1 = "Hello";    



//🔸How to take input value char array :
//ex : for normal array :
// int arr[10] ;
// cin>>arr[i] ;
// input : 123 ;

//ex: for char array.
// char name[20] ;
// cin>>name ;
//  input : Babbar

//🔸Terminator (\0) ;
// it is automatically added.
// \0 terminator is a null character which is used to terminate the char-array
// means it tells that all the input is taken now there is nothing left to take as input
// Or tells where the string is ended.

//ex: 
// char name[10] ;
// cin>name ;
// input : Babbar ;

// [B, a, b, b, a, r, \0,  ,  ,  ,  ]
//  0  1  2  3  4  5  6   7  8  9  10       // index

//🔸output :
// cout<<name; 
// output : Babbar

//🔸Implementation :
// #include<iostream>
// using namespace std;
// int main(){

// char name[10] ;

// cout<<"Enter you name : "<<endl ;
// cin>>name ;                      // enter : babbar

// cout<<"Your name is : ";
// cout<<name<<endl ;               // output : babbar

//     return 0 ;
// }

//🔸Whenever we give a space(_), tab(\t), newline character(\n) to Cin it stops the execution 
// so whenever we try to input something with space in char array it will only show the char before the space.

//ex: 
// #include<iostream>
// using namespace std;
// int main(){
// char name[10] ;

// cout<<"Enter you name : "<<endl ;
// cin>>name ;                         // Enter  : Love babbar

// cout<<"Your name is : ";
// cout<<name<<endl ;                  //output :  love

//     return 0;
// }


//❓Question :
// Length of string :

// #include<iostream>
// using namespace std;

// int getLength(char name[]){
//            int count = 0;
//     for(int i=0; name[i] != '\0'; i++){
//          count++ ;
//     }
//     return count ;
// }

// int main(){
// char name[10] ;

// cout<<"Enter you name : "<<endl ;
// cin>>name ;                         // Enter  : babbar

// cout<<"Your name is : ";
// cout<<name<<endl ;                  //output : babbar

// cout<<" length of char array is : "<<getLength(name)<<endl;   //output : 6

//     return 0;
// }



//❓ Question :
// Reverse a string :
//ex: 
// input : 'Babbar'
//output : 'rabbaB' 

// #include<iostream>
// using namespace std ;

// void reverse(char name[], int n) {
//      int start = 0;
//      int end = n ;

//      while(start<end){
//         swap(name[start++], name[end--]);
//      }

// }

// int getLength(char name[]){
//            int count = 0;
//     for(int i=0; name[i] != '\0'; i++){
//          count++ ;
//     }
//     return count ;
// }
// int main(){
// char name[10] ;
// int n = getLength(name) ;
// cout<<"Enter you name : "<<endl ;
// cin>>name ;                         // Enter  : babbar

// cout<<"Your name is : ";
// cout<<name<<endl ;                  //output : babbar

// reverse(name, n) ;
// cout<<"Your name in reverse is : "<<name<<endl ;    //output: rabbaB

//     return 0 ;
// }


// 23:25   24/149