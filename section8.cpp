                            //🔴🔴 C++ STL

//🔸C++ STL (standard template library) is a software library for the C++ language that provides a collection of templates representing containers, iterators, algorithms, and function objects.

//🔘 We will learn about 2 template library in C++ :
//1️⃣ Container : An STL container is a collection of objects of the same type (the elements). Container owns the elements. Creation and destruction is controlled by the container.
//2️⃣ Algorithm : The algorithms library defines functions for a variety of purposes (e.g. searching, sorting, counting, manipulating) that operate on ranges of elements. Note that a range is defined as [first, last) where last refers to the element past the last element to inspect or modify.


//🔴1️⃣ First we will learn about Containers Object type and there Implementation :

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
