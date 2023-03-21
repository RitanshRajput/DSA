//                   🔴🔴 OOPs in c++

//🔸Object-oriented programming – As the name suggests uses objects in programming. 
// Object-oriented programming aims to implement real-world entities like inheritance,
// hiding, polymorphism, etc. in programming. The main aim of OOP is to bind together 
// the data and the functions that operate on them so that no other part of the code 
// can access this data except that function.

//🔴 There are some basic concepts that act as the building blocks of OOPs i.e.
//🔸Class
//🔸Objects
//🔸Encapsulation
//🔸Abstraction
//🔸Polymorphism
//🔸Inheritance
//🔸Dynamic Binding
//🔸Message Passing


//1️⃣Object:  
// An Object is an identifiable entity with some characteristics and behavior. 
// An Object is an instance of a Class. When a class is defined, no memory is 
// allocated but when it is instantiated (i.e. an object is created) memory is allocated.

//                OBJECT
//                  ||
//                 ENTITY
//                 /   \ 
//   STATE/PROPERTIES   BEHAVIOUR


// ex:              HERO (OBJECT)
//                   || 
//                  ENTITY (LET SAY A GAME CHARACTER)
//                  /    \ 
//        (PROPERTIES)   (BEHAVIOURS)
//             |              |
//  (NAME,HEALTH, LEVEL)   (ATTACK, DEFENCE, DANCE)



//2️⃣ Class :
// The building block of C++ that leads to Object-Oriented programming is a Class. 
// It is a user-defined data type, which holds its own data members and member functions, 
// which can be accessed and used by creating an instance of that class. 
// A class is like a blueprint for an object. 
// For Example: 
// Consider the Class of Cars. 
// There may be many cars with different names and brands but all of them will 
// share some common properties like all of them will have 4 wheels, Speed Limit, 
// Mileage range, etc. So here, the Car is the class, and wheels, speed limits, 
// and mileage are their properties.

//🔸A Class is a user-defined data type that has data members and member functions.
//🔸Data members are the data variables and member functions are the functions
// used to manipulate these variables together these data members and member 
// functions define the properties and behavior of the objects in a Class.
//🔸In the above example of class Car, the data member will be speed limit, 
//  mileage, etc and member functions can apply brakes, increase speed, etc.
//🔸We can say that a Class in C++ is a blueprint representing a group of objects which shares some common properties and behaviors.


// ex: 
// int a         ( a is a variable of int type)
// string str    ( str is variable of string type)
// char ch       ( ch is variable of char type)

// class :
// Hero Ramesh    ( Ramesh is a variable of custom user defined Hero data-type)
// Dog tommy      ( tommy is a variable of custom user defines Dog data-type)
// Color red      ( Red is a variable of custom user defines color data-type)

//🔸Object is instance of class.



//🔸Implementation of Class :
//  #include<iostream>
//  using namespace std ;

//   //created a class of name Hero
//   class Hero {
//       // properties 
//       int Health;
//   };

//    //created a empty class of name zero
//    class zero {
//      //no property assign  
//    };

//  int main() {

//   //created object of Hero type
//  Hero h1 ;
//   cout<<" size of object h1 : "<< sizeof(h1) <<endl;     //output: 4

//   // for empty array
//   zero h2 ;
//     cout<<" size of object h2 of empty class : "<< sizeof(h2) <<endl ;    //output: 1
//     return 0;
//  }

//🔸In case of Hero class we were given 4 byte of size in the memory
//🔸In case of Zero empty class we were given 1 byte just to keep track in the memory


//🔴Implementation class using another file
// we can also use class from another file, only we have to include that file path name 
// and we can easily use that class in any file

// #include<iostream>
// #include "Oops practice.cpp"    //including external file to use class in this file from 'oops practice.cpp' file

// using namespace std;
// int main() {
//   Hero bhaiya ;

// // To access properties/Data members from a class in object we use " . "

//   cout<<" class from another file : "<< sizeof(bhaiya.Name) <<endl ;   // output: error cannnot access private member
//   cout<<" class from another file : "<< sizeof(bhaiya.Health) <<endl ; // output: error cannnot access private member
//   cout<<" class from another file : "<< sizeof(bhaiya.Level) <<endl ;  // output: error cannnot access private member
//     return 0;
// }

//🔸Above it is showing error as cannot access private member:
// What is private members ?
// So This are called Access Modifiers or Access Specifiers : for more details prefer (https://www.geeksforgeeks.org/access-modifiers-in-c/)

//🔸Access modifiers:
// are used to implement an important aspect of Object-Oriented Programming known as Data Hiding.

//🔴Access Modifiers or Access Specifiers in a class are used to assign the 
//  accessibility to the class members, i.e., they set some restrictions on 
// the class members so that they can’t be directly accessed by the outside functions.

//🔸There are 3 types of access modifiers available in C++: 
//🔘Public
//🔘Private
//🔘Protected
// Note: If we do not specify any access modifiers for the members inside 
// the class, then by default the access modifier for the members will be Private.

//🔘 1. Public:
// All the class members declared under the public specifier will be available to everyone. 
// The data members and member functions declared as public can be accessed by other classes
// and functions too. The public members of a class can be accessed from anywhere in the 
// program using the direct member access operator (.) with the object of that class. 

//🔘2. Private: 
// The class members declared as private can be accessed only by the member functions inside the class.
// They are not allowed to be accessed directly by any object or function outside the class. 
// Only the member functions or the friend functions are allowed to access the private data members of the class. 

//🔘3. Protected: 
// The protected access modifier is similar to the private access modifier in the sense that 
// it can’t be accessed outside of its class unless with the help of a friend class.
// The difference is that the class members declared as Protected can be accessed by 
// any subclass (derived class) of that class as well. 

//🔸 Friend Class :
// A friend class can access private and protected members of other classes in which it is declared as a friend.
// It is sometimes useful to allow a particular class to access private and protected members of other classes. 
// For example, a LinkedList class may be allowed to access private members of Node.
// We can declare a friend class in C++ by using the friend keyword.


//🔘Public class Implementation:
// #include<iostream>
// using namespace std;

// class Hero{
//  // initialise public: member property using 'public' keyword: 
//  // Now anyone cam access properties / Data memeber
//      public:
//      int health;
//      char level;
// };

// int main() {

//  Hero paul ;

//  cout<< "size of Health is: "<< sizeof(paul.health) <<endl ;      //output: 4
//  cout<< "size of level is: "<< sizeof(paul.level) <<endl ;        //output: 1
//     return 0;
// }


//🔴If we define public below a data member/property 
// then all data member/properties above will become automatically becomes private
// shown below

// #include<iostream>
// using namespace std;

// class Hero{
//  // initialise public: member property using 'public' keyword: 
//  // Now anyone cam access properties / Data memeber
//      int health;
//      char level;
//      public:           //here we have define public: below health and level now only name will be public other will become private by default
//      char name[10] ;
// };

// int main() {

//  Hero paul ;

//  cout<< "size of Health is: "<< sizeof(paul.health) <<endl ;    //output: error
//  cout<< "size of level is: "<< sizeof(paul.level) <<endl ;      //output: error
//  cout<< "size of name is: "<< sizeof(paul.name) <<endl ;        //output: 10
//     return 0;
// }




//🔘Private class Implementation:
// #include<iostream>
// using namespace std;

// class Hero{

//      public:
//      int health;
//     // here we have assign private: only to level now level data member will only access
//     // inside the Hero class outside of the class it will through error
//      private:
//      char level;


//      //let say we have a function inside class Hero which prints something
//      // this function can only access level or function inside class Hero 
//      void print() {
//         cout<< level <<endl ;        //here level can be accessed
//      }

// };

// int main() {

//  Hero paul ;
//  cout<< "size of Health is: "<< sizeof(paul.health) <<endl ;      //output: 4
// //  cout<< "size of level is: "<< sizeof(paul.level) <<endl ;     //output: error
//     return 0;
// }



//🔴 Add value in data members :
// #include<iostream>
// using namespace std;

// class Hero{

//      public:
//      int health;
//      char level;
//      char name ;
// };

// int main() {

//  Hero paul ;

// paul.health = 14 ;
// paul.level = 69 ;
// paul.name =  88;

//  cout<< "size of Health is: "<< paul.health <<endl ;    //output: 14
//  cout<< "size of level  is: "<< paul.level  <<endl ;    //output: E   (converted from int to char)
//  cout<< "size of name   is: "<< paul.name   <<endl ;    //output: x   (converted from int to char)
//     return 0;
// }



//🔴🔴 Getter and Setter:
// The getter function is used to retrieve the variable value and 
// The setter function is used to set the variable value. 
// Remember: You can directly access public member variables,
// but private member variables are not accessible. 
// Therefore, we need getter functions.

// #include<iostream>
// using namespace std;

// class Hero{

// //private data member
//   private: 
//   int health ;

// //public data member
//   public:
//   char level;

// //creating Getter
//   int getHealth() {
//     return health ;
//   }

//   char getLevel() {
//     return level ;
//   }

// //creating Setter
//  void setHealth(int h) {
//     health = h;
//  }

//  void setLevel(char ch) {
//     level = ch ;
//  }

// };

// int main() {

// Hero sam ;

// // sam.health = 40;          //as health is define private we cannot access it directly therefore we use getter and setter
// cout<<"Sam health with getter : "<< sam.getHealth() <<endl ;  //using getter to get value  output: garbage value address of health bcoz no value given in class

// sam.setHealth(488) ;
// cout<<"sam health after setter : "<< sam.getHealth() <<endl ;   //output: 488
// sam.level  = 'A';

// cout<<"health : "<< sam.getHealth() <<endl;    //output: error private cannot access directly
// cout<<"level : "<< sam.level <<endl;     //output: A

//     return 0;
// }


//🔴 Padding and Greedy Alignment:
// https://www.youtube.com/watch?v=RR57zUBbwEM
// https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/

// #include<iostream>
// using namespace std ;

// class Hero {
//     private:
//     int health ;

//     public:
//     int level ;
// };

// int main(){
// Hero Don ;
// cout<< "size of Don : "<< sizeof(Don) <<endl ;    //output: 8

//   return 0;
// }


//🔸In the above example we saw that size of Don object is showing 8.
// but if we see carefully the Hero class has one int var, and one char var
// means int = 4bytes of memory , char = 1bytes of memory
// So it should have shown the size of object Don = 4 + 1 ==> 5
// but instead it is showing 8

//🔸So whats happening here in short when memory bus is searching for same data types
// in same blocks at the same level it will take 4 byte if talk about 32bit system, int = 4byte , incase of char = 1byte 
// but when searching for different data type at diffrent level on different stages
// it becomes difficult to parallerly search and operate
// therefore if there are different class, structure , in which there are different data type
// are present then, the memory bus consider the maximum size data type to implement activity
// therefore in case of above code where int = 4byte, char = 1byte
// instead of 4+1, it gave 4 x 4 = 8bytes


//🔴 Static and Dynamic Allocation :

// #include<iostream>
// using namespace std;

// class Hero{
    
//     private: 
//     int health ;

//     public:
//     char level;

// //creating Getter to access private data members /properties
//   int getHealth() {
//     return health ;
//   }

//   char getLevel() {
//     return level ;
//   }

// //creating Setter to set value to a private data member/ property
//  void setHealth(int h) {
//     health = h;
//  }

//  void setLevel(char ch) {
//     level = ch ;
//  }
// };

// int main() {

// //🔸static allocation of Object
// Hero a ;

// a.setHealth(80);  //assigning some value in health 
// a.setLevel('B');  //assigning some value in level

// cout<<"public level using static allocation : "<< a.level <<endl ;   //output: B
// cout<<"private health using static allocation : "<< a.getHealth() <<endl ;   //output: 80

// //🔸Dynamic allocation of Object
// Hero* b = new Hero ;        
// // here we are using new keyword to create a space in Heap memory
// // And using pointer to use the space assign in Heap

// b->setHealth(55) ;   //assigning some value in health
// b->setLevel('A') ;   //assigning some value in level

// //printing properties (or accessing data) using deference operator(*b) 
// cout<<"public level using Dynamic allocation : "<< (*b).level <<endl ;  //output: A
// cout<<"private health using Dynamic allocation : "<< (*b).getHealth() <<endl ;  //output: 55

// //printing properties (or accessing data) using -> arrow 
// cout<<"public level using Dynamic allocation : "<< b->level <<endl ;  //output: A
// cout<<"private health using Dynamic allocation : "<< b->getHealth() <<endl ;  //output: 55
                   

//     return 0;
// }


//🔴Behind the scene of Hero a object creation :

// Hero a;        // when we declare object then a constructor is called and created ( Hero.her() ) by default but isn't visible. we can also create it.

//🔘Constructor :
// Constructor in C++ is a special method that is invoked automatically at the time of object creation. 
// It is used to initialize the data members of new objects generally. 
// The constructor in C++ has the same name as the class or structure.
// Constructor is invoked at the time of object creation. 
// It constructs the values i.e. provides data for the object which is why it is known as constructors.

// • Constructor is a member function of a class, whose name is same as the class name.
// • Constructor is a special type of member function that is used to initialize 
//   the data members for an object of a class automatically, when an object of the same class is created.
// • Constructor is invoked at the time of object creation. 
//   It constructs the values i.e. provides data for the object that is why it is known as constructor.
// • Constructor do not return value, hence they do not have a return type.

//🔴 Characteristics of constructor

// • The name of the constructor is same as its class name.
// • Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
// • Constructors do not return values; hence they do not have a return type.
// • A constructor gets called automatically when we create the object of the class.
// • Constructors can be overloaded.
// • Constructor can not be declared virtual.

//🔸Types of constructor

// 🔘Default constructor
// 🔘Parameterized constructor
// 🔘Overloaded constructor
// 🔘Constructor with default value
// 🔘Copy constructor
// 🔘Inline constructor
//   Constructor does not have a return value, hence they do not have a return type.



//🔘 Creating default constructor.

// #include<iostream>
// using namespace std;

// class Hero {
//     private:
//     int health;

//     public:
//     char level;

//   // creating default constructor manually
//   // so when we create a defualt constructor then auto created by compiler default constructor gets deleted
//   // now only this exist which we have created
//     Hero(){
//       cout<<" Constructor called inside class : "<<endl ;  // print evertime Object created
//     }
// };

// int main() {

// //Object creation statically
// cout<<" cout before hero ramesh ."<<endl ;     // 1st print 
// Hero ramesh;                                   // 2nd : Constructor called inside class
// cout<<" cout after hero ramesh ."<<endl ;      // 3rd print

// //Object creation dynamically
// Hero *h = new Hero;                 //4th : Constructor called inside class

// //also we write as
// Hero *k = new Hero() ;             //4th : Constructor called inside class

//     return 0;
// }


//🔘 Creating  Parameterised Constructor :
// #include<iostream>
// using namespace std;

// class Hero {
//     private:
//     int health;

//     public:
//     char level;

//🔸 creating parameterised Constructor

//    Hero( int health ){              // taking int parameter with name health
//      health = health;               // trying to assign value of health in health itself
//    }
//🔸In this above code we tried to assign value of health in health itself but compiler
//  got confused about which health are we talking about
//  So to make things clear we use🔸 This keyword 
//  'this' is a pointer to the current object

//🔸Using 'this' to create a parameterised constructor
  
//   Hero(int health){
//     cout<<"Value of this : "<< this <<endl ;   //output: 0x61ff08
//     this->health = health ;
//     cout<<"Value of this : "<< this <<endl ;   //output: 0x61ff08
//   }

// // another constructor :
//   Hero(int health, char level){
//     this-> level = level ;           //this-> level ==>(class level main level below private) , = level ==> (paramter level which is pass in constructor(char level))
//     this-> health = health ;         //this-> health ==>(class health main health below public) , = health ==> (paramter health which is pass in constructor(int health))
//   }


// // print function 
// void print() {
//     cout<< level <<endl ;
// }

// //getter
//   int getHealth() {
//     return health ;
//   }

//   char getLevel() {
//     return level ;
//   }
// //setter
//  void setHealth(int h) {
//     health = h;
//  }

//  void setLevel(char ch) {
//     level = ch ;
//  }

// };

// int main() {

// //🔸Object creation statically
// Hero ramesh(10);                // parameterised object so we need to pass a argument
// cout<<"Address of ramesh : "<< &ramesh <<endl ;                //output: 0x61ff08
// cout<<"Value as ramesh health : "<<ramesh.getHealth() <<endl ; //output: 10

// //calling print function :
// ramesh.print() ;               //output: garbage value bcoz nothing pass for level print func only prints level

// //🔸Object creation dynamically
// Hero* h = new Hero(12);              // parameterised object so we need to pass a argument

// //calling print function :
// h -> print() ;           //output: garbage value bcoz nothing pass for level  print func only prints level
 
// //🔸Object with 2 parameter
//  Hero temp( 23, 'D'); 

// //calling print function :
//  temp.print() ;         //output: D bcoz pass as argument  print func only prints level


//     return 0;
// }

//🔘 'this'  keyword
// To understand ‘this’ pointer, it is important to know how objects look at functions and data members of a class.

// 1. Each object gets its own copy of the data member.
// 2. All-access the same function definition as present in the code segment.
// Meaning each object gets its own copy of data members and all objects share a single copy of member functions.
// Then now question is that if only one copy of each member function exists and 
//  is used by multiple objects, how are the proper data members are accessed and updated?
// The compiler supplies an implicit pointer along with the names of the functions as ‘this’.
// The ‘this’ pointer is passed as a hidden argument to all nonstatic member function 
// calls and is available as a local variable within the body of all nonstatic functions. 
// ‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name).
// For a class X, the type of this pointer is ‘X* ‘. Also, if a member function of X is declared as const, then the type of this pointer is ‘const X *’ 



//🔘 Creating a Copy Constructor: 

// #include<iostream>
// #include<cstring>
// using namespace std;

// class Hero{
   
//   private:
//   int health ;

//   public:
//   char *name ;
//   char level ;

//    Hero() {
//     cout << "Default constructor called : "<<endl ;
//     name = new char[100] ;
//    }

// Hero(int health) {
//   this -> health = health ;
// }

// Hero(int health , char level) {
//   this -> health = health ;
//   this -> level = level ;
// }

// //🔸Creating copy constructor :
// // Hero( Hero& temp){           //if we remove & it gives error but works fine when & applied
// // //                             bcoz when we are calling Hero ritesh(suresh) here suresh passes as value(means copy) and suresh calling temp is calling Hero( 
// // //                             then Hero( again calling (Hero temp) and it goes into infinite loop
// // //                             hence we use & to pass by reference then it will use the original parameter
// // //                             when we implement copy constructor manually then default copy constructor gets removed automatically
// //   cout<<"Copy constructor called : "<<endl ;
// //   this -> health = temp.health ;
// //   this -> level  = temp.level ;
// // }

// //🔸copy constructor for Deep copy;
// Hero( Hero& temp){     
//   char *ch = new char[strlen(temp.name)+1] ;       // [strlen(temp.name)+1] = character array
//   strcpy(ch, temp.name) ;          //copy temp ka name in ch
//   this -> name = ch ;              // update this ka name
//   cout<<"Copy constructor called : "<<endl ;
//   this -> health = temp.health ;
//   this -> level  = temp.level ;
// }

// //printing function
// void print() {
//     cout<< endl ;
//     cout<<"Name is  : "<< this -> name<<endl ;
//     cout<<"Health is : "<< this -> level <<endl ;
//     cout<<"level is  : "<< this -> health <<endl ;
// }
// //getter
// int getHealth() {
//   return health ;
// }

// char getLevel() {
//   return level ;
// }
// //setter
// void setHealth(int h) {
//   health = h ;
// }

// void setLevel(char ch){
//   level = ch ;
// }

// void setName(char name[]) {
//   strcpy(this -> name, name) ;  //The strcpy() function in C++ copies a character string from source to destination. It is defined in the cstring header file
// }

// };
// int main() {

// //copy constructor portion:
// // Hero suresh( 69, 'B') ;   //setting inline value inside the bracket
// // suresh.print() ;          //printing suresh value
// //                           //output : health : B , level : 69

// // Hero ritesh(suresh) ;    // copying value of suresh in ritesh 
// //                          // like ritesh.health = suresh.health ;
// //                          //      ritesh.level  = suresh.level ;

// // ritesh.print() ;         // printing ritesh value
// //                          // output : health : B , level : 69



// //🔸shallow and Deep copy portion :
// Hero hero1;
// hero1.setHealth(12) ;
// hero1.setLevel('D') ;
// char name[7] = "Babbar" ;
// hero1.setName(name) ;

// hero1.print() ;           //printing value of hero1
// //outupt: Name is  : Babbar , Health is : D, level is  : 12

// //🔸Use default copy constructor  : to show how Shallow copy works
// // make sure when we want to use default copy constructo then remove
// // the manually created copy constructor in class

// Hero hero2(hero1);            //created hero2 and copied hero1
// // Hero hero2 = hero1 ;

// hero1.name[0] = 'G';
// hero1.print() ;
// //outupt for shallow copy : Name is  : Gabbar , Health is : D, level is  : 12

// hero2.print() ;
// //outupt for shallow copy : Name is  : Gabbar , Health is : D, level is  : 12
// //Here we made changes in Hero1 but hero2 is also affected by the changes made with hero1
// //outupt for Deep copy : Name is  : Babbar , Health is : D, level is  : 12

//   return 0;
// }


//🔴 Shallow and Deep Copy :
//🔸Creating a copy of an object by copying data of all member variables 
//  as it is, is called shallow copy 
//🔸while creating an object by copying data of another object along with 
// the values of memory resources that reside outside the object but handled by that object, 
// is called deep copy.


//🔸 Defualt copy constructor = uses Shallow Copy
// In above code we are using   
// public:
// char *name ;
//  pointer to access name, When we made changes to the name
//  then both hero1 and hero2 where we using the address of name not another copy
//  hence shallow copy means all object access same memory of data members

//🔸 manually created copy constructor = using Deep copy
// In Deep copy when we copy a object paramater in another object
// then any changes made in object one wont reflect in object two
// as in deep copy a copy of data member are created and updated for different objects

//for more details : https://www.codingninjas.com/codestudio/auth?redirect=%2Fcodestudio%2Fguided-paths%2Fbasics-of-c%2Fcontent%2F118817%2Foffering%2F1382190%3F




//🔘 Copy Assignment Operator = 

// Copy constructor and Assignment operator are similar as they are both used 
// to initialize one object using another object. 
// But, there are some basic differences between them:

//🔴 Copy constructor : 	
// 1.It is called when a new object is created from an existing object, as a copy of the existing object	
// 2.It creates a separate memory block for the new object.	
// 3.It is an overloaded constructor.	
// 4.C++ compiler implicitly provides a copy constructor, if no copy constructor is defined in the class.	
// 5.Syntax:
// className(const className &obj) {
// // body 
// }

//🔴 Assignment operator :
// 1.This operator is called when an already initialized object is assigned a new value from another existing object. 
// 2.It does not create a separate memory block or new memory space.
// 3.It is a bitwise operator. 
// 4.A bitwise copy gets created, if the Assignment operator is not overloaded. 
// 5.Syntax: 
// className obj1, obj2;
// obj2 = obj1;


//🔸example:
//  Hero a(10, 'C') ;
//  Hero b(20, 'B') ;

// a.health = 10
// a.level = C

//      a                            b
//  _____________           _____________
// |             |         |             |
// |[10] = health|         |[20] = health|
// |             |         |             |
// |[C] = level  |         |[B] = level  |
//  --------------         ---------------

// a = b              //Copy assignment operator

// a.health = b.health    = 20
// a.level =  b.level     = B


//🔸implementation:
// #include<iostream>
// #include<cstring>
// using namespace std;


// class Hero{
   
//   private:
//   int health ;

//   public:
//   char *name ;
//   char level ;

//    Hero() {
//     cout << "Default constructor called : "<<endl ;
//     name = new char[100] ;
//    }

// Hero(int health) {
//   this -> health = health ;
// }

// Hero(int health , char level) {
//   this -> health = health ;
//   this -> level = level ;
// }


// //🔸copy constructor for Deep copy;
// Hero( Hero& temp){     
//   char *ch = new char[strlen(temp.name)+1] ;       // [strlen(temp.name)+1] = character array
//   strcpy(ch, temp.name) ;          //copy temp ka name in ch
//   this -> name = ch ;              // update this ka name
//   cout<<"Copy constructor called : "<<endl ;
//   this -> health = temp.health ;
//   this -> level  = temp.level ;
// }

// //printing function
// void print() {
//     cout<< endl ;
//     cout<<"Name is  : "<< this -> name<<endl ;
//     cout<<"Health is : "<< this -> level <<endl ;
//     cout<<"level is  : "<< this -> health <<endl ;
// }
// //getter
// int getHealth() {
//   return health ;
// }

// char getLevel() {
//   return level ;
// }
// //setter
// void setHealth(int h) {
//   health = h ;
// }

// void setLevel(char ch){
//   level = ch ;
// }

// void setName(char name[]) {
//   strcpy(this -> name, name) ;  //The strcpy() function in C++ copies a character string from source to destination. It is defined in the cstring header file
// }

// };
// int main() {
  
// Hero hero1;

// hero1.setHealth(12) ;
// hero1.setLevel('D') ;
// char name[7] = "Babbar" ;
// hero1.setName(name) ;

// Hero hero2(hero1);            //created hero2 and copied hero1

// hero1.name[0] = 'G';
// hero1.print() ;
// //outupt  : Name is  : Gabbar , Health is : D, level is  : 12
// hero2.print() ;
// //outupt : Name is  : Gabbar , Health is : D, level is  : 12

// //after copy assignment :
// hero1 = hero2 ;
// hero1.print() ;
// //outupt : Name is  : Babbar , Health is : D, level is  : 12
// hero2.print() ;
// //outupt : Name is  : Babbar , Health is : D, level is  : 12


//   return 0;
// }



//🔘 Destructor : (memory de-allocation)
//🔸Destructor is an instance member function which is invoked automatically whenever 
//  an object is going to be destroyed. Meaning, a destructor is the last function that
//  is going to be called before an object is destroyed.

// 🔸Destructor is also a special member function like constructor.
//    Destructor destroys the class objects created by constructor. 
// 🔸Destructor has the same name as their class name preceded by a tilde (~) symbol.
// 🔸It is not possible to define more than one destructor. 
// 🔸The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.
// 🔸Destructor neither requires any argument nor returns any value.
// 🔸It is automatically called when object goes out of scope. 
// 🔸Destructor release memory space occupied by the objects created by constructor.
// 🔸In destructor, objects are destroyed in the reverse of an object creation.
 
//🔸The thing is to be noted here, 
//  if the object is created by using new or the constructor uses new to allocate
//  memory which resides in the heap memory or the free store,
//  the destructor should use delete to free the memory.   

// #include<iostream>
// #include<cstring>
// using namespace std;


// class Hero{
   
//   private:
//   int health ;

//   public:
//   char *name ;
//   char level ;

//    Hero() {
//     cout << "Default constructor called : "<<endl ;
//     name = new char[100] ;
//    }

// Hero(int health) {
//   this -> health = health ;
// }

// Hero(int health , char level) {
//   this -> health = health ;
//   this -> level = level ;
// }


// //🔸copy constructor for Deep copy;
// Hero( Hero& temp){     
//   char *ch = new char[strlen(temp.name)+1] ;       // [strlen(temp.name)+1] = character array
//   strcpy(ch, temp.name) ;          //copy temp ka name in ch
//   this -> name = ch ;              // update this ka name
//   cout<<"Copy constructor called : "<<endl ;
//   this -> health = temp.health ;
//   this -> level  = temp.level ;
// }

// //printing function
// void print() {
//     cout<< endl ;
//     cout<<"Name is  : "<< this -> name<<endl ;
//     cout<<"Health is : "<< this -> level <<endl ;
//     cout<<"level is  : "<< this -> health <<endl ;
// }
// //getter
// int getHealth() {
//   return health ;
// }

// char getLevel() {
//   return level ;
// }
// //setter
// void setHealth(int h) {
//   health = h ;
// }

// void setLevel(char ch){
//   level = ch ;
// }

// void setName(char name[]) {
//   strcpy(this -> name, name) ;  //The strcpy() function in C++ copies a character string from source to destination. It is defined in the cstring header file
// }

// // create Destructor manually : recognised by (~)
//   ~Hero() {
//     cout<<" Destructor is created and called !!" <<endl ;
//   }


// };
// int main() {
//   //static allocation of object  :
// // object that are created by static allocation for them Dectructor are automatically called.
// Hero a;

//  //dynamic allocation of object :
// // object that are created by dynamic allocation for them we need to create and manually call a Destructor.
// Hero *b = new Hero() ;
// delete b;                 //manually calling destructor for dynamicallly created object

//   return 0;
// }

//🔸Constructor is always called once when its time to Construct the object
//🔸Destructor is also always called once when its time to destruct the object


//🔘Const keywords:
//🔸Whenever const keyword is attached with any method(), variable, pointer 
//  variable, and with the object of a class it prevents that specific 
//  object/method()/variable to modify its data items value.

//🔸Constant Variables:
// There are a certain set of rules for the declaration and initialization of the constant variables:

//1. The const variable cannot be left un-initialized at the time of the assignment.
//2. It cannot be assigned value anywhere in the program.
//3. Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.

//🔸The error faced for faulty declaration: 
// If you try to initialize the const variable without assigning an explicit value 
// then a compile-time error (CTE) is generated.

//example : How to declare constants
//  const int var ;      ❌ 
//  const int var ;  var = 5 ;  ❌ 
//  const int var = 5   ✅ 


//🔸Implementation 
// #include <iostream>
// using namespace std;
 
// // Driver Code
// int main()
// {
 
//     // const int x;  CTE error
//     // x = 9;   CTE error
//     const int y = 10;
//     cout << y;
 
//     return 0;
// }



//🔘initialisation List:
//🔸Initializer List is used in initializing the data members of a class. 
// The list of members to be initialized is indicated with constructor as 
// a comma-separated list followed by a colon. 
// Following is an example that uses the initializer list to initialize x and y of Point class.

// #include<iostream>
// using namespace std;
 
// class Point {
// private:
//     int x;
//     int y;
// public:
//     Point(int i = 0, int j = 0):x(i), y(j) {}
//     /*  The above use of Initializer list is optional as the
//         constructor can also be written as:
//         Point(int i = 0, int j = 0) {
//             x = i;
//             y = j;
//         }
//     */   
     
//     int getX() const {return x;}
//     int getY() const {return y;}
// };
 
// int main() {
//   Point t1(10, 15);
//   cout<<"x = "<<t1.getX()<<", ";
//   cout<<"y = "<<t1.getY();
//   return 0;
// }
 
/* OUTPUT:
   x = 10, y = 15
*/
// The above code is just an example for syntax of the Initializer list. 
// In the above code, x and y can also be easily initialed inside the constructor. 
// But there are situations where initialization of data members inside constructor 
// doesn’t work and Initializer List must be used.
// 🔸Following are such cases:

// 🔸1) For initialization of non-static const data members: 
// const data members must be initialized using Initializer List.
// In the following example, “t” is a const data member of Test class and is initialized using Initializer List.
// Reason for initializing the const data member in the initializer list is because no memory is 
// allocated separately for const data member, it is folded in the symbol table due to which we need to initialize it in the initializer list. 
// Also, it is a Parameterized constructor and we don’t need to call the assignment operator which means we are avoiding one extra operation. 

// #include<iostream>
// using namespace std;
 
// class Test {
//     const int t;
// public:
//     Test(int t):t(t) {}  //Initializer list must be used
//     int getT() { return t; }
// };
 
// int main() {
//     Test t1(10);
//     cout<<t1.getT();
//     return 0;
// }
 
/* OUTPUT:
   10
*/

// 🔸2) For initialization of reference members: 
// Reference members must be initialized using Initializer List. 
// In the following example, “t” is a reference member of Test class and 
// is initialized using Initializer List.

// // Initialization of reference data members:
// #include<iostream>
// using namespace std;
 
// class Test {
//     int &t;
// public:
//     Test(int &t):t(t) {}  //Initializer list must be used
//     int getT() { return t; }
// };
 
// int main() {
//     int x = 20;
//     Test t1(x);
//     cout<<t1.getT()<<endl;
//     x = 30;
//     cout<<t1.getT()<<endl;
//     return 0;
// }
/* OUTPUT:
    20
    30
*/


// 🔸3) For initialization of member objects which do not have default constructor: 
// In the following example, an object “a” of class “A” is data member of class “B”, and “A” doesn’t 
// have default constructor. Initializer List must be used to initialize “a”.

// #include <iostream>
// using namespace std;
 
// class A {
//     int i;
// public:
//     A(int );
// };
 
// A::A(int arg) {
//     i = arg;
//     cout << "A's Constructor called: Value of i: " << i << endl;
// }
 
// // Class B contains object of A
// class B {
//     A a;
// public:
//     B(int );
// };
 
// B::B(int x):a(x) {  //Initializer list must be used
//     cout << "B's Constructor called";
// }
 
// int main() {
//     B obj(10);
//     return 0;
// }
// /* OUTPUT:
//     A's Constructor called: Value of i: 10
//     B's Constructor called
// */

// If class A had both default and parameterized constructors, 
// then Initializer List is not must if we want to initialize “a” using default constructor,
// but it is must to initialize “a” using parameterized constructor. 

// 🔸4) For initialization of base class members : Like point 3, the parameterized constructor of the base class can only be called using Initializer List.

// #include <iostream>
// using namespace std;
 
// class A {
//     int i;
// public:
//     A(int );
// };
 
// A::A(int arg) {
//     i = arg;
//     cout << "A's Constructor called: Value of i: " << i << endl;
// }
 
// // Class B is derived from A
// class B: A {
// public:
//     B(int );
// };
 
// B::B(int x):A(x) { //Initializer list must be used
//     cout << "B's Constructor called";
// }
 
// int main() {
//     B obj(10);
//     return 0;
// }


// 🔸5) When constructor’s parameter name is same as data member 
// If constructor’s parameter name is same as data member name then the data member must be initialized either using this pointer or Initializer List. In the following example, both member name and parameter name for A() is “i”.

// #include <iostream>
// using namespace std;
 
// class A {
//     int i;
// public:
//     A(int );
//     int getI() const { return i; }
// };
 
// A::A(int i):i(i) { }  // Either Initializer list or this pointer must be used
// /* The above constructor can also be written as
// A::A(int i) {
//     this->i = i;
// }
// */
 
// int main() {
//     A a(10);
//     cout<<a.getI();
//     return 0;
// }
/* OUTPUT:
    10
*/


// 🔸6) For Performance reasons: 
// It is better to initialize all class variables in Initializer List instead of assigning values inside body. Consider the following example: 

// // Without Initializer List
// class MyClass {
//     Type variable;
// public:
//     MyClass(Type a) {  // Assume that Type is an already
//                      // declared class and it has appropriate
//                      // constructors and operators
//       variable = a;
//     }
// };

// Here compiler follows following steps to create an object of type MyClass 
// 1. Type’s constructor is called first for “a”. 

// 2. Default construct “variable”
// 3. The assignment operator of “Type” is called inside body of MyClass() constructor to assign 

//     variable = a;
// 4. And then finally destructor of “Type” is called for “a” since it goes out of scope.




//🔘Static Keyword:
//🔸Static variables in a Function: When a variable is declared as static, 
//  space for it gets allocated for the lifetime of the program. 
//  Even if the function is called multiple times, space for the static variable 
//  is allocated only once and the value of variable in the previous call gets carried 
//  through the next function call. This is useful for implementing coroutines 
/// in C/C++ or any other application where previous state of function needs to be stored. 

// C++ program to demonstrate
// the use of static Static
// variables in a Function
// #include <iostream>
// #include <string>
// using namespace std;
 
// void demo()
// {
//     // static variable
//     static int count = 0;
//     cout << count << " ";
     
//     // value is updated and
//     // will be carried to next
//     // function calls
//     count++;
// }
 
// int main()
// {
//     for (int i=0; i<5; i++)    
//         demo();
//     return 0;
// }
// Output
// 0 1 2 3 4 

//// You can see in the above program that the variable count is declared as static.
//  So, its value is carried through the function calls. 
//  The variable count is not getting initialized for every time the function is called. 
//  As a side note, Java doesn’t allow static local variables in functions.

//🔸Static variables in a class:
// As the variables declared as static are initialized only once as they are allocated 
// space in separate static storage so, the static variables in a class are shared by the objects. 
// There can not be multiple copies of same static variables for different objects. 
// Also because of this reason static variables can not be initialized using constructors. 

// C++ program to demonstrate static
// variables inside a class
 
// #include<iostream>
// using namespace std;
 
// class GfG
// {
// public:
//     static int i;
     
//     GfG()
//     {
//         // Do nothing
//     };
// };
 
// int main()
// {
// GfG obj1;
// GfG obj2;
// obj1.i =2;
// obj2.i = 3;
     
// // prints value of i
// cout << obj1.i<<" "<<obj2.i;
// }

// Output:
// undefined reference to `GfG::i'
// collect2: error: ld returned 1 exit status

// 🔸You can see in the above program that we have tried to create multiple copies of 
// the static variable i for multiple objects. But this didn’t happen. 
// So, a static variable inside a class should be initialized explicitly by 
// the user using the class name and scope resolution operator outside the class
//  shown below: 
// C++ program to demonstrate static
// variables inside a class
 
// #include<iostream>
// using namespace std;
 
// class GfG
// {
// public:
//     static int i;
     
//     GfG()
//     {
//         // Do nothing
//     };
// };
 
// int GfG::i = 1;
 
// int main()
// {
//     GfG obj;
//     // prints value of i
//     cout << obj.i;
// }
// // Output:
// // 1



//🔸Implementation:
//🔴Static keywords are Data member Belongs to class , 
//// In which there is no need to make object to access them
// #include<iostream>
// #include<cstring>
// using namespace std;


// class Hero{
   
//   private:
//   int health ;

//   public:
//   char *name ;
//   char level ;
//   static int timeToComplete ;          //creating Static data member using static keyword

//    Hero() {
//     cout << "Default constructor called : "<<endl ;
//     name = new char[100] ;
//    }

// Hero(int health) {
//   this -> health = health ;
// }

// Hero(int health , char level) {
//   this -> health = health ;
//   this -> level = level ;
// }


// //🔸copy constructor ;
// Hero( Hero& temp){     
//   char *ch = new char[strlen(temp.name)+1] ;       // [strlen(temp.name)+1] = character array
//   strcpy(ch, temp.name) ;          //copy temp ka name in ch
//   this -> name = ch ;              // update this ka name
//   cout<<"Copy constructor called : "<<endl ;
//   this -> health = temp.health ;
//   this -> level  = temp.level ;
// }

// //printing function
// void print() {
//     cout<< endl ;
//     cout<<"Name is  : "<< this -> name<<endl ;
//     cout<<"Health is : "<< this -> level <<endl ;
//     cout<<"level is  : "<< this -> health <<endl ;
// }
// //getter
// int getHealth() {
//   return health ;
// }

// char getLevel() {
//   return level ;
// }
// //setter
// void setHealth(int h) {
//   health = h ;
// }

// void setLevel(char ch){
//   level = ch ;
// }

// void setName(char name[]) {
//   strcpy(this -> name, name) ;  //The strcpy() function in C++ copies a character string from source to destination. It is defined in the cstring header file
// }

// // create Destructor manually : recognised by (~)
//   ~Hero() {
//     cout<<" Destructor is created and called !!" <<endl ;
//   }

// };

//  //intialising static data member outside class:
//  //syntax:  datatype className (scope resolution operator ::) functionName = value ;
//  //ex:       int      Hero       ::          timetocomplete   = 5
// int Hero::timeToComplete = 5 ;           

// int main() {

// //printing static data member:
// cout<< Hero::timeToComplete << endl ;       //output: 5

// // accessing static data member value using object:
// // This is not recomended bcoz static belongs to class not the object in main function
// // so answer will be same but not recommended
// Hero a;
// cout<< a.timeToComplete << endl ;          //output : 5

// // changing value of static data member through object
// Hero b;
// b.timeToComplete = 19 ;

// cout<< a.timeToComplete << endl ;       //output: 19
// cout<< b.timeToComplete << endl ;       //output: 19 

//   return 0;
// }


//🔴Static function :
//🔸In static function no need to create a object to call it, we can simply call it using class name
//🔸static function do not have this.keyword (bcoz this. keyword work as pointer to current object)
// but in static function there is no object then how will we connect to pointer without object.
//🔸static function can access static members only.

// #include<iostream>
// #include<cstring>
// using namespace std;


// class Hero{
   
//   private:
//   int health ;

//   public:
//   char *name ;
//   char level ;
//   static int timeToComplete ;          //creating Static data member using static keyword

//    Hero() {
//     cout << "Default constructor called : "<<endl ;
//     name = new char[100] ;
//    }

// Hero(int health) {
//   this -> health = health ;
// }

// Hero(int health , char level) {
//   this -> health = health ;
//   this -> level = level ;
// }


// //🔸copy constructor ;
// Hero( Hero& temp){     
//   char *ch = new char[strlen(temp.name)+1] ;       // [strlen(temp.name)+1] = character array
//   strcpy(ch, temp.name) ;          //copy temp ka name in ch
//   this -> name = ch ;              // update this ka name
//   cout<<"Copy constructor called : "<<endl ;
//   this -> health = temp.health ;
//   this -> level  = temp.level ;
// }

// //printing function
// void print() {
//     cout<< endl ;
//     cout<<"Name is  : "<< this -> name<<endl ;
//     cout<<"Health is : "<< this -> level <<endl ;
//     cout<<"level is  : "<< this -> health <<endl ;
// }
// //getter
// int getHealth() {
//   return health ;
// }

// char getLevel() {
//   return level ;
// }
// //setter
// void setHealth(int h) {
//   health = h ;
// }

// void setLevel(char ch){
//   level = ch ;
// }

// void setName(char name[]) {
//   strcpy(this -> name, name) ;  //The strcpy() function in C++ copies a character string from source to destination. It is defined in the cstring header file
// }

// //🔸static function creation:
// static int random() {
//   // cout<< this -> health <<endl ;      //output: error , trying to access non static member also using this keyword
//   return timeToComplete ;         //output: true
// }


// // create Destructor manually : recognised by (~)
//   ~Hero() {
//     cout<<" Destructor is created and called !!" <<endl ;
//   }

// };


// int Hero::timeToComplete = 12 ;           

// int main() {

// // cout<< Hero::timeToComplete << endl ;       //output: 5

// //printing value from static function
// cout<< Hero::random << endl ;

//   return 0;
// }

