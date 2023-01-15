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
//   0     1  | 0
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


//🔘🔘 Increment and Decrement :

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


//🔘🔘 For Loop :

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


//❓ Question leetcode easy;
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
//  cout<<count ;
// }


// 6 / 149 