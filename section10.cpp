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
//      int end = n - 1 ;

//      while(start<=end){
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



//❓ Question :
// Check is a string is a palindrome :
// Means is the string is same even after we reverse it then it is called a Palindrome.
//ex:
// input :         {a, b, c, b, a} ;
// reverse String : {a, b, c, b, a}
// output :  true (It is a palindrome) 

// input :         { c, a, r} ;
// reverse String : {r, a, c}
// output :  false (It is not a palindrome) 

// #include<iostream>
// #include<algorithm>
// using namespace std ;

// bool palindrome(char a[], int n){
//     int s = 0;
//     int e = n - 1;

//     while(s<=e){
//         if(a[s]!=a[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// void reverse(char name[], int n) {
//      int start = 0;
//      int end = n -1  ;

//      while(start<=end){
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

// int main( ){
// char name[10] ;

// cout<<"Enter you name : "<<endl ;
// cin>>name ;                         // Enter  : babbar

// int n = getLength(name) ;

// cout<<"Your name is : ";
// cout<<name<<endl ;                  //output : babbar

// reverse(name, n) ;
// cout<<"Your name in reverse is : "<<name<<endl ;    //output: rabbaB

// cout<<" palindrome or Not = "<<palindrome(name, n) ;

//     return 0 ;
// }



//❓ Question :
// Check if a string is palidrome or not, for checking palidrome , consider alphabets 
// and numbers only and ignore the symbols and whitespaces , String is not case sensitive

//ex:
// input : { c1o $@ ee O1C}
// output : true( it is a palindrome)

//How here we first ignore symbols ( $@ )
// no we are left with {c1oeeO1C}
// here if we convert all of them in uppercase or lowercase (c1oeeo1c) or (C1OEEO1C)
// here we can see that It is a palindrome (because it is same even after reversing )


// #include<iostream>
// #include<algorithm>
// using namespace std;

// char lowerCase(char ch){
//       if(ch >='a' && ch <='z'){
//         return ch;
//       }
//       else{
//         int temp = ch - 'A' + 'a' ;
//         return temp ;
//       }
// }


// bool palindrome(char name[], int n){
//     int start = 0;
//     int end = n ;

//     while(start<=end) {
//         if( lowerCase(name[start]) != lowerCase(name[end])){
//             return 0;
//         }
//         else{
//             start++;
//             end-- ;
//         }
//     }
//     return 1;
// }

// void reverse(char name[], int n) {
//      int start = 0;
//      int end = n -1  ;

//      while(start<=end){
//         swap(name[start++], name[end--]);
//      }

// }

// int getLength(char name[]){
//     int count = 0;
//     for(int i=0; name[i] != '\0'; i++){
//         count++ ;
//     }
//     return count; 
// }

// int main(){

// char name[10] ;
// int n = getLength(name) ;

// cout<<" Enter some character :"<<endl ;
// cin>>name ;

// reverse(name, n) ;
// cout<<"Your name in reverse is : "<<name<<endl ;

// cout<<" palindrome with condition or Not : "<<palindrome(name, n)<<endl;

//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std ;

// char lowerCase(char ch){
//       if(ch >='a' && ch <='z'){
//         return ch;
//       }
//       else{
//         int temp = ch - 'A' + 'a' ;
//         return temp ;
//       }
// }

// bool palindrome(char name[], int n){
//     int s = 0;
//     int e = n - 1;

//     while(s<=e){
//   if( (lowerCase(name[s]) >='a'&& lowerCase(name[s] <='z'))   ||  (lowerCase(name[s]) >=0 && lowerCase(name[s] <= 9)) )  {
//     if( (lowerCase(name[e]) >='a'&& lowerCase(name[e] <='z')) || (lowerCase(name[e]) >=0 && lowerCase(name[e] <= 9)) ){
//           if( lowerCase(name[s]) != lowerCase(name[e])){
//             return 0 ;
//           }
//           else{
//             s++ ;
//             e--; 
//           }
//       }
//   }
// }
//     return 1;
// }

// void reverse(char name[], int n) {
//      int start = 0;
//      int end = n -1  ;

//      while(start<=end){
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

// int main( ){
// char name[10] ;

// cout<<"Enter you name : "<<endl ;
// cin>>name ;                         // Enter  : babbar

// int n = getLength(name) ;

// cout<<"Your name is : ";
// cout<<name<<endl ;                  //output : babbar

// reverse(name, n) ;
// cout<<"Your name in reverse is : "<<name<<endl ;    //output: rabbaB

// cout<<" palindrome or Not = "<<palindrome(name, n) ;

//     return 0 ;
// }




//🔴 String :
//🔸 strings are object that represent sequences of characters.
//🔸std::string stores its data internally in the form of a null-terminated C-string, but in normal usage does not allow you to access the null terminator.

//For example:
// if I assign the value "Hello, World!" to a string, the internal buffer will look like this:

// [ H | e | l | l | o | , |  | W | o | r | l | d | ! | \0 ]
//                          ⬆️ Space                    ⬆️ Null terminator


//🔸 Implementation :
// #include<iostream>
// using namespace std;

// int main(){
//     string s = "Babbar" ;               // intialaised;
    
//    int n =  s.length() ;                // In build length function for string 
//    int m = s.size() ;                   // In build length function for string
//    cout<< n <<endl ;                    // output : 6 
//    cout<< m <<endl ;                    // output : 6

//    s.push_back('i') ;                   // push_back to insert element in string at last index
//    cout<< s <<endl ;                    //output : Babbari

//    s.pop_back() ;                       // pop_back to remove element from string from last index
//    cout<< s <<endl ;                    // output : Babbar
 
//    cout<<s.empty() <<endl ;             // output : 0 ,  .empty() function to check if a string is empty or not
 
//    string buyer ("Money") ;             // way of initialising
//    string seller ("goods") ;
   
//    cout<< " buyer has  : "<< buyer <<endl ;
//    cout<< " seller has : "<< seller <<endl ;

//    seller.swap(buyer) ;                 // swap() to swap string with another string

//    cout<<" after swapping seller has  : "<< seller <<endl ;
 
//   string a ("apple") ;
//   string b ("banana") ;

//   cout<<" comparing a with b : "<< a.compare(b) <<endl ;    //output : -1 false , compare() function is use to compare between two different string

//    // Difference between char and string : 

//    char charName[15] = {'L', 'o', 'v', 'e', ' ', 'B', 'a', 'b','b','a','r' } ;     
//    string stringName ("Love Babbar") ;            

//   cout<<" char name = "<< charName <<endl ;
//   cout<<" string name = "<< stringName <<endl ;

//     return 0 ;
// }



//❓ Question leetcode easy:
// Valid palindrome : in String 
// A phrase is a palindrome if after converting all uppercase letter into lowercase letter 
// and removing all non-alphanumeric character it reads the same forward and backward. 
// alphanumeric character include letters and numbers .

//ex: 
// input : "A man, a plan, a canal : Panama" 
// after removing non-alphamumeric character ( : , "whitespaces") 
// output : "amanaplanacanalpanama" = true (it is a palindrome) 

//ex:
// input : " race a car" 
// after removing non-alphanumeric character ("whitespaces") 
// output : "raceacar" = false (not a palindrome) 

//ex :
// input : " " 
// after removing non-alphanum character ( "whitespaces")
// output : "" = true (empty string palindromes)


// #include<iostream>
// using namespace std;

// // function to check if valid or not 
// bool valid(char ch){
//     if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'A') || (ch >= '0' && ch <= '9' ) ){
//         return 1;
//     }
//     return 0;
// }

// //function to make all character in lowercase 
// char toLowerCase(char ch) {
//     if( (ch >= 'a' && ch<='z') || (ch>='0' && ch<='9' ) ){
//         return ch;
//     }
//     else{
//         char temp = ch - 'A' + 'a' ;
//         return temp ;
//     }
// }

// //check if palindrome or not 
// bool check( string str){
//     int s = 0 ;
//     int e = str.length() -1 ;

//     while(s<=e){
//         if(str[s] != str[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--; 
//         }
//     }
//     return 1; 
// }


// // main function to remove non-alphnum character, convert into lowercase and check if palindrome or not
// bool isPalindrome(string s) {

//     // loop to remove non-alphanumeric character
//     string temp= "" ;

//     for(int i=0; i<s.length(); i++) {
//         if(valid(s[i])){
//             temp.push_back(s[i]) ;
//         }
//     }

//   // loop to convert in lowercase
//    for(int j=0; j<temp.length(); j++){
//     temp[j] = toLowerCase(temp[j]) ;
//    }

//   // return if palindrome or not 
//    return check(temp) ;

// }


// int main() {

// string s = "A man, a plan, a canal: Panama" ;

// cout<<" palindrome or not : "<< isPalindrome(s) ;     // output: true

//     return 0 ;
// }

//  55:05  24/149