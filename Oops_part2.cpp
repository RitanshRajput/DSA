//             //🔴Pillars of OOPS Concept - 
//🔘Inheritance
//🔘Polymorphism
//🔘Encapsulation
//🔘Abstraction


//   🔘Encapsulation
// In normal terms, Encapsulation is defined as wrapping up data and information under a single unit.
// In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

// Consider a real-life example of encapsulation, in a company, there are different sections 
// like the accounts section, finance section, sales section, etc. The finance section handles 
// all the financial transactions and keeps records of all the data related to finance. 
// Similarly, the sales section handles all the sales-related activities and keeps records of 
// all the sales. Now there may arise a situation when for some reason an official from the finance
// section needs all the data about sales in a particular month.
// In this case, he is not allowed to directly access the data of the sales section.
// He will first have to contact some other officer in the sales section and then request him
// to give the particular data. This is what encapsulation is. 
// Here the data of the sales section and the employees that can manipulate them are wrapped under a single name “sales section”.

//🔸Wrapping Up of Data members and function is called encapsulation.
// ex:
//            Encapsulation
//         _____________________
//        [Data member| function]         ==> Here data member and functions are wrap together in a single entity hence encapsulation achieved
//         ---------------------
//               class

// Data Member = properties / state
// function  = Methods / Behaviour

//🔴fully encapsulated class : 
// When All data members are marked private in that class 
// then it is said to be full encapsulated class.
//ex:
// class Hero {       
//     private:             //private means only access the data member in the same class not in any other class
//     int num ;
//     char label ;
//     string score ;
// }

//❓Why :
// Information Hiding / Data Hiding ====> Encapsulation
// By Hiding data = Security Rises
// By Hiding information = we can make the class "Read only" too
// Code Reusability
// Unit testing becomes easy


//🔸Implementation:
// #include<iostream>
// using namespace std;

// class Student {
//     private:
//     string name;
//     int age;
//     int height;

//     public:
//     int getAge() {
//         return this -> age;
//     }

// } ;

// int main(){

// Student first ;

// cout<<" Sab sahi chal raha hai :" <<endl ;
//     return 0;
// }



//            🔘 Inheritance
//🔸 The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming.

//1. Sub Class (Derived class): The class that inherits properties from another class is called Sub class or Derived Class.
//2. Base Class (Super class): The class whose properties are inherited by a sub-class is called Base Class or Superclass.
//3. Reusability: Inheritance supports the concept of “reusability”, 
//  i.e. when we want to create a new class and there is already a class that includes some of the code that we want, 
//  we can derive our new class from the existing class. By doing this, we are reusing the fields and methods of the existing class.

// Example: Dog, Cat, Cow can be Derived Class of Animal Base Class. 

//                     [Animal Class]            => Super class / Base class
//                      /     |     \ 
//           [Dog Class] [Cat class] [Cow Class]  => Derived class / Sub class


//🔸Inheritance Syntax :
//     class parent_class {
//         //body of parent class
//     } ;
    
//     class child_class : acccess_modifier  parent_class {
//         //body of child class
//     } ;

//🔸Implementation
// #include<iostream>
// using namespace std;

// //creating super class/ base class/ parent class :
// class Human {

//     public:
//        int height;
//        int weight;
//        int age ;

//     public:
//        int getAge() {
//         return this-> age ;
//        }
//        void setWeight(int w){
//         this->weight = w ;
//        }
// } ;

// //creating sub class/ derived class/ child class: 
// //syntax: class child_class : acccess_modifier  parent_class
// class Male : public Human{

//         public:
//         string color ;

//         void sleep() {
//             cout<<" Male sleeping :"<<endl;
//         }
//  } ;

// int main() {

// Male object1 ;
// //accessing parent's properties by child through Inheritance
// cout<< object1.age <<endl ;
// cout<< object1.weight <<endl ;
// cout<< object1.height <<endl ;

// // accessing child's own property
// cout<< object1.color <<endl ;
// object1.setWeight(65) ;
// cout<< object1.weight <<endl ;    //output: 65

// object1.sleep() ;           //output: male sleeping

//     return 0;
// }


//🔴 Mode of inheritance :

//) Public mode: If we derive a subclass from a public base class. Then, the base
// class's public members will become public in the derived class, and protected
// cass members will become protected inthe derived class.

//2) Protected mode: If we derive a subclass from a Protected base class. Then
// both public members and protected members of the base class will become
// protected in the derived class.


//3) Private mode: If we derive a subclass from a Private base class. Then both
// public members and protected members of the base class will become
// Private in the derived class.


//Table to demonstrat mode of inheritance :
//________________________________________________________________
// Base Class member Access | Public    | Protected  | Private    |
// Specifier                |           |            |            |
//________________________________________________________________|
// Public                   | Public    | Protected  | Private    |
//________________________________________________________________|
// Protected                | Protected | Protected  | Private    |      
//________________________________________________________________|
// Private                  |  Not      | Not        | Not        |
//                          | Accessible| Accessible | Accessible |
//________________________________________________________________|


//🔸Private example:
// #include<iostream>
// using namespace std;

// class Human {

//     public:
//        int height;
//        int weight;
    
//     //creating a private proterty :
//     private:
//        int age ;

//     public:
//        int getAge() {
//         return this-> age ;
//        }
//        void setWeight(int w){
//         this->weight = w ;
//        }
// } ;

// class Male : public Human{

//         public:
//         string color ;

//         void sleep() {
//             cout<<" Male sleeping :"<<endl;
//         }
//  } ;

// int main() {

// Male object1 ;
// //trying to access private data member from parent class:
// cout<< object1.age <<endl ;      //output: error 'age' is private member of 'Human'

//     return 0;
// }

//  25:40    47/149