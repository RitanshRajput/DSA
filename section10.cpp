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



//❓ Question leetcode medium :
//Reverse words in string II 
// A word is defined as a sequence of non-spaces character.the words in s will be separated by a single space
// your code must solve the problem in-place, i.e, without allocating extra space 

//ex:
// input : { 't','h','e','','s','k','y',' ','i','s','','b','l','u','e' } 
//output:  {'b','l','u','e','','i','s','','s','k','y','','t','h','e'}

//input: {'a'}
//output: {'a'} 


// #include<iostream>
// using namespace std;

// void reverseWords(char s[], int n){

//     //Reverse the entire string 
//     int start = 0;
//     int end = n - 1;

//     while(start<end){
//         swap(s[start], s[end]); 
//         start++;
//         end-- ;
//     }

//     // Reverse each word in the string using 'whitespaces' as a stopper between every word
//     start = 0;
//     for(int j=0; j<n; j++){

//         if(s[j] == ' '){
//             continue;
//         }
//         start = j ;
//         while(s[j] != ' ' && j < n) {
//             j++ ;
//         }

//         end = j - 1;
//         while(start<end){
//             swap(s[start],s[end]) ;
//             start++;
//             end-- ;
//         }
//     }
// }

// int length(char s[]){
//     int count= 0;
//     for(int i=0; s[i]!='\0'; i++){
//         count++ ;
//     }
//     return count ;
// }

// int main(){

// char s[20] = "my name is juned" ;
// int n = length(s) ;
// cout<<"length of character is : "<<n<<endl ;
// reverseWords(s, n) ;
// cout<<s ;


//     return 0;
// }


//❓ Question :
// Return maximum occuring character in an input string 
//ex:
// input : {terrorist} 
// r = 3
// t = 2
// e = 1
// o = 1
// i = 1
// s = 1

// output :  r ( character 'r' occur maximum time in the input string)


// #include<iostream>
// using namespace std;

// char maxOccured(string s){

//     int arr[26] = {0} ;   // array of 26 index (for 26 alphabet (a,b,c, .., z))

//     //create an array of count character
//     for(int i=0; i<s.length(); i++){
//         char ch = s[i] ;
//         int number = 0;

//         if(ch >='a' && ch <='z') {    // for Lowercase character
//             number = ch - 'a' ;                   // number = character - 'a'(97)
//         }
//         else{                        // for Uppercase character 
//             number = ch - 'A' ;                   //number = character - 'A'(65)
//         }
//         arr[number]++ ;                           //assign the number in arr[index] if number = 4, then make arr[4] = 1 from(0++) if the number repeats then again arr[4]= 2 (1++)
//     }

//    // find maximum occured character and store that index in answer, the index which is max among all index will be our answer
//     int maxi = -1 ;
//     int ans = 0 ;

//     for(int i=0; i<26; i++){
//         if(maxi < arr[i]){
//             ans = i ;
//             maxi = arr[i] ;
//         }
//     }

//     char result = 'a' + ans;            // ans + 'a'(116) to get our original answer

//     return result ;
// }

// int main(){

// string s = "tent" ;

// cout<<" Max occured character in the input : "<<maxOccured(s)<<endl ;
//     return 0;
// }

//🔸Time-complexity : O(n) 
//🔸 Space-complexity: O(1)



//🔴 When we use cin to get character in char type of variable,
//  the cin stops the execution after space "", tab "\t", newline "\n" ,
// but what if we want to get a long sentence with space in it ?
//🔸 Answer :  we use cin.getline(charName, charlength) ;
//   cin.getline() helps us to get multiple words with spaces 

//Ex: 
// #include<iostream>
// using namespace std ;
// int main(){
//     char name[20] ;
    
//     cout<<"Enter words with spaces"<<endl;
//     cin.getline(name, 20) ;                      // entered : Some example

//     cout<<"You entered : "<<name<<endl;          //output : Some example

//     return 0;
// }


//🔴 Delimeter in cpp ;
//🔸 A delimiter is a unique character or series of characters that indicates the beginning or end of a specific statement, string or function body set.
// Delimiters are used in programming languages to specify code set characters or data strings, 
// serve as data and code boundaries and facilitate the interpretation of code and the segmentation of various implemented data sets and functions.

//🔸Software programs include multiple data streams, functions and conditions. 
//Programming languages use delimiters in different coding scenarios to determine specific type and instruction boundaries. 
//Because delimiters - such as commas and full stops - define different condition types, the delimiter concept is very similar to the English language.

//🔸Delimiter examples include:

//🔸Round brackets or parentheses: ( )
//🔸Curly brackets: { }
//🔸Escape sequence or comments: /*
//🔸Double quotes for defining string literals: " "

//ex:
// string x=”A B C”;
// string y=”A*B*C”;

// Separate x into [‘A’,’B’,’C’] with delimiter ‘ ‘
// Separate y into [‘A’,’B’,’C’] with delimiter ‘*’


                      //🔴 Char in-build function :

//🔸 to get Length of char array :
//   char name[20] = {hello, motabhai!} ;
//   int len = str(name)     //output: 16

//🔸 to compare to char array :
//   char s1[10] = {hello} ;
//   char s2[15] = {hello} ;
//   int ans = strcmp(s1,s2) ;       //output: 1 = equal  ,   o = not-equal

//🔸 to copy char array :
//   char s1[10] = {hello} ;
//   char s2[15] = {} ;
//   int copy = strcpy(destination , source) ;
//   int copy = strcpy(s2, s1) ;  



//❓ Question :
// Replace spaces :
// you have been given a string 'String' of words. 
//you need to replace all the spaces between words with "@40"

//ex:
//input : "Bolo Bam Bam" ;
//output: "Bolo@40Bam@40Bam" ;

// #include<iostream>
// using namespace std;

// string ReplaceSpaces(string s){
//     string temp = "";

//     for(int i=0; i<s.length(); i++){

//         if(s[i] == ' '){
//            temp.push_back('@') ;
//            temp.push_back('4') ;
//            temp.push_back('0') ;
//         }
//         else{
//             temp.push_back(s[i]) ;
//         }
//     }
//     return temp;
// }

// int main(){
// string s = "Bolo Bam Bam" ;

// cout<<"Answer is : "<<ReplaceSpaces(s) <<endl ;

//     return 0;
// }

//❓ Question :
// Replace spaces :
// you have been given a string 'String' of words. 
//you need to replace all the spaces between words with "@40"

//contraints : without taking extra spaces : 
//            in above example we solve the problem by taking temp new string which is taking extra space
//            So in this case we cannot use extra spaces

// #include<iostream>
// #include<algorithm>
// using namespace std;

// string replaceSpaces(string str){
//     int l = str.length();
//     int i = 0;

//     while(str[i] != '\0')
//     {
//         if(str[i] == ' ')
//         {
//            str = str.substr(0,i)+"@40"+str.substr(i+1,str.length()-1);       //  str = (from 0th index, to ith index) + "@40" + (from i+1th index, to .length()-1 ) 
//         }
//         i++;
//     }
//     return str;
// }

// int main(){
//     string s = "Bolo Bam Bam" ;

//     cout<<"Answer without taking extra spaces : "<<replaceSpaces(s) <<endl ;

//     return 0;
// }


                                 //🔴 .find() in cpp :
//🔸find() in C++ is a function that helps to search an element and returns the first occurrence of the element searched inside a specified range.
//  It starts the search from the first element of the range and goes till the last one, 
//  if the element is not found after all possible comparisons then it returns the last element of the specified range. 
//  The find() function in C++ is defined in the <algorithm.h> header file. If any unessential action is performed by the find() function then it throws an exception that is not required by the programmer. 
//  find() function in C++ uses ==(Comparison operator) for every individual comparison between elements and values which is being searched.


//🔸There is a total of three parameters that we use inside the find() function in C++ to search an element. They are as follows:
// first:- It is an argument that specifies the first element of the range(first, last) inside which we want to perform the search for an element.
// last:- It is an argument that points to the last element of the range(first, last) inside which we want to perform the search for an element.
// value:- It is an argument that we want to search inside a given range(first, last).

//ex:
// template <class InputIterator, class T>  
// InputIterator find (InputIterator first, InputIterator last, const T& value)





//❓ Question leeetcode Medium:
//🔸Remove all occurences of a string :
// Given two string s and part perform the following operations on s unit all occurences of the substring part are removed.
// . find the leftmost occurences of the substring part and remove it from s.
//   return s after removing all occurences of part.
// A substring is a contiguous sequence of character in a string.

// ex:
// input: s = "daabcbaabcbc"  
//  part = "abc"

//after 1st removal = "dabaabcbc"        // "abc" removed from the main string
//after 2nd removal = "dababc"           //"abc" again removed
//after 3rd removal = "dab"              // "abc" again removed
// output :  "dab"


// input: s = "axxxyyyb"
// part = "xy"

// after 1st removal = "axxyyb"
// after 2nd removal = "axyb"
// after 3rd removal = "axyb"
// after 4th removal = "ab"
//output : "ab"


// #include<iostream>
// using namespace std;

// string removeOcc(string s, string part){
//     // if string length is equal to 0  and size of part is less than s.length (ex: part = "abc" = 3,  after iteration s.length() = 2   here 3<2)
//        while( s.length() != 0 && s.find(part)< s.length() )  {        // .find() is use to find the first iteration of given argument .find()
//            s.erase( s.find(part), part.length()) ;         // 
//        }  
//        return s;
// }

// int main(){
// string s = "axxxxyyyyyb" ;
// string part = "xy";
// // string s = "daabcbaabcbc"; 
// // string part = "abc" ;

// cout<<" after removing all occurences of part: "<<removeOcc(s, part) <<endl ;

//     return 0;
// }




//❓ Question leetcode medium :
// Permutation in string :
// given two string s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
// In other words return true if one of s1's permutation is the substring of s2.

//Ex:
// input: s1 = "ab"
// input: s2 = "eidaooo"
// output: true   (s2 contains one permutation of s1 "ba") 

// input: s1 = "ab"
// input: s2 = "eidoaoo"
// output: false   (s2 contains one permutation of s1 "ba") 


// #include<iostream>
// using namespace std;

// // function to check both string are equal or not
// bool checkEqual(int a[26], int b[26]){
//     for(int i=0; i<26; i++) {
//         if(a[i] != b[i])
//         return 0;
//     }
//     return 1;
// }

//     //Main function 
//  bool permutExist(string s1, string s2){
        
//         //character count array 
//         int count[26] = {0} ;

//         for(int i=0; i<s1.length(); i++){
//             int index = s1[i] - 'a' ;
//             count[index]++ ;
//         }

//         //traversing s2 string in window of size s1 length and compare
//         int i=0 ;
//         int windowSize = s1.length() ;
//         int count2[26]= {0} ;

//         //running loop for 1st window
//         while( i < windowSize && i<s2.length() ){
//             int index = s2[i] - 'a' ;
//             count2[index]++; 
//             i++ ;
//         }

//         //checking whether count1 and count2 are equal or not
//         if( checkEqual(count, count2) )
//          return 1;

//        // aage window process karo
//        while( i < s2.length() ){
//         char newChar = s2[i] ;
//         int index = newChar - 'a';
//         count2[index]++ ;

//         char oldChar = s2[i - windowSize];
//         index = oldChar - 'a' ;
//         count2[index]-- ;

//         i++ ;

//         if(checkEqual(count,count2) )
//         return 1 ;
//        }
//        return 0 ;
// }

// int main(){
//  string s1 = "ab" ;
//  string s2 = "eidbaoo" ;

//  cout<<"Permutation exist or not : "<<permutExist(s1,s2) <<endl ;

// return 0;
// }



//❓ Question leetcode easy:
// Remove all adjacent duplicates in string
// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
// We repeatedly make duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique. 

//ex:
// Input: s = "abbaca"
// after 1st removal : "aaca"
// after 2nd removal : "ca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move. 
// The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

// Input: s = "azxxzy"
// after 1st removal : "azzy"
// after 2nd removal : "ay"
// Output: "ay"


// #include<iostream>
// using namespace std;

// string removeDup(string s){
//     string ans ;
//     ans.push_back(s[0]) ;

//     for(int i=1; i<s.length(); i++){

//         if(s[i] == ans.back()){
//             ans.pop_back() ;
//         }
//         else{
//             ans.push_back(s[i]) ;
//         }
//     }
//     return ans;
// }

// int main(){
// string s = "abbaca";

// cout<<"After removing all duplicates: "<<removeDup(s) <<endl ;

//     return 0;
// }


///🔴🔴🔴Very Important question :
//❓ Question leetcode medium 
//String Compression 

//Given an array of characters chars, compress it using the following algorithm:
// Begin with an empty string s. For each group of consecutive repeating characters in chars:
// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.
// After you are done modifying the input array, return the new length of the array.
// You must write an algorithm that uses only constant extra space.

//ex:
// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6 (size of array), and the first 6 characters of the input array should be:
//  Output :  ["a","2","b","2","c","3"]  , size of array 6
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

// Input: chars = ["a"]
// Output: Return 1, and the first character of the input array should be: 
// output : ["a"] , size of array 1
// Explanation: The only group is "a", which remains uncompressed since it's a single character.

// Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
// Output: Return 4, and the first 4 characters of the input array should be:
// output :  ["a","b","1","2"]. , size of array 4
// Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".

// #include<iostream>
// #include<vector>
// #include<bitset>
// using namespace std;
 
//  int compress(vector<char> chars){
//       int i= 0;
//       int ansIndex = 0;
//       int n = chars.size() ;

//       while(i<n){
//         int j= i+1;
 
//         while( j<n && chars[i]==chars[j]){
//             j++ ;                   // jabtak chars[i] same hai chars[j] tabtak j++ karo
//         }

//         // Bahar kab ayga ?
//         // ya toh vector poora traverse kardiya , 
//         // ya fir new/different character encounter kia hai

//         // oldchar store karlo
//         chars[ansIndex++] = chars[i] ;        // chars array me jo purana first character tha usko store karlo , ya fir change kardo uss index ke character ko chars[i] se
//         // chars["a"] iss taraf purana character insert hojayga

//         int count = j-i ;                    // count kardo j-i  matalab new character milne se pehle wali value 
        
//         if(count > 1){       
//         // count ki value ko character me convert kardo agar vo 1 se badi hai
//             string cnt = to_string(count);          // using to_string() in-build function to convert count numbers into strings

//             for(char ch: cnt){
//                 chars[ansIndex++] = ch;           // ab chars[] array ke new index index par uske pichle index wale character ke count ko insert kardo ex: ["a"] = isme count= 2 ko insert kardo as a character = ["a", "2"]
//             }
//         }
         
//          i = j ;     // i ki value j ke barabar kardo kyuki j par new character hai 
//       }
//       return ansIndex ;
//  }

// int main(){
// vector<char> ab;
// ab.push_back('a') ;
// ab.push_back('a') ;
// ab.push_back('b') ;
// ab.push_back('b') ;
// ab.push_back('c') ;
// ab.push_back('c') ;
// ab.push_back('c') ;
// cout<<" Answer : "<<compress(ab) <<endl ;

//     return 0;
// }


//🔸Time-complexity : O(n) 
//🔸Space-complexity: O(1) 


//❓ Coding Ninjas practice Question :

// #include<iostream>
// using namespace std;
// int main() {

// int a[] = {5, 1, 15, 20, 25} ;
// int i, j, k ;

// i = ++a[1] ;  // i = 2  , ++a[1] preincrement increment then execute, so ++a[1] => increment = 1 + 1 => 2 incremented then executed 2
// j = a[1]++ ;  // j = 2  , a[1]++ postincrement execute then increment,so a[1]++ => execute a[1] = 2  => increment 2 + 1 ==> 3 , also value of a[1] therefore now i = 3
// k = a[i++] ;  // k = 15 , a[i++] postincrement execute then increment, so a[i++] => execute a[3] => 15 , increment a[1++] => a[4]  

// cout<< "i : "<< i <<endl ;   //output : i = 3
// cout<< "j :"<< j <<endl ;    //output : j = 2
// cout<< "k :"<< k <<endl ;    //output : k = 15
//     return 0;
// }


// //❓ Coding Ninjas practice Question :

// #include<iostream>
// using namespace std;
// int main() {

// int a[10] = {1, 2, 3, 4, 5, 6, 7, 8} ;
// int p = (a + 1)[5] ;

// cout<< p ;   //output : 7

// // a[i] is equivalent tp *(a+i), so(a+1)[5] is equivalent to *(a+1+5), i.e a[6]
//     return 0;    
// }


//❓ Coding Ninjas practice Question :

// #include<iostream>
// using namespace std;
// int main() {

// int c = 100 ;
// int arr[3][2] = { {1,2}, {3, 4}, {5, 6}} ;
// int temp = 0;

// for(int i=0; i<3; i++) {
//     for(int j=0; j<2; j++) {
//         cout<< arr[i][j] <<" , " ;
//     }
// }
// cout<<endl ;

// for(int i=0; i<3; i++) {
//     for(int j=0; j<2; j++) {
//         temp = arr[i][j] + c ;
//         arr[i][j] = arr[j][i] ;
//         arr[j][i] = temp - c ;
//     }
// }

// for(int i=0; i<3; i++) {
//     for(int j=0; j<2; j++) {
//         cout<< arr[i][j] <<" , " ;
//     }
// }

//    return 0;    
// }



//❓ Question :
// reverse an array :
// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     //Write your code here
//  int n;
//  cout<<"enter n :"<<endl ;
//  cin>> n ;

//  int arr[n] ;
//  for(int i=0; i<n; i++){
//     cin>> arr[i] ;
//  }

// for(int i=0; i<n; i++){
//     cout<< arr[i] ;
//  }

//  int s = 0;
//  int e = n-1; 
//  while(s<=e){
//     swap(arr[s], arr[e]) ;
//     s++ ;
//     e-- ;
//  }
//  for(int i=0; i<n; i++){
//     cout<< arr[i] ;
//  }
//     return 0;
// }


