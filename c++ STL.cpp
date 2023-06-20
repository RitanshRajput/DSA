                            //🔴🔴 C++ STL

//🔸C++ STL (standard template library) is a software library for the C++ language that provides a collection of templates representing containers, iterators, algorithms, and function objects.

//🔘 We will learn about 2 template library in C++ :
//1️⃣ Container : An STL container is a collection of objects of the same type (the elements). Container owns the elements. Creation and destruction is controlled by the container.
//2️⃣ Algorithm : The algorithms library defines functions for a variety of purposes (e.g. searching, sorting, counting, manipulating) that operate on ranges of elements. Note that a range is defined as [first, last) where last refers to the element past the last element to inspect or modify.


            //🔴1️⃣ Containers Object type and there Implementation :

//1️⃣ Sequence container :
//1. Array
//2. Vector
//3. Deque
//4. List
//5. forward_list

//2️⃣ Container adaptors :
//1. Stack
//2. Queue
//3. Priority Queue

//3️⃣ Associative containers :
//1. Set
//2. Map
//3. MultiSet
//4. MultiMap

//4️⃣ Unordered Associative :
//1. Unordered Set
//2. Unordered Map
//3. Unordered MultiSet
//4. Unordered MultiMap



                      //🔘1️⃣ Sequence container :
//🔸 sequence containers refer to a group of container class templates in the standard library of the C++ programming language that implement storage of data elements. 
//🔸 Being templates, they can be used to store arbitrary elements, such as integers or custom classes.


                             //1️⃣ Array :  
//🔸 Array stl is static so we dont often use it in Competitive programming.
//🔸 Difference between normal array and stl array :

//🔸Implementation of stl array is based on fixed size of static(predefined) array.

// #include<iostream>
// #include<array>                          // To use array stl we will initialise its library
// using namespace std; 

// int main(){

// int basic[3] = {1, 2, 3} ;              // Normal array 

// array<int, 4> arr ={4, 3, 2, 1} ;       // declaring stl array = array(keyword) <int(variable type), 4(size of array)>  arr(array Name) = {4,3 ,2 ,1} data
 
// int size = arr.size() ;                 // to get size of the array : we use size() library function

// for(int i=0; i<size; i++){             // Using loop to get element of stl array 
//     cout<<arr[i]<<endl;
// }

// cout<<" Element at 2nd Index : "<<arr.at(2)<<endl ;       // Using .at(index Number)  we can see the element on the given index
 
// cout<<" Empty of Not : "<<arr.empty()<<endl ;             // Using .empty()  we can see if the stl array is  empty or not, this function returns an boolean value (0, false if Not empty),  (1, true, if empty)

// cout<<" First Element : "<<arr.front()<<endl ;            // Using .front() we can access the first element of an stl array.

// cout<<" last Element : "<<arr.back()<<endl ;            // Using .back() we can access the last element of an stl array.

//     return 0; 
// }


                             //2️⃣ Vector 
//🔸Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.
//🔸Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators
//🔸In C++, vectors are used to store elements of similar data types. However, unlike arrays, the size of a vector can grow dynamically. That is, we can change the size of the vector during the execution of a program as per our requirements. 
//🔸Vectors are part of the C++ Standard Template Library.

//🔸Vector is dynamic 

//Ex:
// We add 4 element in 1st Vector :
// Now we try to add one more element in the same vector with size 4:
// But the vector is already full , so?
// So the vector will create new vector with double the size of previous vector ex: Vector of size 8
// And then add all the previous vector value in the new double size vector and dumped the old vector 


//🔸 Implementation of vector in stl :

// #include<iostream>
// #include<vector>                      // To use vector we use <Vector> stl 
// using namespace std ;

// int main(){

// vector<int> vec ;                 // initialising vector , vector(keyword) <int (variable type)> = vec (variable Name) ;

// cout<<" Vector size : "<<vec.capacity()<<endl ;      // Using .capacity()  to check the size/capacity of any vector we use : initially its 0

// vec.push_back(1) ;              // Using .push_back(element) to add element in the last of the vector :

// cout<<" Size after adding value : "<<vec.capacity()<<endl ;       // capacity = 1 

// vec.push_back(2);
// cout<<" size after adding value 2nd : "<<vec.capacity()<<endl ;   //capacity = 2

// vec.push_back(3);
// cout<<" size after adding value 3nd : "<<vec.capacity()<<endl ;   //capacity = 4 :  here the capacity is increased due to less space in previous vector so new vector with double size is created.

// cout<<" first value in vector : "<<vec.front()<<endl ;           // front() first element = 1
// cout<<" last value in vector : "<<vec.back()<<endl ;             // back() last element  = 3


// cout<<" before pop : "<<endl ;
// for(int i:vec){                  // loop to see element in vector
//   cout<<i<<" " ;                    // before pop the elements where = 1,2,3,
// }
// cout<<endl ;

// vec.pop_back() ;              // Using .pop_back() to remove element from the last of the vector :

// cout<<" after pop_back : "<<endl ;
// for(int i:vec){
//     cout<<i<<" ";                      // after pop the elements are = 1,2,
// }


// cout<<" before clearing vector : "<<vec.size()<<endl ;

// vec.clear() ;          // Using .clear() to clear all the element of the vector,🔸 .clear() only remove the element of vector but the capacity of vector will still be same , means the space assign to the vector will still be same

// cout<<" after clearing vector : "<<vec.size()<<endl ;


// vector<int> a(3, 1) ;            // If we want to predefine the size of array we can do it by : vector<int> a(3(size), 1(initialise all element will)) ;  if we dont give initialiser then it will assign 0 for all the element .

// cout<<" after initialising vector a size : "<<endl;
// for(int i:a){
//     cout<<i<<" ";                   // output : 1 1 1 
// }

// vector<int> b(a) ;             // to copy a vector into another we just : vector<int> arr(a(name of vector we want to copy from))

// cout<<endl<<" after copying a in b : "<<endl ;
// for(int i:b){
//     cout<<i<<" ";               // output : 1 1 1 
// }

// return 0 ;
// }



                         //3️⃣ Double Ended Queue (DEQ)/(DEQUE)  :

//🔸Double-ended queues are sequence containers with the feature of expansion and contraction on both ends.
//   They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed.

//🔸 With the help of deq we can push as well as pop element at the same time on both end of an vector/array.

//🔸 Implementation of DEQ in stl :


// #include<iostream>
// #include<deque>                  //Library to use double ended queue
// using namespace std ;

// int main(){

// deque<int> d ;                   //Initialise deque array ;

//  d.push_back(1)  ;               // Pushing element in back of deque array
//  d.push_back(2)  ;

//  d.push_front(3) ;              // pushing element in front of deque array
//  d.push_front(4) ;

// cout<<" after pushing from front and back : "<<endl ;
// for(int i:d){
//     cout<<i<<" " ;              //output:  4 3 1 2
// }

// d.pop_back() ;                // Poping from back of the deque
// d.pop_front() ;               // Poping from front of the deque

// cout<<" after poping from front and back : "<<endl ;

// for(int i:d){
//     cout<<i<<" ";            //output :  3  1
// }

// cout<<endl<<" Printing first element in the deque : "<<d.at(0)<<endl ;    //output: 3(0th index)

// cout<<" printing using front : "<<d.front()<<endl ;      //output : 3
// cout<<" printing using back : "<<d.back()<<endl ;        //output : 1

// cout<<" checking empty or Not : "<<d.empty()<<endl ;    //output : 0 false

// cout<<" before erase : "<<d.size()<<endl ;     //output : 2
// d.erase( d.begin(), d.begin()+1 )  ;          // Using .erase(from, to) : to remove the element of the deque array
// cout<<" after erase : "<<d.size()<<endl ;      //output : 1

//     return 0; 
// }




                              //4️⃣ List :
//🔸 Lists are sequence containers that allow non-contiguous memory allocation. 
//   As compared to vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick. Normally,
//   when we say a List, we talk about a doubly linked list.


//🔸Implementation :

// #include<iostream>
// #include<list>                      // Library to use list 

// using namespace std ;
// int main(){

// list<int> li ;                     // initialisation 

// li.push_back(1) ;                  // pushing element from back
// li.push_front(2) ;                 // pushing element from front

// cout<<" after pushing from front and back : "<<endl ;
// for(int i:li){
//     cout<<i<<" ";                  // output : 2 1
// }

// li.erase(li.begin());              // using erase to remove element , and .begin() to get element at the beginning of li list

// cout<<endl<<" after erase : "<<endl ;
// for(int i:li){
//     cout<<i<<" ";                  //output: 1 
// }

// cout<<endl<<" size of list : "<<li.size()<<endl ;      //output : 1     

// list<int> num(5, 100) ;
// cout<<endl<<" new list with 5times 100 : "<<endl ;
// for(int i:num){
//     cout<<i<<" ";                  //output: 100 100 100 100 100
// }

//     return 0;
// }






                       //🔘2️⃣ Container adaptors :
 //🔸 These types of containers are called container adapters.
 //🔸 The C++ Standard Library implements class templates such as stack, queue, and priority_queue as a container that puts constraints on the process of storage and retrieval of elements.


                              //1️⃣ Stack :
//🔸 Stack in C++ STL is a LIFO (last-in-first-out) container adapter that uses an encapsulated vector/deque/list object as its underlying container. 
//🔸 In a stack, we both add and delete elements only from the top of the stack.

//🔸Implementation :

// #include<iostream>
// #include<stack>               // library for using Stack
// using namespace std ;

// int main() {

// stack<string> s ;                    // Initialising stack with String variable 

// s.push(" first ") ; 
// s.push(" second ") ;
// s.push(" third ") ;
// s.push(" fourth ") ;
// s.push(" fifth ") ;

// cout<<" Top Element of stack : "<<s.top()<<endl ;        //output : fifth

// s.pop();
// cout<<" after poping one element the top is : "<<s.top()<<endl ;  //output : fourth 

// cout<<" Size of stack :"<<s.size()<<endl ;         //output : 4

// cout<<" Empty or Not : "<<s.empty()<<endl ;        //output : 0 false

//     return 0 ;
// }



                         //2️⃣ Queue :
//🔸 Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement.
//🔸 Elements are inserted at the back (end) and are deleted from the front.


//🔸Implementation :

// #include<iostream>
// #include<queue>                    // library for using Queue

// using namespace std;
// int main(){

// queue<string> q;                   //initialising Queue using string as a variablee

// q.push("first") ;
// q.push("second") ;
// q.push("third") ;
// q.push("fourth") ;
// q.push("fifth") ; 


// cout<<" first element : "<<q.front()<<endl ;        //output : first
// cout<<" last element : "<<q.back()<<endl ;          //output : fifth
// cout<<" size before poping : "<<q.size()<<endl ;    //output : 5

// q.pop() ;
// cout<<" after poping the front element is : "<<q.front()<<endl ;    //output : second
// cout<<" size after poping : "<<q.size()<<endl ;        //output : 4

//     return 0 ;
// }



                          //3️⃣ Priority Queue :
//🔸 A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue,
//   and elements are in non-increasing or non-decreasing order (hence we can see that each element of the queue has a priority {fixed order} .

//🔸Whenever we create a priority queue the heap it creates is always max heap or min heap :
//🔸By default the priority queue is set to create max heap :
//🔸max heap / min heap :  means whenever we will try to fetch data it will either give as maximum element or minimum element from the queue.


//🔸Implementation :

// #include<iostream>
// #include<queue>                   //library for using Priority Queue is same as queue

// using namespace std ;
// int main(){

// priority_queue<int> pqMax ;         // Initialising Priority Queue (by default max heap)

// priority_queue< int, vector<int>, greater<int> > pqMin;    //initialising min heap priority queue 

// pqMax.push(1) ;
// pqMax.push(2) ;
// pqMax.push(3) ;
// pqMax.push(4) ;
 
//  cout<<" Size of max heap : "<<pqMax.size()<<endl ;         //output: 4

// int n = pqMax.size() ;               // we declare n = pqMax.size()  when we use pqmax.size() as a consition in forloop the size of pqMax is decreasing on each iteration :
// for(int i=0; i<n; i++){
//     cout<<pqMax.top()<<" ";           //output : 4 3 2 1        (because its a max heap it is printing greater element first)
//     pqMax.pop() ;                     // after printing element it will pop the last element 
// }
// cout<<endl ;
//  cout<<" Size of max heap after poping : "<<pqMax.size()<<endl ;         //output: 0



// pqMin.push(1);
// pqMin.push(2);
// pqMin.push(3);
// pqMin.push(4);

// cout<<"size of min heap :"<<pqMin.size()<<endl ;       //output : 4

// int m = pqMin.size() ;
// for(int i=0; i<n; i++){ 
//     cout<<pqMin.top()<<" ";                    //output : 1 2 3 4
//     pqMin.pop() ;
// }

// cout<<"size of min heap after poping : "<<pqMin.size()<<endl ;       //output : 0

// cout<<" empty or not : "<<pqMin.empty()<<endl ;           //output : 1 true
//     return 0 ;
// }





                           //🔘3️⃣ Associative containers :
//🔸Associative containers in C++ is one that stores “Sorted Data”, in contrast to other Container types. Because of this, it is much faster to search through it and access the data. It does however mean, inserting data will take longer (to place it in the correct position).


                            //1️⃣ Set :
//🔸 A set is a data structure that stores unique elements of the same type in a sorted order. 
//   Each value is a key, which means that we access each value using the value itself With arrays,
//   on the other hand, we access each value by its position in the container
//   (the index). Accordingly, each value in a set must be unique

//🔘Ordered_Set :  O(log n) time complexity
//🔸Every element should be unique 
//🔸Either we add or delete the element no modification allowed for element in set
//🔸when we fetch element they are send in sorted order.

//🔘Unordered_Set :
//🔸Set is slow compare to Unordered_set
//🔸In unordered set the element we receive are in Unsorted order or Random.


//🔸Implementation :

// #include<iostream>
// #include<Set>                       //library for using Set

// using namespace std;
// int main(){

// set<int> s;                //initialising Set

// s.insert(3) ;                    // adding element in Set
// s.insert(2) ;
// s.insert(2) ;                   // repeated element  (even we have inserted en element if it already exists then it wont count/added/inserted)
// s.insert(4) ;
// s.insert(9) ;
// s.insert(9) ;                     //repeated element  (even we have inserted en element if it already exists then it wont count/added/inserted)
// s.insert(5) ;

// for(auto i:s) {                // auto specifier automatically type deduction
//     cout<<i<<" " ;              //output :2 3 4 5 9   (sorted order)
// }
// cout<<endl;

// set<int>::iterator it = s.begin() ;       //initialising it set for beginning element
// it++ ;                                    // it++ means it = it + 1 (2nd element)

// s.erase(it);                              // erasing 2nd element of it

// for(auto i:s){
//     cout<<i<<" ";                        //output :  2 4 5 9     (before it was 2 3 4 5 9 )   2nd element 3 is deleted
// }

// cout<<endl<<" value present or not using .count : "<<s.count(5)<<endl ;             // .count tells the whether the argument exists or not
//                                                        //output : 1 true

// set<int>::iterator itr = s.find(4) ;            // .find() to find the element

// for(auto it=itr; it!=s.end(); it++){          // loop to run from .find() to .end() 
//     cout<<*it<<" ";                           //output: 5 9
// }

//     return 0;
// }


                              //2️⃣ MAP :
//🔸 Maps are the associative containers that store sorted key-value pair, 
//   In which each key is unique and it can be inserted or deleted but cannot be altered.
//🔸Values associated with keys can be changed.
//🔸 In map the order is Sorted 
// For example: A map of Employees where employee ID is the key and name is the value can be represented as:

//time complexity: O(log n)

//🔸Implementation :

// #include<iostream>
// #include<map>

// using namespace std;
// int main(){

// map<int, string> m;             //initialising map 

// m[1] = "rita";                  //one way of declaring element(key, value) in map
// m[3] = "nikita";
// m[6] = "ladoo";

// m.insert({ 4,"bheem" }) ;       //second way of declaring element in map

// for(auto i:m){
//     cout<<i.first<<" ";          //output : 1 3 4 6      (.first prints the first key(first variable))
// }
// cout<<endl;

//  //for loop to print key and value both  (.second used to  print value(second variable))
// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<" , ";           //output : 1 rita , 3 nikita , 4 bheem , 6 ladoo
// }

// cout<<endl <<" finding 4 : "<<m.count(13)<<endl ;     //output : 0 true

// cout<<" before erase : "<<endl ;
// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<" , ";           //output : 1 rita , 3 nikita , 4 bheem , 6 ladoo
// }

// m.erase(3) ;

// cout<<" after erase : "<<endl ;
// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<" , ";           //output : 1 rita , 4 bheem , 6 ladoo
// }
// cout<<endl ;

// auto it = m.find(4) ;

// for(auto i=it; i!=m.end();i++){
//     cout<<(*i).first<<" " ;               //output : 4 6
// }

//     return 0;
// }


                                 //🔴🔴🔴🔴ITERATORs :
//🔸Iterators are used to point at the memory addresses of STL containers. 
//🔸They are primarily used in sequences of numbers, characters etc.
//🔸They reduce the complexity and execution time of the program.

//🔸Operations of iterators :-
//1️⃣ begin() :- This function is used to return the beginning position of the container.
//2️⃣ end() :- This function is used to return the after end position of the container.

// //🔸 C++ code to demonstrate the working of
// // iterator, begin() and end()
// #include<iostream>
// #include<iterator> // for iterators
// #include<vector> // for vectors
// using namespace std;
// int main()
// {
//     vector<int> ar = { 1, 2, 3, 4, 5 };
      
//     // Declaring iterator to a vector
//     vector<int>::iterator ptr;
      
//     // Displaying vector elements using begin() and end()
//     cout << "The vector elements are : ";
//     for (ptr = ar.begin(); ptr < ar.end(); ptr++)
//         cout << *ptr << " ";                            // Output: The vector elements are : 1 2 3 4 5 
      
//     return 0;    

// }


//3️⃣ advance() :- This function is used to increment the iterator position till the specified number mentioned in its arguments.// C++ code to demonstrate the working of

// advance()
// #include<iostream>
// #include<iterator> // for iterators
// #include<vector> // for vectors
// using namespace std;
// int main()
// {
//     vector<int> ar = { 1, 2, 3, 4, 5 };
      
//     // Declaring iterator to a vector
//     vector<int>::iterator ptr = ar.begin();
      
//     // Using advance() to increment iterator position
//     // points to 4
//     advance(ptr, 3);
      
//     // Displaying iterator position
//     cout << "The position of iterator after advancing is : ";
//     cout << *ptr << " ";                                          //output : The position of iterator after advancing is : 4 
      
//     return 0;  
// }


//4️⃣next() :- This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments.
//5️⃣ prev() :- This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments.

// C++ code to demonstrate the working of
// next() and prev() 
// #include<iostream>
// #include<iterator> // for iterators
// #include<vector> // for vectors
// using namespace std;
// int main()
// {
//     vector<int> ar = { 1, 2, 3, 4, 5 };
      
//     // Declaring iterators to a vector
//     vector<int>::iterator ptr = ar.begin();
//     vector<int>::iterator ftr = ar.end();
     
     
//     // Using next() to return new iterator
//     // points to 4
//     auto it = next(ptr, 3);
      
//     // Using prev() to return new iterator
//     // points to 3
//     auto it1 = prev(ftr, 3);
      
//     // Displaying iterator position
//     cout << "The position of new iterator using next() is : ";         //output :The position of new iterator using next() is : 4 
//     cout << *it << " "; 
//     cout << endl;
      
//     // Displaying iterator position
//     cout << "The position of new iterator using prev()  is : ";        //output :The position of new iterator using prev()  is : 3
//     cout << *it1 << " ";
//     cout << endl;
      
//     return 0; 
// }



//6️⃣ inserter() :- This function is used to insert the elements at any position in the container. 
//   It accepts 2 arguments, the container and iterator to position where the elements have to be inserted.

// // C++ code to demonstrate the working of
// // inserter()
// #include<iostream>
// #include<iterator> // for iterators
// #include<vector> // for vectors
// using namespace std;
// int main()
// {
//     vector<int> ar = { 1, 2, 3, 4, 5 };
//     vector<int> ar1 = {10, 20, 30}; 
      
//     // Declaring iterator to a vector
//     vector<int>::iterator ptr = ar.begin();
     
//     // Using advance to set position
//     advance(ptr, 3);
      
//     // copying 1 vector elements in other using inserter()
//     // inserts ar1 after 3rd position in ar
//     copy(ar1.begin(), ar1.end(), inserter(ar,ptr));
      
//     // Displaying new vector elements
//     cout << "The new vector after inserting elements is : ";
//     for (int &x : ar) 
//         cout << x << " ";         //output : The new vector after inserting elements is : 1 2 3 10 20 30 4 5 
      
//     return 0;    
// }




                       //🔴 Pre-build Algorithm library :

//🔸Using algorithm library for Binary_Search :
// #include<iostream>
// #include<algorithm>                       // library for using prebuild algorithm
// #include<vector>
// using namespace std ;
// int main(){

// // // for Binary search :
// vector<int> v;

// v.push_back(1) ;            // declaring sorted vector for binary search
// v.push_back(3) ;
// v.push_back(5) ;
// v.push_back(6) ;
// v.push_back(8) ;

// cout<<" Searching Using binary_search library : "<<binary_search(v.begin(), v.end(), 5)<<endl ;       //output : 1 true (5 exist)

// // // For Min and Max :

// int a = 3 ;
// int b = 6 ;

// cout<<" max using library : "<<max(a, b)<<endl ;     //output : 6
// cout<<" min using library : "<<min(a, b)<<endl ;     //output : 3


// // // for Swap :

// swap(a, b) ;
// cout<<" a after swapping : "<<a<<endl ;             //output: 6

// // // for Reverse in string:

// string ab = "abcd" ;
// reverse(ab.begin(), ab.end()) ;

// cout<<" string abcd after reversing : "<<ab<<endl ;      //output : dcba

// // // for Rotate :
// vector<int> num ;
// num.push_back(2) ;
// num.push_back(3) ;
// num.push_back(4) ;
// num.push_back(5) ;

// rotate(num.begin(), num.begin()+1, num.end()) ;

// cout<<" rotating vector ab : " ;
// for(int i:num){
//     cout<<i<<" ";              //output : 3 4 5 2
// }

// // //for sort :
// // // this sort is made by intro sort (combination of quick sort, heap sort, insertion sort)

// sort(num.begin(), num.end()) ;
// cout<<endl<<" after sort : ";
// for(auto i:num){
//     cout<<i<<" ";                 //output : 2 3 4 5 
// }

//     return 0 ;
// }



