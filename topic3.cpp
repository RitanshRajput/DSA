 //🔘🔘 Conditional && Loops

//🔸 IF / ELSE :

//1️⃣ program to see if a or b greater than smaller than or equal to each other
//     #include <iostream>
//     using namespace std ;
    
//     int main() {
//         int a , b ;
//         cin >> a >> b ;
    
//        if(a > b) {
//         cout << a << " is greater than " << b <<endl ;    
//        } 
//        else if (a < b) {
//         cout << b << " is greater than " << a <<endl ;
//        }
//        else {
//         cout << a << " is equal to " << b  <<endl ;
//        }
//     }

//🔸 Cin.get() :
//🔸 Generally cin do not count space " ", tab '\t', enter '\n' 
//But we can make it accept those values too by  cin.get()
//ex;
    // #include <iostream>
    // using namespace std ;
    
    // int main() {
    //  int a, b ;
    //   a = cin.get() ;
    //   cout << "value of a is : "<<a << endl ;
    // }

// Enter has a value of 10
// Tab has a value of 9     
// space has a value of 32

//2️⃣ program to check if number is positive negative or 0 
//   #include <iostream>
//     using namespace std ;
    
//     int main() {
//      int a ;
//      cin>> a ;
     
//      if(a > 0) {
//         cout << a <<" : is positive number ";
//      }
//      else if(a < 0 ){
//         cout << a << " : is negative number" ;
//      }
//      else {
//         cout << a << " : is zero" ;
//      }
//     }

//🍀 Code :
// #include <iostream>
// using namespace std ;

//      int main() {
//       int a = 2;
//       int b = a+1 ;
     
//       if((a=3)==b) {
//          cout<<a ;
//       }
//       else{
//          cout<<a+1 ;
//       }
//      }
//      //output : 3

//🍀 Code :
// #include <iostream>
// using namespace std ;

//     int main() {
//       int a = 24;
    
//       if(a>20) {
//         cout<<"love" ;
//       }
//       else if(a == 24){
//         cout<<"lovely" ;
//       }
//       else{
//         cout<< "bhalo" ;
//       }
//       cout<<a ;
//     }
//     //output: love 24


//3️⃣ program to tell whether a character is 'a' - 'z' lowercase, 'A'-'Z' uppercase, or '0' - '9' numeric
// #include <iostream>
// using namespace std ;

//     int main() {
//       char a ;
//       cin>> a ;
      
//      if(a >= 97 && a <= 122)
//      {
//         cout<<" is lowercase" ;
//      }
//      else if (a >= 65 && a <= 90)
//      {
//         cout<< a << " is uppercase" ;
//      }
//      else if(a >= 48 && a <= 57)
//      {
//         cout<< a << " is numeric value" ;
//      }
//    }


//🔘 While loop:
//🔸 until the condition is true keep doing the program 
//🔸 stop when the condition becomes false.

//    #include <iostream>
//    using namespace std ;

//  int main() {
//     int i = 1 ;
//   while(i < 10) {
//     cout<< "Love you" <<endl;
//     i = i + 1 ;
//   }
//  }

//4️⃣ Sum of 1 to n ;
//     #include <iostream>
//    using namespace std ;

//  int main() {
//     int n ;
//     int i = 1 ;
//     int sum = 0 ;
//     cin>> n ;

//     while(i <= n){
//         sum = sum + i ;
//         i = i + 1;
//         cout<< sum <<endl ;
//     }
//  }

//5️⃣ Find the sum of all even no. 

//     #include <iostream>
//    using namespace std ;

//  int main() {
//    int i = 1 ;
//    int n ;
//    int sum = 0 ;
//    cin>> n ;

//    while( i<=n) {
//     if(i % 2 == 0) {
//      sum = sum + i ;
//      cout<< sum << endl ;
//     }
//    i= i + 1 ;
//    }
//  }

//6️⃣ given number is prime or not :
//     #include <iostream>
//    using namespace std ;

//    int main() {
//     int i = 2 ;
//     int n;
//     int count = 0 ;
//     cin>> n ;

//     while (i<n){
//       if(n % i == 0){
//         count = count + 1 ;
//        }
//      i = i + 1 ;
//     }
//     if(count > 0){
//         cout<<n<<" not prime yar" ;
//     }
//     else{
//         cout<<n<<" Yes prime yaar" ;
//     }
// }


//7️⃣ pattern question:
//    ****
//    ****
//    ****
//    ****

//    #include <iostream>
//    using namespace std ;

//    int main() {
//         int i = 1;

//         while(i <= 4 ){
//           int j = 1;
//             while (j <= 4){
//               cout<<" *";
//               j = j+1 ;
//             }
//           cout<<endl;
//           i = i + 1 ;
//       } 
//    }

//8️⃣ Pattern question:
//   1 1 1
//   2 2 2
//   3 3 3

//    #include <iostream>
//    using namespace std ;

//    int main() {
//       int i = 1 ;

//       while( i<=3){
//       int j = 1 ;
//         while(j<=3){
//             cout<<" "<<i<<" " ;
//             j = j + 1;
//         }
//         i = i + 1 ;
//         cout<<endl ;
//       }
//    }
