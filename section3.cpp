                    //🔴🔴  Operators && For Loop


//🔘Bitwise Operator :
//🔸 AND =>  &
//🔸 Or  =>  |
//🔸 NOT =>  ~
//🔸 XOR =>  ^

//🔸 Bitwise Operator works at Bit level:
//🔸EX:  (AND) & operator 
//  a=2 , b=3  
//  a & b
//  => 10         (2 = 10, 3 = 11) on binary level



      //1️⃣ AND (&) operator:

//🔸 if both input are 1 THEN OUTPUT IS 1,  else 0
//   INPUT    | OUTPUT
//    X    Y  |  Z
//   _________|_____        
//   0     0  | 0
//   0     1  | 0
//   1     0  | 0
//   1     1  | 1

//🔸eX: 
//   A = 5  =>  1 0 1
//   B = 7  =>  1 1 1
//             -------
//  OUTPUT =>   1 0 1


      //2️⃣ OR (|) operator:

//🔸 If atleast one input is 1 then output 1, else 0
//   INPUT    | OUTPUT
//    X    Y  |  Z
//   _________|_____        
//   0     0  | 0
//   0     1  | 1
//   1     0  | 1
//   1     1  | 1

//🔸eX: 
//   A = 2  =>    1 0
//   B = 4  =>  1 0 0
//             -------
//  OUTPUT =>   1 1 0



      //3️⃣ NOT (~) operator:

//🔸Invert 1 to 0, and 0 to 1
//   INPUT  | OUTPUT
//      X   |  Z
//     _____|_____        
//     0    | 1
//     0    | 1
//     1    | 0
//     1    | 0

//🔸eX: 
//   A = 2  =>    1 0
//             -------
//  OUTPUT =>     0 1



      //4️⃣ XOR (^) operator:

//🔸 if both the input are 1 then output will be 0, if both input are 0 output will be 0, 
//    if single 1 and single 0 then output 1.
//   INPUT    | OUTPUT
//    X    Y  |  Z
//   _________|_____        
//   0     0  | 0
//   0     1  | 1
//   1     0  | 1
//   1     1  | 0

//🔸eX: 
//   A = 2  =>  0 1 0   
//   B = 4  =>  1 0 0
//             -------
//  OUTPUT =>   1 1 0


                  /**** 🔴 Implementation ***/

// #include<iostream>
// using namespace std ;
// int main(){
   
//    int a = 4;
//    int b = 6;

//    cout<<" a & b : "<<( a & b )<<endl ;     //output :     4
//    cout<<" a | b : "<< (a | b) <<endl ;     //output :     6
//    cout<<"  ~ a  : "<<   ~a    <<endl ;     //output :    -5
//    cout<<" a ^ b : "<<( a ^ b) <<endl ;     //output :     2
// }

//🔸 AND a&b :
//   a = 4 => 100
//   b = 6 => 110
//           -----
//  output => 100

//🔸 OR a|b :
//   a = 4 => 100
//   b = 6 => 110
//           -----
//  output => 110

//🔸 AND a&b :
//   a = 4 => 100      //1) It will convert it by 1s complement(invert the bit if 1=0, if 0=1)  (for 4=>  0000 0000 0000 0100) (1sComplement => 1111 1111 1111 1011)
//           -----     //2) Then while printing it for -ve no., It will then convert above 1s complement by 2s complement()    (2scomplement first covert above 1s into again 1s => 0000 0000 0000 0100)
//  output => 101      // 2s complement(first convert the above 1scomplement into again 1scomplement and then for 2scomplement add+ 1 )  (2scomplement now add+1 in above 1s => 0000 0000 0000 0101)

//🔸 AND a&b :
//   a = 4 => 100
//   b = 6 => 110
//           -----
//  output => 010



// 🔘🔘 Left Shift and Right Shift operator:

//1️⃣ Left Shift ( << ) :   this means shift the bit, number of times to the left side
//Ex:
//  5 << 1  :                      //This means shift every bit of 5, 1 times to the left side.
//  5    => 0000 0000 0000 0101    // for 4bytes
//output => 0000 0000 0000 1010    // output:   1010 => 10

//Ex:
//   3 << 2 :                      //This means shift every bit of 3, 2 times to the left
//  3     => 0000 0000 0000 0011  
// output => 0000 0000 0000 1100    //output:  1100 => 12



//2️⃣ Right Shift ( >> )  : this means shift the bit, number of times to the Right side
//Ex:
//  5 >> 2  :                      //This means shift every bit of 5, 2 times to the Right side.
//  5    => 0000 0000 0000 0101    // for 4bytes
//output => 0000 0000 0000 0001    // output:   01 => 1

//Ex:
//  3 >> 2 :                      //This means shift every bit of 3, 2 times to the Right
//  3     => 0000 0000 0000 0011  
// output => 0000 0000 0000 0000   //output:  00 => 0


//🔸when small number are left shifted then it basically multiplies that number with 2 with for right side number of times (if 19 << 3  => it will multiply 19*2*2*2)
//🔸when small number are right shifted then it basically divides that number with 2 for right side number of times (if 17 >> 2  => it will divide 17/2*2  )

//🔸 When we left shifting or Right shifting the padding will always be Zero(0)  IN CASE OF +VE NUMBER ONLY:
// means when we shift a bit then to fulfill its place 0 will be there :
//ex:  0001 => when shifted to left side 001[] =>the empty place will be fill with zero 001[0] . 

//🔸IN CASE OF -VE NUMBER padding will depend on compiler..

// #include<iostream>
// using namespace std ;
// int main(){
   
//    int a = 4;
//    int b = 6;

//    cout<<(17 >> 1)<<endl ;          //output : 8
//    cout<<(17 >> 2)<<endl ;          //output : 4
//    cout<<(19 << 1)<<endl ;          //output : 38
//    cout<<(19 << 3)<<endl ;          //output : 152
//    cout<<(21 << 2)<<endl ;          //output : 84
// }


               //🔴🔴 Increment and Decrement :

//🔸 Two increments are there post-increment( i++ / i+=1 ) and pre-increment( ++i )
//🔸 Two decrements are there post-decrement( i-- / i-=1 ) and pre-decrement( --i )

//🔸 1. PostIncrement (i++) :   first execute then increment 
//🔸 2. PreIncrement  (++i) :   first increment then execute
//🔸 1. PostDecrement (i--) :   first execute then decrement
//🔸 2. PreDecrement  (--i) :   first decrement then execute

// //❓ Question:
// #include<iostream>
// using namespace std ;

// int main(){
 
//     int a , b =1;      
//     a = 10 ;
//     if (++a)              // if(not 0, True)
//     cout<< b ;           //output : 1     
//     else
//     cout<< ++b ;         
// }

//❓ Question:
// #include<iostream>
// using namespace std ;

// int main(){
 
//     int a = 1;
//     int b = 2;

//     if(a-- > 0 && ++b >2) {              // if(a= 1 which is > 0 and b=3 >2) (a-- execute then increment, ++b increment then execute)
//         cout << "Stage1 = Inside if ";
//      }else {
//         cout<<"Stage2 = Inside else" ;
//      }           
//     cout<< a << " " << b <<endl ;        // a-- executed above now decreased while printing,  ++b incremented above now executing while printing.
//                                         //output : stage1 = Insside If 0 3
// }

//❓ Question:
// #include<iostream>
// using namespace std ;

// int main(){
 
//     int a = 1;
//     int b = 2;

//     if(a-- > 0 || ++b >2) {              // if(a= 1 which is > 0 or b=3 >2) (a-- execute then increment, ++b increment then execute)
//         cout << "Stage1 = Inside if ";
//      }else {
//         cout<<"Stage2 = Inside else" ;
//      }           
//     cout<< a << " " << b <<endl ;        // a-- executed above now decreased while printing,  ++b incremented above now executing while printing.
//                                         //output : stage1 = Insside If 0 2
// }

//❓ Question:
// #include<iostream>
// using namespace std ;

// int main(){
 
//    int number = 3;
//    cout<<(25 * (++number)) ;       //output: 100      (++number increment first then execute while printing)
// }


//❓ Question:
// #include<iostream>
// using namespace std ;

// int main(){
 
//  int a = 1;             // a = 1
//  int b = a++;           // b = 1
//  int c = ++a;           // c = 2 
//  cout<< b;              // output: b = 1  (b = a++ executed above)
//  cout<< c;              // output: c = 3  (c = ++a incremented above now executing while printing)
//  }


               //🔴🔴 For Loop :


// for loop takes 3 argument (initialization ; condition ; updation)
// separated by semicolon ; important .

//🔸 we can write for loop : 
// 1. add argument (int a=1; a>0 ; a++) 
// 2. without anything inside ( ; ; ) 
// 3. with multiple value  (int a=1, b=1 ; a>0 && b>0 ; a++, b++)

//❓ Question:
//🔸 Fibonacci Series : 0 1 1 2 3 5 8 13 21...
// #include<iostream>
// using namespace std;
// int main() {

//     int n = 10;
//     int a = 0;
//     int b = 1;
//     cout<<a <<" "<<b<<" ";
//     for(int i = 1 ; i<=n ; i++){
//         int nextNumber = a+b;
//         cout<<nextNumber<<" " ;

//         a = b ;
//         b = nextNumber ;
//     }
// }

//❓ Question:
//🔸 prime number or not,
// #include<iostream>
// using namespace std;
// int main() {

//     int n ;
//     cout<<"enter number"<<endl;
//     cin>>n ;
//    bool isPrime = 1;           //isprime = true
//     for(int i = 2 ; i<n ; i++){

//        if(n%i==0){
//         isPrime = 0;          //if remainder 0 isprime = false
//         break ;
//        }
//     }

//     if(isPrime== 0){
//         cout<<"Not a prime number"<<endl ;
//     }
//     else{
//         cout<<"Is a prime Number"<<endl ;
//     }
// }


//🔸🔸 COntinue : it is used to skkip an iteration :
//Ex:
// #include<iostream>
// using namespace std;
// int main() {
//   for(int i=1; i<5; i++){
//     cout<<"Hi";         //Print 4 times
//     cout<<"hey" ;       //print 4 times
//     continue;
//     cout<<"hello" ;     //skipped each times, this becomes unreachable, OR ignored.
//   }   
// }

//❓ Question:
// #include<iostream>
// using namespace std;
// int main() {

// for(int i=0; i<=5; i++){
//     cout<<i<<" ";
//     i++ ;               //output: 0 2 4
// } 
// }

// //❓ Question:
// #include<iostream>
// using namespace std;
// int main() {

// for(int i=0; i<=5; i--){
//     cout<<i<<" ";
//     i++ ;                  //output: infinite loop
// } 
// }

//❓ Question:
// #include<iostream>
// using namespace std;
// int main() {

// for(int i=0; i<=15; i+=2){
//      cout<< i << " ";
//      if(i&1){
//         continue;
//      }
//       i++ ;                   //output: 0 3 5 7 9 11 13 15 
// } 
// }

//❓ Question:
// #include<iostream>
// using namespace std;
// int main() {

// for(int i=0; i<5; i++){
//    for(int j=i ; j<=5; j++){
//     cout<<i<<" "<<endl;                    
//                                     //output:  00000011111222233344
//    }
// } 
// }


//❓ Question:
// #include<iostream>
// using namespace std;
// int main() {

// for(int i=1; i<5; i++){
//     for(int j=i; j<=5; j++){
//         if(i+j == 10){
//             break;
//         }
//         cout<<i<<" "<<j<< endl;
//     }
//                              //output: 11 12 13 14 15 22 23 24 25 33 34 35 44 45
// }
// }


//❓ Question leetcode easy;
//  n = 234
//  product = 2*3*4  = 24
//  sum     = 2+3+4  = 9
//  final => 24 - 9 => 15 

// #include<iostream>
// using namespace std;
// int main() {

//   int n;
//   cout<<"enter 3digit number";
//   cin>>n;
//   int product = 1;
//   int sum = 0 ;

//   while(n != 0){
//     int rem = n % 10;

//     product = product * rem ;
//     sum   = sum + rem ;
    
//     n=n/10 ;
//   }
//   int answer = product - sum;
//   cout<<answer <<endl;
// }


//❓ Question 1️⃣ leetcode easy;
// write a function that takes am unsigned integer and returns the number of '1' bits it has also known as the hamming weight
// n = 0000 0000 0000 0000 1011
// the input binary string has total of three '1' bits ;
// output: 3


// #include<iostream>
// using namespace std;
// int main() {
 
//  int n = 0000000000000001101 ;
//  int count = 0 ;

//  while(n!=0)
// {
//     if(n & 1) {              //checking Last bit
//         count++ ;            //if 1 is present then increase count
//     }
//     n = n>>1 ;               //Right shifting every digit till last bit
// }
//  cout<<count ;               //output: 4    (there are four 1)
// }  


                   //🔴🔴 Decimals and Binary :


//   Decimal    |     Binary
//   ----------------------
//     0       |     00
//     1        |     01        
//     2        |     10
//     3        |     11
//     4        |     100
//     5        |     101
//     6        |     110
//     7        |     111
//     8        |     1000
//     9        |     1001
//     10       |     1010
//     11       |     1011
//     12       |     1100
//     13       |     1101
//     14       |     1110
//     15       |     1111


//🔸 Conversion from to decimal to binary:
//🔸 APPROACH 1:
// Step 1:  Divide the decimal number by 2
// Step 2:  Store the remainder 
// Step 3:  Then again divide the Quotient by 2
// Step 4:  Store the remainder.
// Step 5: repeat

// ANSWER: Reversed the stored remainder and that will be the answer.

//❓ Convert n = 10 into binary :
// => 
//     DIVISION  | QOUTIENT  |  REMAINDER
//    ---------------------------------
//     10 / 2    |    5      |    0
//     5  / 2    |    2      |    1
//     2  / 2    |    1      |    0
//     1  / 2    |    0      |    1

//ANSWER :=>    1010       (DOWN to Up ⬆️ )


//🔸 APPROACH 2 :
//❓ Decimal to Binary approach 2:

// #include <iostream>
// #include <math.h>                // Maths library consist, mathematical function(sqrt, pow, etc)
// using namespace std;
//  int main(){
//    int n;
//    cout<<"enter number\n";
//    cin>>n ;
//   float answer = 0 ;                        //Using float bcoz pow works well with float.else it will some unexpected answer.
//   int i = 0 ;

//    while(n != 0){                             //Step1 : loop till n is not equal to zero 
//       int bit = n & 1 ;                       //Step2 : Store the remainder of every single digit(by using AND operator)(if 0 & 1 => 0) (if 1 & 1 => 1)
//       answer = (bit * pow(10, i)) + answer ;  //Step3 : reverse the numbers that is store in bit (formula = (number * 10^i) + Bit) the i will be increased by each iteration

//       n = n >> 1 ;                            //Step4: Right shift each digit on every iteration so we can move to next digit( 1010 => n>>1  => 101 => 10 => 1)
//      i++ ;                                    // Step5:  increment i for the reversed formula
//    }

//      cout<<"answer is: "<<answer<<endl;
//  }


 //🔘 Formula to store value in Normal flow and reverse flow:
 //1> Normal flow :  float answer = 0 ;
 //                   answer = (answer * 10) + digit;

 //2> Reverse flow :  float answer = 0 ;
//                   answer = (answer * (10^i)) + digit;
//                      i++ ; (10^0, 10^1, 10^2, 10^3, ....) increment with each iteration



//🔘🔘 Binary to decimal conversion :

//🔸 for every digit from right to left ⬅️ we raise 2s power and then add them, ignore if binary is 0.
//     1   0   1   0   1
//    2^4 2^3 2^2 2^1 2^0   

//=>   2^4 + 2^2 + 2^0          //Zero are ignored ;
//=>     16 + 4 + 1
//=>        21 

//     DIVISION  | QOUTIENT  |  REMAINDER
//    ---------------------------------
//     21 / 2    |    10     |    1
//     10 / 2    |    5      |    0
//     5  / 2    |    2      |    1
//     2  / 2    |    1      |    0
//     1  / 2    |    0      |    1

//Answer :=>  10101 (down to up)  === 21

//🔸 APPROACH :
//❓ Convert Binary to decimal :

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){

//       int n;
//       cout<<"enter number\n" ;
//       cin>>n ;
//       int i = 0 ;
//       int ans = 0 ;

//       while(n != 0){               //Step1: run loop till n == 0
//       int digit = n % 10 ;         //Step2: pass every binary digit one by one so use( n % 10  =>  101 % 10 => 1 ) (10 % 10 => 0)

//       if(digit == 1){               //Step3: check if the digit is 1
//         ans = ans + pow(2, i) ;     //Step4:  increase power of 2 at every 1s and add them  
//       }
//        n = n/10 ;                   //Step5: decrement every single digit by dividing it with 10 (101 / 10 => 10) (10 / 10=> 1)
//        i++ ;                        //Step6: increment i for the power to be updated
//       }
//       cout<<"answer milgaya :" <<ans ;       //Step7: print the stored answer 
// }



//❓ Question leetcode easy 2️⃣ ;
// Given a signed 32-bit integer x, 
// return x with its digit reversed x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

// #include<iostream>
// #include<limits.h>                     // Header library for INT_MAX and INT-MIN
// using namespace std;
// int main() {
// int x ;
//   cout<<"enter number\n" ;
//   cin>>x;
// int ans = 0 ;
//    while(x!=0){
//         int digit = x % 10 ;
//        if ((ans > INT_MAX/10) || (ans < INT_MIN/10)){          //INT_MAX/INT_MIN == tells the maximum int range and minimum int range.  
//        cout<<0;                                              //when using signed integer as a input sometime it excceds its range 
//       }                                                     //bcoz we are using (ans*10) *10 makes the integer larger so it fails the test result .
//    ans = (ans * 10) + digit;                               // if answer exceeds the range then return 0 .

//   x = x / 10;
//   }
//     cout<<ans ;
// }



//❓ Question leetcode easy 3️⃣ ;
//The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

// Example 1:

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
// Example 2:

// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
// Example 3:

// Input: n = 10
// Output: 5
// Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base


// #include<iostream>
// using namespace std;
// int main() {
// int n ;
//   cout<<"enter number\n" ;
//   cin>>n;

//   int m = n;
//   int mask = 0;

//         if(n == 0)              //for edge case : if n = 00000000000 then return 1
//          cout<< 1 ;

//         while( m!=0 ) {                 //loop till m is equal to zero
//             mask = (mask << 1) | 1;     // OR(|) operator says if either is 1 then make it 1,  elseif both are zero then make it zero (basically mask will always be one)
//             m = m >> 1;                 // left shift m till its zero
//         }
//                                         //n = 0000 1011  , mask = 1111 1111, (~n)negation means if 0 then make it 1, or vice-versa
//         int ans = (~n) & mask ;        // ex: ans = (1111 0100) & (1111 1111)  => 1111 0100 => last digit after 0 are 100 that is 4. 
 
//         cout<< ans;
// }

//❓ Question leetcode easy 4️⃣ ;
// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false

// Constraints:
// -231^30 <= n <= 231^30 - 1

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n ;
//   cout<<"enter number\n" ;
//   cin>>n;
//  for(int i = 0; i <= 30; i++){            //for till 30 bcoz thats the constraint

//             int ans = pow(2,i);          //get power of 2 from 0 to 30
//             if(ans == n)                 //check is answer is equal to input value if matches then true else false.
//             {
//             cout<<true;
//             }
//         }
//         cout<<false;
// }



                     //🔴🔴 Switch Statements and Functions :

//🔸 When we need to add multiple condition what if we have many conditions then it'll be too
//    hectic to Use for Loop , Thats where we use Switch Statement .

//Keywords and expression :

// switch (expression)
// {
// case const :  
//       break;
// case const :
//       break;
// case const :
//       break;
// default:
//       break;
// }

//1. switch is a keyword which takes a any integral expression in bracket
//2. case means when we have many condition just like that we have case here (i.e: case 1, case 2, case n)
//3. const means constant it could be, Int / Char .. But it cannot be float and string value.
//4. break stop the loop if the case meets the expected value then break statement stop the loop there, if not then loop will keep going on.
//   if we dont use the break statement then even if the case is met still it will run till it finds break of it will end the loop.
//5. default means if non of the above then we use default. it is not mandatory. 

//Ex:
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
//   int num = 2;
//   char ch = '1' ;
//   cout<<endl ;
//   switch (ch){
//       case 1: cout<<"First"<<endl;
//             break;
//       case '1': cout<<"Character 1"<<endl;
//             break;
//       case 2: cout<<"Second"<<endl;
//             break;
//       case 3: cout<<"third"<<endl;
//             break;
//       default: cout << "None of the Above"<<endl ;
//   }
// }

//🔸Can we do nesting of switch , Yes!
//Ex:
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
//   int num = 1;
//   char ch = '1' ;
//   cout<<endl ;
//   switch (ch){
//       case 1: cout<<"First"<<endl;
//             break;
//       case '1': switch(num) {
//                 case 1: cout<<"Nesting In swtich is happening"<<endl;
//                 break;
//                }
//            break;

//       case 2: cout<<"Second"<<endl;
//             break;
//       case 3: cout<<"third"<<endl;
//             break;
//       default: cout << "None of the Above"<<endl ;
//   }
// }

//❓what if we use a switch statement inside a infinite while looop how can we get out of the loop ?
// remember In this case we can only use break inside switch statement not in while loop;
// => Ex:

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
//   int n = 1;
//   while(n <10 ){
//       int ch = '1' ;
//       switch(ch) {
//           case 1: cout<<"Not 1"<<endl ;
//           break;
//           case '1':cout<<"Found 1"<<endl ;
//           break;
//       }
//       cout<<"while looop"<<endl ;
//      n-- ;
//      exit(ch) ;
//   }
// }

//🔸Answer=> we can use exit() statement inside exit() pass the name of the variable on which the loop is running.
//           it will run the loop and get out.

//❓ Question :
//🔸 Create a calculator using switch case :

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
//  int a, b ;
//  cout<<"Enter value of A"<<endl ; ;
//  cin>>a ;
//  cout<<"Enter value of B"<<endl ; ;
//  cin>>b ;

//  char op ;
//   cout<<"Enter operation you want to perform(+, -, *, /, %)"<<endl ; ;
//   cin>>op ;
 
// switch (op){
//  case '+' : cout<<"answer : "<< a+b <<endl ;
//  break ;
//  case '-' : cout<<"answer : "<< a-b <<endl ;
//  break ;
//  case '*' : cout<<"answer : "<< a*b <<endl ;
//  break ;
//  case '/' : cout<<"answer : "<< a/b <<endl ;
//  break ;
//  case '%' : cout<<"answer : "<< a%b <<endl ;
//  break ;
//  default : cout<<"Operation no valid"<<endl ;
//  break ;
// }

// }

//❓ Question :
//  USing switch case create a program that tells 
//  how many notes of 100, notes of 50, notes of 20, notes of 1 will the total amount will have ?
//explanation:
// if total amount = 1330 ;
// then 1330/100 = 13 notes of 100 , remaining 30
// then 30/50 = 0 
// then 30/20= 1 
// then 10/1 =10

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
  
//   int total = 1330 ;
//   int n100, n50, n20, n1 ;
//   int remain = 0;
//   switch (1){
//       case 1 :{
//             n100 = total / 100;
//             cout<<"100 notes : "<<n100<<endl ;
//             remain = total % 100 ;
//             cout<<"remain :"<<remain<<endl ;
           
//            n50 = remain / 50 ;
//            cout<<"50 notes : "<<n50<<endl ;
//            remain = remain % 50 ;
          
//            n20 = remain / 20 ;
//            cout<<"20 notes : "<<n20<<endl ;
//            remain = remain % 20 ;

//             n1 = remain / 1 ;
//            cout<<"1 notes : "<<n1<<endl ;
//            remain = remain % 1 ;
//       }
//       break ;
//   }
// }


                   //🔴🔴 FUNCTIONS :
//🔸when we want to use a collection of code to do a task again and again , we cannot do it again and again
//  it will become bulky , take much space, make the program slow, and cause of bug
//🔸Thats why we Use function : 
// function is a program which does a well define task it takes value(parameter) as an input and perform the task on those input and gives/return output
// Uses : define once and use again and again by just calling its name and give some input value and you get your answer.
// we declare it above int main(){}


// #include<iostream>
// #include<math.h>
// using namespace std;

// int power(int a, int b){          
//       int ans = 1;

//       for(int i=1; i<=b; i++){
//             ans = ans * a;
//       }
//       return ans;
// }

//  int main(){
//       int a , b ;
//       cout<<"enter value of a and b"<<endl;
//       cin>>a>>b ;

//       int answer = power(a,b);
//       cout<<"Answer : "<<answer<<endl ;
//       return 0;
//  }

//🔸 FUnction cannot a variable declare in main function(int main(){ }) 

//🔸❓ function decribes is no is even or odd .
// #include<iostream>
// #include<math.h>
// using namespace std;

// //rerturn 1 => Even 
// //return 0 => odd
// bool isEven(int a) {
//       if(a&1){
//             return 0;
//       }
//       return 1;
// }

// int main() {
//   int num; 
//   cout<<"enter a number" <<endl;
//   cin>>num ;

//   if (isEven(num)){
//    cout<<num<<" is Even "<<endl ;
//   }
//   else {
//       cout<<num<<" is Odd  "<<endl ;
//   }
//   return 0 ;
// }


//❓ Question :
// find  nCr = n! / r! * (n-r)!
 
// #include<iostream>
// #include<math.h>
// using namespace std;

// int factorial(int n){                            //(int n int r) => function argument(means names listed in the function's definition)
//       int fact = 1 ;
//       for(int i=1; i<=n; i++){
//             fact = fact * i ;
//       }
//       return fact ;
// }

// int nCr(int n, int r){                         //(int n int r) => function argument(means names listed in the function's definition)
//       int nume = factorial(n) ;
//       int deno = factorial(r) * factorial(n-r) ;
//       return nume/deno ;
// }

// int main() {
//    int n, r ;
//    cout<<"enter value of n and r "<<endl;
//    cin>>n>>r ;
    
//     int answer = nCr(n, r) ;              //(n, r) => function argument(means real value that is passed in function)
//     cout<<"nCr of "<<n<<" and "<<r<<" is :" <<answer<<endl;
//     return 0 ;
// }

//🔸 we use Void as a return_type in place of Int/char/float for a function when the function is not returning any value.

//❓ Question :
// Print counting using a function :

// #include<iostream>
// #include<math.h>
// using namespace std;

// //function signature :
// void printCounting(int n){        // (int n) => function paramater 

//       //function body:
//       for(int i=1; i<=n; i++){
//             cout<< i <<" ";
//       }
//       cout<<endl ;
// }

// int main() {
//  int n ;
//  cout<<"enter a number"<<endl ;
//  cin>>n ;

// //function call :
// printCounting(n) ;

// return 0;
// }

//❓ Question :
// No is prime or not using function :

// #include<iostream>
// #include<math.h>
// using namespace std;

// // 1=> prime no:
// // 0=> not a prime no:
// bool isPrime(int n){
//       for(int i=2; i<n; i++){
//             if(n%i==0){
//                   return 0;
//             }
//       }
//       return 1;
// }

// int main() {
// int n ;
// cout<<"enter a no."<<endl;
// cin>>n ;

//  if (isPrime(n)){
//       cout<<n<<" is prime no."<<endl ;
//  }
//  else{
//       cout<<n<<" is Not a prime no."<<endl; 
//  }

// return 0 ;
// }

//❓ Question:
// find Arithmetic progresiion: for(3 * n + 7) ;

// #include<iostream>
// #include<math.h>
// using namespace std;
// int ap(int n){
//       int ans = (3*n+7) ;
//       return ans ;
// }
// int main() {
// int n ;
// cout<<"enter no"<<endl;
// cin>>n ;

// int answer = ap(n);
// cout<<"A.P for "<<n<<" is "<<answer<<endl ;

// return 0;
// }



//❓ Question:
// we have a and b give total number of there set bits(1) ;
//explanation : 
// a = 2 => 10 =>bits
// b = 3 => 11 =>bits
//setBits => 1 + 11 => 3 

// #include<iostream>
// #include<math.h>
// using namespace std;

// int setBit(int a, int b){
//       int ans = 0 ;
//       int answer = 0;
//       int bit = 0;
//       while(a!=0){ 
//            ans = ans + (a&1)  ;
//            a = a>>1;
//       }
//         while(b!=0){
//            answer = answer + (b&1 ) ;
//            b = b>>1;
//       }
//       return ans + answer ;
// }

// int main() {
// int a;
// int b;
//   cout<<"enter value of a\n" ;
//   cin>>a;
//   cout<<"enter value of b\n" ;
//   cin>>b;

//   int answer = setBit(a, b) ;
//   cout<<"total setbit of "<<a<<"and"<<b<<" is :"<<answer<<endl;

// return 0;
// }

//❓ Question:
// fibonacci series :

// #include<iostream>
// #include<math.h>
// using namespace std;

// int fibo(int n){
// int temp =0;
// int a = 1;
// cout<<0<<endl<<1<<endl ;
//    for(int i=0; i<n-2;i++){
//         int next = temp + a;
//         cout<<next<<endl ;
//         temp = a;
//         a = next ;
//    }
//    return 0;
// }

// int main() {
// int n ;
//   cout<<"enter number\n" ;
//   cin>>n;

//   int answer = fibo(n) ;

//   return 0 ;
// }


                //🔴🔴 Pass by Value :
//when we send a value from main function to a function it does not use the original value it creates a copy of that value and then perform task on it.

// #include<iostream>
// #include<math.h>
// using namespace std;

// void pass(int n){
//       n++ ;
//       cout<<"From void pass : "<<n<<endl; 
//       return ;
// }

// int main() {
// int n ;
//   cout<<"enter number\n" ;
//   cin>>n;

//   pass(n) ;
//   cout<<"From main : "<<n<<endl; 

// return 0 ;
// }

// //❓ Question output:
// #include<iostream>
// #include<math.h>
// using namespace std;

// void update(int a){
//       a = a/2 ;
// }
// int main(){
//       int a = 10;
//       update(a) ;
  
//   cout<<a<<endl ;                ///output: 10

// }

//❓ Question output:
// #include<iostream>
// #include<math.h>
// using namespace std;

// int update(int a){
//       a-=5;
//       return a;
// }
// int main(){
// int a = 15;
// update(a);
// cout<<a<<endl ;                   //output: 15

// }

//❓ Question output:
// #include<iostream>
// #include<math.h>
// using namespace std;

// int update(int a){
//       int ans = a*a;
//       return ans ;
// }
// int main(){
// int a = 14;
// a = update(a) ;
// cout<<a<<endl ;                   //output: 196

// }


