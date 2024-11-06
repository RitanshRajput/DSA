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


//                      //🔘Protected  access modifier : 
//🔸It is similar to that of private access modifiers, the difference is that the class member 
// declared as Protected are inaccessible outside the class but they can be accessed by any 
// subclass(derived class) of that class.

//🔸Protected access modifier is similar to that of private access modifiers.
//🔸The class member declared as Protected are inaccessible outside the class but
//  they can be accessed by any subclass(derived class) of that class.



//                         //🔴 Mode of inheritance :

//) Public mode: If we derive a subclass from a public base class. Then, the base
// class's public members will become public in the derived class, and protected
// cass members will become protected inthe derived class.

//2) Protected mode: If we derive a subclass from a Protected base class. Then
// both public members and protected members of the base class will become
// protected in the derived class.


//3) Private mode: If we derive a subclass from a Private base class. Then both
// public members and protected members of the base class will become
// Private in the derived class.


//🔴Table to demonstrat mode of inheritance :
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
//                          | (hidden)  | (hidden)   | (hidden)   |
//________________________________________________________________|

//🔘 Parent       ===>    child    ==> inherited data

//🔸 Public       ===>  public     ==>  public 
//🔸 Public       ===>  private    ==>  private 
//🔸 Public       ===>  protected  ==>  protected

//🔸 Protected    ===>  public     ==>  protected
//🔸 Protected    ===>  private    ==>  private
//🔸 Protected    ===>  protected  ==>  protected

//🔸 Private      ===>  public     ==>  Not accessible
//🔸 Private      ===>  private    ==>  Not accessible
//🔸 Private      ===>  protected  ==>  Not accessible



//🔴 example : Public parent and (PPP child)
// #include<iostream>
// using namespace std;

// class Human {
//      //creating a public properties :
//     public:
//        int height;
//        int weight;
    
//     //creating a private property :
//     private:
//        int age ;


//     //creating  public functions :
//     public:
//        int getAge() {
//         return this-> age ;
//        }
//        void setWeight(int w){
//         this->weight = w ;
//        }
// } ;

// //accessing through public child :
// class Male : public Human{             

// //accessing through protected child : 
// // class Male : protected Human{           

// //accessing through private child : 
// // class Male : private Human{                


//     public:
//        string color ;

//     void sleep() {
//        cout<<" Male sleeping :"<<endl;
//     }

    
//     int getHeight() {
//         return this -> height ;
//     }


//  } ;

// int main() {

// Male object1 ;
// // trying to access public data member through public child:
// // cout<< object1.height <<endl ;              //  accessible

// // trying to access public data member through protected child:
// // cout<< object1.height <<endl ;               //not running (protected)  only access inside parent class of child class or getter setter
// // cout<< object1.getHeight() <<endl  ;         //running properly (Accessing thorugh getter setter)

// //trying to access public data member through private child:
// // cout<< object1.height <<endl ;         //not accessible (private) only access inside parent class 
// // cout<< object1.getHeight() <<endl ;    //running properly (Accessing thorugh getter setter)

//     return 0;
// }


// //🔴Exmaple : Protected Parent and (PPP child)
// #include<iostream>
// using namespace std;

// class Human {
//      //protected properties :
//     protected:
//        int height;
    
//     public:
//        int weight;
    
//     private:
//        int age ;

    
//     //public function
//     public:
//        int getAge() {
//         return this-> age ;
//        }
//        void setWeight(int w){
//         this->weight = w ;
//        }
// } ;

// // accessing through public child :
// // class Male : public Human{             

// //accessing through protected child : 
// // class Male : protected Human{           

// //accessing through private child : 
// class Male : private Human{                


//     public:
//        string color ;

//     void sleep() {
//        cout<<" Male sleeping :"<<endl;
//     }

    
//     int getHeight() {
//         return this -> height ;
//     }


//  } ;

// int main() {

// Male object1 ;
// // trying to access protected data member through public child:
// // cout<< object1.height <<endl ;           // not accessible (protected parent data member) access in class or child class

// // trying to access a protected data member through protected child:
// // cout<< object1.height <<endl ;            //not accessible (protected parent data member) access in class or child class
// // cout<< object1.getHeight() <<endl  ;       //accessible (Accessing through getter setter) in child class

// //trying to access protected data member through private child:
// // cout<< object1.height <<endl ;         //not accessible (private) only access inside parent class 
// // cout<< object1.getHeight() <<endl ;    //running properly (Accessing thorugh getter setter)

//     return 0;
// }


//🔴Exmaple : Private Parent and (PPP child)
// Private member cannot be inherited 
// #include<iostream>
// using namespace std;

// class Human {
//      //private properties :
//     private:
//        int height;
    
//     public:
//        int weight;
    
//     private:
//        int age ;

    
//     //public function
//     public:
//        int getAge() {
//         return this-> age ;
//        }
//        void setWeight(int w){
//         this->weight = w ;
//        }
// } ;

// // accessing through public child :
// // class Male : public Human{             

// //accessing through protected child : 
// // class Male : protected Human{           

// //accessing through private child : 
// class Male : private Human{                


//     public:
//        string color ;

//     void sleep() {
//        cout<<" Male sleeping :"<<endl;
//     }

    
//     int getHeight() {
//         return this -> height ;    //not accessible (private only accessible inside parent class)
//     }


//  } ;

// int main() {

// Male object1 ;
// // trying to access protected data member through public child:
// // cout<< object1.height <<endl ;             // not accessible 

// // trying to access a protected data member through protected child:
// // cout<< object1.height <<endl ;             //not accessible 
// // cout<< object1.getHeight() <<endl  ;       // Not accessible 

// //trying to access protected data member through private child:
// // cout<< object1.height <<endl ;            //not accessible 
// // cout<< object1.getHeight() <<endl ;       //not accessible

//     return 0;
// }



//               //🔴Types of inheritance
//🔘 Single inheritance
//🔘 Multilevel inheritance
//🔘 Multiple inheritance
//🔘 Hierarchical inheritance
//🔘 Hybrid inheritance



//                  //🔘 Single inheritance

// In single inheritance, a class is allowed to inherit from only one class. 
//i.e. one subclass is inherited by one base class only.
//ex:         [CLASS A] (base class)
//               |
//            [Class B] (derived class)

//🔸Implementation:

// #include<iostream>
// using namespace std;

// class Animal{
   
//     public:
//      int age;
//      int weight;
   
//    public:
//    void speak() {
//     cout<< "Speaking ! "<<endl ;
//    }
// };

// class Dog : public Animal{
     
// } ;

// int main() {

//  Dog d ;
//  d.speak() ;            // {working}
//  cout<< d.age <<endl ;  // accessible (working)
//     return 0;
// }



//                  //🔘 Multilevel inheritance

//  In this type of inheritance, a derived class is created from another derived class.
//ex:         [Class C] (Base class 2)
//                |
//            [Class B] (Base class 1)
//                | 
//            [Class A] (Derived class)

//🔸Implementation :
// #include<iostream>
// using namespace std;
// //class B
// class Animal{
   
//     public:
//      int age;
//      int weight;
   
//    public:
//    void speak() {
//     cout<< "Speaking ! "<<endl ;
//    }
// };

// //Class A
// class Dog : public Animal{
     
// } ;
// // Derived Class
// class GermanShepherd : public Dog {

// } ;

// int main() {

//  GermanShepherd d ;
//  d.speak() ;            // {working}
//  cout<< d.age <<endl ;  // accessible (working)
//     return 0;
// }


//                  //🔘 Multiple inheritance

//Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. 
//i.e one subclass is inherited from more than one base class.

//ex:    [Class B] (Base class 1)               [Class C] (Base class 2)
//                           \                     /
//                         [Class A] (Derived class)

//🔸Implementation :
// #include<iostream>
// using namespace std;
// //class B
// class Animal{
   
//     public:
//      int age;
//      int weight;
   
//    public:
//    void bark() {
//     cout<< "Bhooking ! "<<endl ;
//    }

// };

// //Class A
// class Human {
//    public:
//    string color;

//    public:
//    void speak() {
//     cout<< "Booling !" <<endl ;
//    }

// } ;

// //🔸Multiple Inheritance
// //syntax : class Name : parent class A , parent class B {} ;
// class Mutant : public Animal , public Human {
 
// };

// int main() {

// Mutant creature ;

// creature.bark() ;         //output: working properly
// creature.speak() ;         //output: working properly

// cout<< creature.age <<endl ;   // accessible
//     return 0;
// }



//                 //🔘 Hierarchical inheritance

// In this type of inheritance, more than one subclass is inherited from a single base class.
// i.e. more than one derived class is created from a single base class.



//ex:                        [Class G]
//                           /       \ 
//                   [Class B]       [Class E]
//                   /      \         /      \ 
//           [class A]  [class B]  [class D] [class F]

//🔸Implementation :
// #include<iostream>
// using namespace std;
// //class A parent class
// class A{
      
//  public:
//    void functionA() {
//     cout<< "Class A accessed ! "<<endl ;
//    }
// };

// //Class B : inheriting class A
// class B : public A{

//  public:
//     void functionB() {
//      cout<< "Class B accessed !" <<endl ;
//     }
// } ;

// // Class C : inheriting class A
// class C : public A {

//  public: 
//    void functionC() {
//      cout<< "Class C accessed !" <<endl ;
//     }
// } ;

// int main() {

//  A object1 ;
//  object1.functionA() ;      //output: Accessing class A

//  B object2 ;
//  object2.functionA() ;      //output: Accessing class A
//  object2.functionB() ;      //output: Accessing class B

//  C object3 ;
//  object3.functionA() ;      //output: Accessing class A
// //  object3.functionB() ;      //output: Not accessible bcoz not inheriting class B
//  object3.functionC() ;      //output: Accessing class C
 

//     return 0;
// }



//                 //🔘 Hybrid (virtual) inheritance

// Hybrid Inheritance is implemented by combining more than one type of inheritance.
// For example: Combining Hierarchical inheritance and Multiple Inheritance. 

//ex:                                 [class F]          [class G]
//                                     /       \           /
//         (single inheritance) [class B]        [class E] (multiple inheritance)
//                                /      \ 
// (multilevel inheritnace) [class A]    [class C] (multilevel inheritnace)
//                         (hierarichical inheritance )


//🔸Implementation:
// #include<iostream>
// using namespace std;

// //class F
// class F {
     
//     public:
//     void funcF() {
//         cout<<" Func F ko bulaya " <<endl ;
//     }
// }; 
// //class G
// class G {
     
//     public:
//     void funcG() {
//         cout<<" Func G ko bulaya " <<endl ;
//     }
// }; 
// // classs B  (single inheirtance)
// class B : public F {
     
//     public:
//     void funcB() {
//         cout<<" Func B ko bulaya " <<endl ;
//     }
// }; 

// //class E (multiple inheritance)
// class E : public F , public G {
     
//     public:
//     void funcE() {
//         cout<<" Func E ko bulaya " <<endl ;
//     }
// }; 

// //class A (multilevel inheritance)
// class A : public B{
     
//     public:
//     void funcA() {
//         cout<<" Func A ko bulaya " <<endl ;
//     }
// }; 

// //class C (multilevel inheritance)
// class C : public B {
     
//     public:
//     void funcC() {
//         cout<<" Func C ko bulaya " <<endl ;
//     }
// }; 

// int main() {

// F  one ;
// one.funcF() ;              //outptu: func F ko bulaya 

// G two ;
// two.funcG() ;              //outptu: func G ko bulaya 

// B three ;
// three.funcB() ;            //outptu: func B ko bulaya  
// three.funcF() ;            //outptu: func A ko bulaya  (single inheritance)

// E four ;
// four.funcE();              //outptu: func E ko bulaya  
// four.funcF();              //outptu: func F ko bulaya  (multiple inheritance)
// four.funcG();              //outptu: func G ko bulaya  (multiple inheritance)

// A five;
// five.funcA() ;             //outptu: func a ko bulaya  
// five.funcB() ;             //outptu: func a ko bulaya  (single inheritance)
// five.funcF() ;             //outptu: func a ko bulaya  (multilevel inheritance)

// C six ;
// six.funcC() ;              //outptu: func a ko bulaya  
// six.funcB() ;              //outptu: func a ko bulaya  (single inheritance)
// six.funcF() ;              //outptu: func a ko bulaya  (multilevel inheritance)

//     return 0;
// }




//                     //🔘 C++ Ambiguity (uncertainty.) :

//In multiple inheritances, when one class is derived from two or more base classes 
//then there may be a possibility that the base classes have functions with the same name, 
//and the derived class may not have functions with that name as those of its base classes. 
//If the derived class object needs to access one of the similarly named member functions of 
//the base classes then it results in ambiguity because the compiler gets confused about which
// base’s class member function should be called. 

//ex:          [class A]                [class B]
//           (function ABC)           (function ABC)
//                      \             /
//                         [class C]  (multiple inheritance)

// here when object of c tries to call function ABC , then compiler will get confused
// whether to call function ABC from class A or class B.

//🔴 To avoid ambiguity we use SCOPE RESOLUTION OPERATOR (::)

//🔸implementation :
// #include<iostream>
// using namespace std;

// class A{
   
//    public:
//    // same function name
//     void ABC(){
//         cout<< " pehle function " <<endl; 
//     }
// };

// class B{
   
//    public:
//    //same function name
//     void ABC(){
//         cout<< " Dusra function " <<endl; 
//     }
// };

// // multiple inheritance
// class C : public A, public B{

// };

// int main(){

// C box ;
// //syntax : for ambiguity using Scope resolution operator :
// //  object name .(dot) parent class name ::(scope resolution operator) function name() ;

// box.A ::ABC() ;    //output: pehla function
// box.B ::ABC() ;    //output: dusra function

//     return 0;
// }


//                      //🔘Polymorphism

// The word “polymorphism” means having many forms.
// In simple words, we can define polymorphism as the ability of a message to be displayed 
// in more than one form. 
// A real-life example of polymorphism is a person who at the same time can have different
// characteristics. A man at the same time is a father, a husband, and an employee. 
// So the same person exhibits different behavior in different situations. 
// This is called polymorphism. Polymorphism is considered one of the important 
// features of Object-Oriented Programming.

//🔴 Types of Polymorphism:
//🔘Compile-time Polymorphism.
//🔘Runtime Polymorphism.

//ex:                           [Polymorphism]
//                              /              \
//                       [Compile Time]         [Run Time]
//                       /           \                 |
//   [function Overloading] [Operator overloading]   [Virtual function]


//                 //🔘🔘Compile-time Polymorphism. (Static polymorphism)

//🔸This type of polymorphism is achieved by function overloading or operator overloading.



//                    //🔴Function Overloading:

// When there are multiple functions with the same name but different parameters, 
// then the functions are said to be overloaded, hence this is known as Function Overloading.
// Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. 
// In simple terms, it is a feature of object-oriented programming providing many functions
// to have the same name but distinct parameters when numerous tasks are listed under one function name. 
// There are certain Rules of Function Overloading that should be followed while overloading a function.

//🔸Implementation:
// #include<iostream>
// using namespace std;

// class A {
     
//     public:
//      void sayHello() {
//         cout << "Hello Ritansh Bhaiya "<<endl ;       //output: works fine
//     }
      
// // creating same above function again to see if it works:
//     //  void sayHello() {
//     //     cout << "Hello Ritansh Bhaiya "<<endl ;         //output: class member cannot be redeclared
//     // }

// // Creating function with same name but changing data type :
//     //  int sayHello() {
//     //     cout << "Hello Ritansh Bhaiya "<<endl ;         //output: cannot be overloaded
//     // return 1;
//     // }


// // creating function with same name but a change of signature (like adding parameter)
//     void sayHello(string name) {
//         cout<< "Hello " <<  name <<endl ;       //output: works fine
//     }

// // creating function with same name with change of data type and also changed in signature from above function
//     int sayHello(string name, int n) {
//         cout<< "Hello " <<  name <<endl ;      //output : works fne
//         return n ;
//     }

// };

// int main() {

//  A obj ;
//  obj.sayHello() ;          //output: Hello Ritansh Bhaiya

//     return 0;
// }


//                  //🔴 Operator Overloading
// C++ has the ability to provide the operators with a special meaning for a data type, 
// this ability is known as operator overloading. 
// For example, we can make use of the addition operator (+) for string class to concatenate two strings.
// We know that the task of this operator is to add two operands. 
// So a single operator ‘+’, when placed between integer operands, 
// adds them and when placed between string operands, concatenates them. 

//🔘The list of operators which can be overloaded:

//🔸Arithmetic Operators like %, +, -, *, /
//🔸Unary Operators like ++, --,!
//🔸Relational Operators like ==, !=, >=, <=
//🔸Logical operators like && and ||
//🔸Assignment operators like =, +=,*=, /=,-=, %=
//🔸Subscript operator [ ]
//🔸Bitwise operators like &, |, <<, >>, ^, ~


//🔘List of Operators That Cannot Be Overloaded :

//🔸Conditional or Ternary Operator (?:) cannot be overloaded.
//🔸Size of Operator (sizeof) cannot be overloaded.
//🔸Scope Resolution Operator (::) cannot be overloaded.
//🔸Class member selector Operator (.) cannot be overloaded.
//🔸Member pointer selector Operator (.*) cannot be overloaded.
//🔸Object type Operator (typeid) cannot be overloaded.
//🔸Among the in-built operators which operators cannot be overloaded using the friend function but can be overloaded by member functions are as follows:

//🔸Assignment Operator (=)
//🔸Function call Operator (())
//🔸Subscript Operator ([])
//🔸Arrow Operator (->)


//🔸Implementation :
// #include<iostream>
// using namespace std;

// class A {

//    public:
//     int a;
//     int b;

//    public:
//    int add(){
//     return a+b ;
//    }

// //operator overloading
// //syntax (for + operator) :  current element + (operator) input argument
//   void operator+ (A &obj) {
//     int value1 = this -> a;
//     int value2  = obj.a ;
//     cout<<" output : "<< value2 - value1 <<endl ;

//     // cout<<" Printing using + operator"<<endl ;
//   }

// //operator overloading for () bracket
//  void operator() () {
//     cout<< "Main () Bracket Hu " << this -> a <<endl ;
//  }

// } ;

// int main(){

//  A obj1 , obj2 ;

//  obj1.a = 4;
//  obj2.a = 7 ;

// //operator overloaded : here + will act as - 
//  obj1 + obj2 ;       //output: 3 (7-4)

// //calling () operator overload
// obj1();                 //output: Main Bracket Hu 4

//     return 0;
// }



//                  //🔴 Run-Time Polymorphism .(Dynamic polymorphism)

// This type of polymorphism is achieved by Function Overriding. 
// Late binding and dynamic polymorphism are other names for runtime polymorphism. 
// The function call is resolved at runtime in runtime polymorphism. 
// In contrast, with compile time polymorphism, the compiler determines which 
// function call to bind to the object after deducing it at runtime.

//🔸a) Method(function) ovveriding :
// Function Overriding occurs when a derived class has a definition for one of 
// the member functions of the base class. That base function is said to be overridden.

//🔸Rule for method(function) overriding:
//1. The method of the parent class and the method of the child class must have the same name.
//2. The method of the parent class and the method of the child class must have the same parameters.
//3. It is possible through inheritance only


//ex :   
// #include<iostream>
// using namespace std;

// class Parent {
//     public:
//       void Geeks() {
//         cout<<" Parent function called " <<endl ;
//         }
// } ;

// class Child : public Parent{
//       public:
//        void Geeks() {              //here child class using same name for function as parent class but making it do another work
//          cout<< " child function called "<<endl;
//        }
// };

// int main() {
//     Child derive ;
//     derive.Geeks() ;      //output: child function called
//     return 0;
// }




//                          //🔘 Abstraction

//🔸Abstraction means displaying only essential information and hiding the details. 
// Data abstraction refers to providing only essential information about the data to 
// the outside world, hiding the background details or implementation. 

// Consider a real-life example of a man driving a car. 
// The man only knows that pressing the accelerator will increase the speed of the car or 
// applying brakes will stop the car but he does not know how on pressing the accelerator 
// the speed is actually increasing, he does not know about the inner mechanism of the car 
// or the implementation of the accelerator, brakes, etc in the car. This is what abstraction is.

//🔴 Types of Abstraction:
//🔸Data abstraction – 
// This type only shows the required information about the data and hides the unnecessary data.

//🔸Control Abstraction – 
// This type only shows the required information about the implementation and hides unnecessary information.


//🔴Advantages of abstraction :
//🔸Only you can make changes to your data or function. and on one else can.
//🔸It makes the application secure by not allowing anyone else to see the background details. 
//🔸Increases the resuablity of the code.
//🔸Avoids duplication of your code.

//🔸Implementation:
// #include<iostream>
// using namespace std;

// class abstraction{

//     private:
//      int a;
//      int b;
    
//     public:
//     //(function)method to set value of private members
//      void set(int x, int y){
//         a = x;
//         b = y;
//      }

//     void display(){
//         cout<<" a : "<< a << endl ;
//         cout<<" b : "<< b << endl ;
//     } 
// } ;

// int main() {

// abstraction obj;

// obj.set(10, 20) ;
// obj.display() ;
// //output: a= 10
// //output: b = 20

//     return 0;
// }