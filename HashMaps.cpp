
//                   //🔴🔴🔴HashMaps  or Unordered_map in c++ 

//🔴Hashmap is a data structure which has very low time complexity for insertion/deletion/searching, etc

// unordered_map is an associated container that stores elements formed by the combination of a key value and a mapped value. 
// The key value is used to uniquely identify the element and the mapped value is the content associated with the key.
// Both key and value can be of any type predefined or user-defined. 
// In simple terms, an unordered_map is like a data structure of dictionary type that stores elements in itself. 
// It contains successive pairs (key, value), which allows fast retrieval of an individual element based on its unique key.

// Internally unordered_map is implemented using Hash Table, 
// the key provided to map is hashed into indices of a hash table which is why the performance of data structure
// depends on the hash function a lot but on average, the cost of search, insert, and delete from the hash table is O(1). 

//🔸Note:
// In the worst case, its time complexity can go from O(1) to O(n), 
// especially for big prime numbers. In this situation, 
// it is highly advisable to use a map instead to avoid getting a TLE(Time Limit Exceeded) error.

//🔸Inbuild stuff:
// Map == O(log n) time complexity
// unordered_map = O(1) time complexixty


//                                  Value
//                                   ⬆️ 
// Ex:         Unordered_map< int, string > umap ;
//                            ⬇️            ⬇️ 
//                            key          map Name


//🔴unordered_map vs unordered_set

//🔸Unordered_map                                  

// Unordered_map contains elements only in the form of (key-value) pairs.	
// Operator ‘[]’ to extract the corresponding value of a key that is present in the map.	

//🔸Unordered_set
// Unordered_set does not necessarily contain elements in the form of key-value pairs, these are mainly used to see the presence/absence of a set.
// The searching for an element is done using a find() function. So no need for an operator[].


// Note: For example, consider the problem of counting the frequencies of individual words. We can’t use unordered_set (or set) as we can’t store counts while we can use unordered_map


//🔴unordered_map vs map

//🔸Unordered_map

// The unordered_map key can be stored in any order.	
// Unordered_Map implements an unbalanced tree structure due to which it is not possible to
// maintain order between the elements	
// The time complexity of unordered_map operations is O(1) on average.	

//🔸Map
// The map is an ordered sequence of unique keys 
// Map implements a balanced tree structure which is why it is possible to maintain order between the elements (by specific tree traversal)
// The time complexity of map operations is O(log n)



//🔴Methods on unordered_map 
// A lot of functions are available that work on unordered_map.
//  The most useful of them are:

// operator =
// operator []
// empty
// size for capacity
// begin and end for the iterator.
// find and count for lookup.
// insert and erase for modification.

// The below table shows the complete list of the methods of an unordered_map:

// Methods/Functions            Description

//🔸at()	      : This function in C++ unordered_map returns the reference to the value with the element as key k
//🔸begin() 	  : Returns an iterator pointing to the first element in the container in the unordered_map container
//🔸end()	      : Returns an iterator pointing to the position past the last element in the container in the unordered_map container
//🔸bucket()	  : Returns the bucket number where the element with the key k is located in the map
//🔸bucket_count  : Bucket_count is used to count the total no. of buckets in the unordered_map. No parameter is required to pass into this function
//🔸bucket_size	  : Returns the number of elements in each bucket of the unordered_map
//🔸count()	      : Count the number of elements present in an unordered_map with a given key
//🔸equal_range	  : Return the bounds of a range that includes all the elements in the container with a key that compares equal to k
//🔸find()	      : Returns iterator to the element
//🔸empty()	      : Checks whether the container is empty in the unordered_map container
//🔸erase()	      : Erase elements in the container in the unordered_map container





//🔴Implementation: of unordered_map 

// #include<iostream>
// #include<map>
// #include<unordered_map>
// using namespace std ;

// int main() {

// //🔸creation
// unordered_map<string, int> m ;

// //🔸insertion
// // 1 way to insert key value in unordered_map
// pair<string, int> p = make_pair("babbar", 3) ;
// m.insert(p) ;

// // 2 way to insert key value in unordered_map
// pair<string, int> pair2("love", 2) ;
// m.insert(pair2) ;

// // 3 way to insert key value in unordered_map
// m["mera"] = 1 ;         // <"mera", 1>

// m["mera"] = 2 ;         // <"mera", 2>         //value gets updated


// //🔸searching in unordered_map

// cout<< m["mera"] << endl ;                // output: 2
// cout<< m.at("babbar") << endl ;           // output: 3

// // cout<< m.at("unknown") << endl ;        //output: terminate called after throwing an instance of 'std::out_of_range' what():  _Map_base::at
// cout<< m["unknown"]   << endl;             //output: 0      this method create a new entry and assign value as 0
// cout<< m.at("unknown") << endl ;           //output: 0 
   

// //🔸size in unordered_map

// cout<< m.size() <<endl ;               //output: 4

// //🔸check presence if available or not

// cout<< m.count("bro") << endl ;           //output: 0     false / not present
// cout<< m.count("babbar") << endl ;        //output: 1     true / present
 

// //🔸 erase in unordered_map

// cout<< m.size() << endl ;      //output: 4 before erase

// m.erase("love") ;

// cout<< m.size() << endl ;      // output: 3 after erase


// //🔸 iteration / traversing in unordered_map 

// // 1 way to iterate through unordered_map
// for(auto i:m){
//     cout<< i.first << " == "<< i.second <<endl ;
// }
// //output: unknown == 0
// //        mera == 2
// //        babbar == 3

// // 2 way to iterate using iterator in unordered_map

// unordered_map<string, int> :: iterator it = m.begin() ;

// while(it != m.end()) {
//     cout<< it -> first << " " << it -> second << endl ;
//     it++ ;
// }
// // output: unknown 0
// //         mera 2
// //         babbar 3



//     return 0 ;
// }



//                     //❓Question: Maximum Frequency Number

// Ninja is given an array of integers that contain numbers in random order. Не needs to write a program to find and return the number
// which occurs the maximum times in the given input. Не needs your help to solve this problem.
// If two or more elements contend for the maximum frequency, return the element which occurs in the array first i.e. whose index is lowest.
// For example,
//    For 'arr' 2, 3, 1, 2]. you need to return 1.

// Constraints:
//    1 <= T <= 5
//    1 <= N <= 10000
//   -10 ٨ 3 <= |arr| <= 10 ٨ 3
//    Time Limit: 1 sec


// Sample Input 1:
// 1 
// 13
// 2 12 2 11 -12 2 -1 2 2 11 12 2 -6 
// Sample Output 1:
// 2
// Explanation Of Sample Input 1:
// Test case 1:
// For the first test case of sample output 1, as we start traveling the array, ‘2’ has the highest frequency, hence our answer is ‘2’.

// Sample Input 2:
// 2 
// 3
// 4 -5 1
// 4
// 1 -2 1 -2
// Sample Output 2:
// 4
// -2
// Explanation Of Sample Input 2:
// Test case 1:
// For the first test case of sample output 2, as all the elements have only occurred once, so we will take the first element that has occurred once. Therefore our output will be ‘4’.

// Test case 2:
// -2 has the highest frequency.


// #include<iostream>
// #include<vector>
// #include<limits.h>
// #include<unordered_map>
// using namespace std ;

// int maximumFrequency(vector<int> &arr, int n) {
   
//     unordered_map<int,int> count ;
//     int maxFreq =  0;
//     int maxAns  = 0 ;

//     for(int i=0; i<arr.size(); i++) {
//         count[arr[i]]++ ;
//         maxFreq = max(maxFreq, count[arr[i]]) ;
//     }
    
//     for(int i=0; i<arr.size() ; i++) {
//         if(maxFreq == count[arr[i]]) ;
//         maxAns = arr[i] ;
//         break; 
//     }

//     return maxAns ;
// }

//🔸Time complexity: O(N)
//🔸space complexity: O(N)




//                              🔴Bucket array :
// It is a kind of a container which has many boxes with indexes which is used to store value
//         [  |   |   |    |   |   |  ]
//          0   1   2   3   4   5    6

//                              🔴Hash Code :
// Hash code is used to convert string,char, obj into == int
// to create a mapping with index of array
// Also uniform distribution : suppose we have babbar=>23 and babbra=>23 both are having same number 23
//  so if we store both string in same index then it will collide also called collsion
//  therefore hashCode is used for uniform distribution which means it will allot another index for same number string
// means uniformly distribute every object/key

//                        🔴compression Function :
// when we use hashcode to convert any variable or object into int 
// then it needs to be in the range of that array indexes so to make 
// Int which we got after converting using hashcode into range of that array
// we use compression function


//                        🔴🔴 hashcode type:

//🔸1. identity function
// means whatever we send as input in hashcode and get output as it is without any changes then is called identity function

// ex:       23  ==>  [hascode] ==> 23

// 🔸2. another way to create a hashcode

//ex:  "babbar" ==> [hashcode] ==> 24

// just for example calculation may vary :
//     b + a + b + b + a + r 
//    97   96  97  97  96  112   ==>  606 ==>   606 % n   ==>  24

// 🔸3. another way to create a hashcode

//ex:  "babbar" ==> [hashcode] ==> 25

// just for example calculation may vary :
//        [b| a| b| b| a| r]
//         0  1  2  3  4  5
//  (b*0) +  (a*1) +  (b*2) +  (b*3) +  (a*4) +  (r*5) 
//       ==  1283 ==>  1283 % n ==> 25


//                            🔴colllsion:

//      "babbar" ==> [hashcode] ==> 24
//      "babbra" ==> [hashcode] ==> 24

// both above string get same output which means they are both ready to be store in same index which is bad

// so to overcome collison we have some methods :
//🔸 Open Hashing
//🔸 closed Addressing

//               🔴 Open Hashing: 
// To store in same place

// In open hashing similar elements get store in same index not direclty but using 
// linked list , means in open hashing it store head of linkedlist and if there are mulitple 
// element on same index then it store those element in linekdlist

//        "babbar"  ==>   23  ==>  5th index
//        "babbra"  ==>   23  ==>  5th index

// index of array :                    5th
// arrray :           [  |   |   |  | Head |  |   |  |  ]
//                                     ⬇️ 
// linkedlist :                       [ babbar ] => [ babbra ] => [ ] => NULL

//🔸 Also called Separate chaining


//              🔴 closed Addressing :
// if there are multiple element to be stored on the same index then using closed
// addressing we can store that element in next or another index/place

//🔸How to determine next index to store that similar element:
// it is done by a function 

//         Hi(a)  =  h(a) + Fi(a)     // Fi(a) ith attempt me kaha par place karna hai yaha se nikal lenge

//🔴Linear probing : 
/// its a subtype of above function where

//          F(i) => i

//        "babbar"  ==>   23  ==>  5th index
//        "babbra"  ==>   23  ==>  5th index

// index of array :                   7th
// arrray :           [  |   |   |  |babbar|  |   |  |  ]

//  Hi(a)  =  h(a) + Fi(a) 
//   F(i) => i

// attempt 0 :
//   f(0) => 0      
//   Hi(a) = 7 + 0  ==> 7th index       // h(a)  it is the index where first element was stored

// attempt 1 :
//   f(1) => 1
//   Hi(a) = 7 +  1  ==> 8th index

// attempt 4:
//   f(4) => 4
//   Hi(a) = 7 +  4  ==> 11th index


//🔴 Quadratic probing :
// it is also a subtype of closed addressing in which 

//     F(i) => i^2

// index of array :                   7th
// arrray :           [  |   |   |  |babbar|  |   |  |  ]

//  Hi(a)  =  h(a) + Fi(a) 
//   F(i) => i^2

// attempt 0 :
//   f(0) => 0      
//   Hi(a) = 7 + 0  ==> 7th index      

// attempt 1 :
//   f(1) => 1^2
//   Hi(a) = 7 +  1  ==> 8th index

// attempt 2:
//   f(2) => 2^2  => 4
//   Hi(a) = 7 +  4  ==>  11th index

// attempt 3:
//   f(3) => 3^2  => 6
//   Hi(a) = 7 +  6  ==>  13th index



//                   🔴Complexity analysis :

//  "mera bhai love babbar bro kya baat hai"

//  n => total no. of word
//  k => word length

// hashcode  ==> O(K)    
///  if( n >> k)
//    ~ O(1)            // complexity of hashcode assuming n is far far greater than k


// 🔸traverse complexity

//  n => no of entries in map
//  b => no of boxes available

//              [  |  |11|  |12|  |13|   |  ]
//               0   1  2  3  4  5  6  7   n         ==> b
//         11, 12, 13 ==> n

// no. of entries in a  box ==>   n/b    ==> n/b is also called load factor
// and we always ensure  (n / b)  < 0.7


//🔸 if in (n/b)  => n is increasing
// then to satisfy (n/b) < 0.7  this condition
// we will increase b as well  ( where b is no. of available boxes)
//  for that we use Rehashing in which we increase bucket size  (n/b)=> half
//  then again hashing on every entries 


// so therefore insertion is done by O(1) time complexity using unordered_map/hashmap
// same goes for deletion and searching

//🔴 what we learned 

// implementation
//  using linkedlist          ==> O(N)
//  using Binary Search Tree  ==> O(log n)

//  using bucket array and hash Function (in which we use hashcode and compression function) also we use( open hashing and closed addressing)
//  we can achive insertion/deletion/searching in ===> O(1)