              //🔴🔴 TIME and SPACE COMPLEXITY 

//🔸It is the amount of time taken by an algorithm to run.
//🔸It is the amount of space taken by an algorithm to run.
//🔸 As a function of length of the input.

//🔸 Why ?
//=> For making better programs
//=> Comparison of algorithm


                      //🔘🔘 TIME Complexity :
//🔸It is the amount of time taken by an algorithm to run.
//🔸 As a function of length of the input.


//🔴 Notation to represent Time and Space Complexity ..

//1️⃣ Big O    :
//2️⃣ Theta θ  :
//3️⃣ Omega Ω  :

                    //1️⃣ Big O    :
//🔸 Big O calculates the worst-case time complexity of an algorithm.
//🔸 Big O Notation in Data Structure describes the upper bound of an algorithm's runtime.


                    //2️⃣ Theta θ  :
//🔸Thetha θ is used for analyzing the average-case complexity of an algorithm
//🔸Since it represents the upper and the lower bound of the running time of an algorithm, 


                     //3️⃣ Omega Ω  :
//🔸 Omega Ω provides the best case complexity of an algorithm.
//🔸 Omega notation represents the lower bound of the running time of an algorithm




//1️⃣ Big O  complexity type :

//🔘 Constant time    => O (1)     :=> If the Output is Fixed number of times / constant (like a loop printing hello world 10 times only)
//🔘 Linear Time      => O (n)     :=> If the output depend upon 'N' number of times (like a loop printing hello world n number of times (based on N))
//🔘 Logarithmic Time => O (log n) :=> Like Binary search (prefer section6 )
//🔘 Quadratic Time   => O (n²)    :=> If there is a loop running for n number of times inside that loop again another loop is running for n number of times (Loop inside another loop 2loops both running for N number of times )
//🔘 Cubic Time       => O (n³)    :=> if there is a loop running for n number of time inside that loop again another loop is running and inside that another loop is running all for n number of time (loop inside another loop inside another loop 3loops all running for n number of times)


//🔴 Complexity Chart :
//                 Ʌ           HIGH
//🔸 O (n!)       ||
//🔸 O (2n)       ||
//🔸 O (n³)       ||
//🔸 O (n²)       ||
//🔸 O (N log n)  ||
//🔸 O (n)        ||
//🔸 O (log n)    ||
//🔸 O (1)        ||           LOW



//❓ Question :
//🔸 Identify complexity ?
//Key points :
//1> => Big O tells Upper bound , worst case 
//2> => So we ignore lower degree  ex: n² + n  => ignore n lower degree, consider upper degree n² (ans: complexity O(n²))
//3> => Ignore constant number like ex: 2n² + 3n => here 2 and 3 will be ignored  , constant 
//4> => whenever there is addition operation always pick higher complex degree

//1>  f(n) => 2n² +3n           => O(n²)
//1>  f(n) => 4n^4 +3n³         => O(n^4)
//1>  f(n) => n² + log n        => O(n²)    (in complexity chart we saw O (log n) => lower boundary, and  O (n²) =>upper boundary )
//1>  f(n) => 12001             => O(1)      (Its only a number no variable so we consider it constant time )
//1>  f(n) => 3n³ + 2n² + 5     => O(n³)
//1>  f(n) => n³ / 300          => O(n³)
//1>  f(n) => 5n² + log n       => O(n²)
//1>  f(n) =>  n / 4            => O(n)      (Linear Time)
//1>  f(n) => n + 4 / 4         => O(n)      (Linear Time)


//❓ Question :
// Find complexity :

//🔘1 (two different loop) :
// for(i - n){            // Complexity is O(n)
// }
// for(j - n){            // complexity is O(m)
// }

// => when two or more different loops are used then we use addition (+) operation to calculate :
// => O(n) + O(m)  
//🔸Answeer O( n+m )

//🔘2 (nested loop) :
//  for(i - n){            // Complexity is O(n)
//   for(j - m){            // complexity is O(m)
//  }
//}

// => when two or more Nested loops are used then we use multiplication (x) operation to calculate :
// => O(n) x O(n)  
//🔸Answeer O(n * m)

//🔘 3 (one nested loop and one different loop) :
//  for(i - n){             // Complexity is O(n)
//   for(j - n){            // complexity is O(n)
//  }
// }
//🔸 => O(n * n)  => O(n²)
// for(k - n){             // complexity is O(n)
// }
//🔸=> o(n)

//🔸=> O(n²) + o(n)
//🔸Answer =>  O(n²)  (because we know we take higher boundary and in above equation( O(n²) + o(n) )  we ignore lower boundary so O(n) is ignored  )



//🔘4 (nested loop) :

//  for( 0 - n) {              // compleixty O(n)
//     for( n - i) {          // complexity O(n)    (because we take worst case and in worst case 2nd loop will run from n to 0 thats why O(n) )

//     }
//  }

//🔸=>  O(n) * O(n) 
//🔸 Answer => O(n²)


//🔴🔴 Stuck in TLE(time limited exceeded) :
//whenever we are trying to solve online code on leetcode or etc , we get stuck by TLE problem 
// which means the program we have created is taking too much time that the compiler/machine wont allow  .

//🔸 SOlution :
//  10^8 (10to the power 8) solution :=>  means most of the modern machine can perform 10^8 Operation/seconds
//  so if the program taking 10^8 time limit then we can perform O(n) or O(log n) not higher code than that.




                ////🔘🔘 SPACE Complexity :
//🔸It is the amount of space taken by an algorithm to run.

//🔸 When we create a fix integer :
//ex:
// int a; int b;  int a = 2; int b =0 ;  int arr[5] = {1,2,3,4,5} 
//🔸 => all the above integer will take O(1) constant space

//🔸 When we create a non-fiixed integer :
//ex:
// vector<int> v (n) ;   // (n) is size , vector increase the space of integer if needed in the ongoing operation/program
//🔸=>  O(n) 

