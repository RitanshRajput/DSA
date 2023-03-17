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

// • Default constructor
// • Parameterized constructor
// • Overloaded constructor
// • Constructor with default value
// • Copy constructor
// • Inline constructor
// Constructor does not have a return value, hence they do not have a return type.



//🔴 Creating default constructor.

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


//🔴creating  Parameterised Constructor :
#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

//🔸 creating parameterised Constructor

//    Hero( int health ){              // taking int parameter with name health
//      health = health;               // trying to assign value of health in health itself
//    }
//🔸In this above code we tried to assign value of health in health itself but compiler
//  got confused about which health are we talking about
//  So to make things clear we use🔸 This keyword 
//  'this' is a pointer to the current object

//🔸Using 'this' to create a parameterised constructor
  
  Hero(int health){
    cout<<"Value of this : "<< this <<endl ;   //output: 0x61ff08
    this->health = health ;
    cout<<"Value of this : "<< this <<endl ;   //output: 0x61ff08
  }

// another constructor :
  Hero(int health, char level){
    this-> level = level ;           //this-> level ==>(class level main level below private) , = level ==> (paramter level which is pass in constructor(char level))
    this-> health = health ;         //this-> health ==>(class health main health below public) , = health ==> (paramter health which is pass in constructor(int health))
  }


// print function 
void print() {
    cout<< level <<endl ;
}

//getter
  int getHealth() {
    return health ;
  }

  char getLevel() {
    return level ;
  }
//setter
 void setHealth(int h) {
    health = h;
 }

 void setLevel(char ch) {
    level = ch ;
 }

};

int main() {

//🔸Object creation statically
Hero ramesh(10);                // parameterised object so we need to pass a argument
cout<<"Address of ramesh : "<< &ramesh <<endl ;                //output: 0x61ff08
cout<<"Value as ramesh health : "<<ramesh.getHealth() <<endl ; //output: 10

//calling print function :
ramesh.print() ;               //output: garbage value bcoz nothing pass for level print func only prints level

//🔸Object creation dynamically
Hero* h = new Hero(12);              // parameterised object so we need to pass a argument

//calling print function :
h -> print() ;           //output: garbage value bcoz nothing pass for level  print func only prints level
 
//🔸Object with 2 parameter
 Hero temp( 23, 'D'); 

//calling print function :
 temp.print() ;         //output: D bcoz pass as argument  print func only prints level


    return 0;
}

//🔴 'this'  keyword
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


//46 / 149       49:00