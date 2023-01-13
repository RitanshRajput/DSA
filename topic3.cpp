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

//9️⃣ Pattern question :
//  1 2 3 4
//  1 2 3 4 
//  1 2 3 4
//  1 2 3 4

//  #include <iostream>
//  using namespace std ;

//  int main() {

//     int n = 1;

//     while(n <= 4){
//        int i = 1;

//         while(i <= 4){
//         cout<< " "<< i << " " ;
//         i = i + 1;
//         }
//      cout<< endl ;
//      n = n + 1;
//     }
//  }

//🔟 Pattern questions:
//  3 2 1
//  3 2 1 
//  3 2 1

//   #include <iostream>
//   using namespace std ;

//   int main() {
//    int n = 1 ;
     
//     while(n<=3 ){
//       int i = 3 ;
//        while(i>=1){
//         cout<<" "<< i << " " ;
//         i = i - 1 ;
//        }
//        cout<<endl ;
//        n = n + 1 ;
//     }
// }

//1️⃣1️⃣ Pattern question
//  1 2 3 
//  4 5 6
//  7 8 9

// #include <iostream>
// using namespace std ;

// int main() {
   
//    int n = 1 ;
//    int i = 1 ;
//    int j = 3 ;

//     while(n <= 3){
            
//         while(i <= j){
//             cout<<" "<<i<< " ";
//             i = i + 1;
//         }
//         j = j + 3;
//         cout<< endl;
//         n = n + 1; 
//     }
// }

//1️⃣2️⃣ Pattern question;
//   *
//   * *
//   * * *
//   * * * *

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 1;
//     int j;
//     cin>>j;
//     while(n <=j){
//             int i = 1;
//         while(i <= n){
//           cout<<"*" ;
//           i = i + 1;
//         }
//         cout<<endl;
//         n = n + 1;
//     }
// }

//1️⃣3️⃣ Pattern Question:
//    1
//    2 2
//    3 3 3
//    4 4 4 4
 
//  #include <iostream>
//  using namespace std;

//  int main() {
//     int n = 1;
//     int j ;
//     cout<<"Enter nUmber"<<endl ;
//     cin>>j ;
  
//      while(n<=j){
           
//            int i = 1;
//         while(i<=n){
//               cout<< n ;
//               i = i + 1;
//         }
//         cout<<endl ;
//         n = n + 1;
//      }
//  }

//1️⃣4️⃣ pattern question:
//   1
//   2 3
//   4 5 6
//   7 8 9 10

//  #include <iostream>
//  using namespace std;

//  int main() {
//     int n = 1;
//     int i = 1;
//     int m ;
//     cout<<"Enter a number \n";
//     cin>>m ;

//     while(n<=m){
//          int j = 1 ;
//        while(j<=n){
//          cout<<" "<<i<<" ";
//          i = i + 1;
//          j = j + 1;
//        }
//        cout<<endl;
//        n = n + 1;
//     }
//  }

//1️⃣5️⃣ Pattern Question;
//   1
//   2 3
//   3 4 5
//   4 5 6 7
//   5 6 7 8 9

// #include <iostream>
// using namespace std;

//  int main(){
//     int n = 1;
//     int k;
//     cout<<"ENter a number\n";
//     cin>>k;
//     while(n<=k){
//          int j = n;
//          int i = 1;
//          while(i<=n){
//          cout<<j;
//          j = j + 1;
//          i = i + 1;
//          }
//         cout<<endl;
//         n = n + 1;
//     }
// }

//OR

// #include <iostream>
// using namespace std;

//  int main(){
//    int n;
//     cout<<"Enter a number" ;
//     cin>>n;

//       int i = 1;
//       while(i<=n){
//         int j = i;
//         while(j < 2 * i){
//             cout<<j<< "" ;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//  }


//1️⃣6️⃣ Pattern Question;
//  1
//  2 1
//  3 2 1
//  4 3 2 1

// #include <iostream>
// using namespace std;
//  int main(){

//     int n ;
//     cout<<"enter a number";
//     cin>>n;
    
//     int i = 1;
//     while(i<=n){
//      int k = 1;
//      int j = i;
//      while(k <= i){
//         cout<<j ;
//         j = j - 1;
//         k = k + 1;
//      }
//     cout<<endl;
//     i = i + 1;
//     }
//  }

// OR

// #include <iostream>
// using namespace std;
//  int main(){

//     int n ;
//     cout<<"enter a number";
//     cin>>n;
    
//     int i = 1;
//     while(i<=n){
//      int j = 1;

//      while(j <= i){
//         cout<<(i - j + 1) ;
//         j = j + 1;
       
//      }
//     cout<<endl;
//     i = i + 1;
//     }
//  }

//1️⃣7️⃣ Pattern question:
//  A A A
//  B B B 
//  C C C

// #include <iostream>
// using namespace std;

// int main(){
//    int  n ;
//    cout<<"ENter number\n";
//    cin>>n ;

//    int i = 1;
//    while(i<=n){
//        int j = 1;
//         while(j<=n){
//          char ab = 'A' + i - 1 ;
//          cout<<ab;
//          j = j +  1;
//       }
//     cout<<endl ;
//     i = i + 1;
//    }
// }

//1️⃣8️⃣ Pattern question:
//   A B C 
//   A B C 
//   A B C

// #include <iostream>
// using namespace std;
//  int main(){

//     int n ;
//     cout<<"enter number\n" ;
//     cin>>n ;

//     int i = 1;
//     while(i<=n) {
//         int j = 1;
//         while(j<=n){
//           char ab = 'A' + j - 1;
//           cout<<ab ;
//           j = j + 1;
//         }
//         cout<<endl ;
//         i = i + 1;
//     }
//  }

//1️⃣9️⃣ Pattern Question:
//  A B C 
//  D E F 
//  G H I 

// #include <iostream>
// using namespace std;
// int main() {
//    int n ;
//    cout<<"enter a number\n" ;
//    cin>>n; 

//   char ab = 'A' ;
//    int i = 1;

//    while(i<=n){
//      int j = 1;
//      while(j<=n){
//        cout<<ab  ;
//        ab = ab + 1;
//        j = j + 1;
//      }
//      cout<<endl;
//      i = i + 1;
//    }
// }

//2️⃣0️⃣ Pattern questions:
//  A B C 
//  B C D 
//  C D E

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number\n" ;
//     cin>>n ;
    
//     int i = 1;
//     while(i<=n){
//        int j = 1;
//        while(j<=n){
//         char ab = 'A' + i + j - 2 ;
//         cout<<ab ;
//         j = j + 1;
//        }
     
//         cout<<endl;
//         i = i + 1;
//     }
// }

//2️⃣1️⃣ Pattern questions:
//  A 
//  B B 
//  C C C

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter a number\n" ;
//     cin>>n ;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//         char ab = 'A'+ i -1 ;
//         cout<<ab<< " ";
//         j = j + 1;
//         }
//       cout<<endl;
//       i = i + 1;
//     }
// }

//2️⃣2️⃣ Pattern Question:
//  A 
//  B C 
//  D E F 
//  G H I J

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number\n" ;
//     cin>>n ;

//     char ab = 'A';
//     int i = 1 ;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<ab<<" " ;
//            ab = ab + 1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

//2️⃣3️⃣ Pattern Question:
//  A 
//  B C 
//  C D E 
//  D E F G 

//  #include <iostream>
//  using namespace std;
//  int main(){
//     int n ;
//     cout<<"enter a number\n" ;
//     cin>>n ;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j <= i){        
//            char ab = 'A' + i + j -2 ;
//             cout<<ab;
//             j = j + 1 ;
//         }
//         cout<<endl ;
//         i = i + 1;
//     }
//  }

//2️⃣4️⃣ pattern question:
//   D 
//   C D 
//   B C D 
//   A B C D

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number\n" ;
//     cin>>n;
    
//     int i = 1;
//     while(i <= n) {
//         int j = 1;
//         while(j<=i) {        
//            char ab = 'D' + j - i   ;
//            cout<<ab<<" " ;
//             j = j + 1 ;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

//2️⃣5️⃣ Pattern question:
//       *    
//     * *    
//   * * *    
// * * * *   

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number\n" ;
//     cin>>n;
    
//     int i = 1;
//     while(i<=n){
//          int j = 1;
//          int b = n - i;
//        while( j<=b){
//          cout<<" ";
//         j = j + 1;
//        }
//        int k = 1;
//        while(k<=i){
//         cout<<"*";
//         k = k + 1;
//        }      
//     cout<<endl;
//     i = i + 1;
//     }
// }

//2️⃣6️⃣ Pattern question:
//  * * * * 
//  * * *
//  * *
//  * 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number\n" ;
//     cin>>n;
    
//     int i = 1;
//     while(i<=n){
//          int j = 1;
//          int b = n - i;
//        while( j<=b){
//          cout<<"*";
//         j = j + 1;
//        }        
//     cout<<endl;
//     i = i + 1;
//     }
// }

//2️⃣7️⃣ Patterns Questions:
//  * * * * 
//    * * *
//      * *
//        * 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number\n" ;
//     cin>>n;
    
//     int i = 1;
//     while(i<=n){
//          int k = ;
//         while(k <){
//           cout<<" " ;
//           k = k + 1;
//         }
//          int j = 1;
//          int b = n - i;
//        while( j<=b){
//          cout<<"*";
//         j = j + 1;
//        }        
//     cout<<endl;
//     i = i + 1;
//     }
// }

// 53: 06 4th video