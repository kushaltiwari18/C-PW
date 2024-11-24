// ! Today's Checklist
/* 
1) Whats is OOPS?
   
   ? Procedure Oriented Programming:-
   (a) Conventional Programming Paradigm --> use high level language C, FORTAN, COBOL.
   (b) Program divided into tasks --> group into functions.
   (c) Main function on functions.
   (d) Global data --> accessible from entire program.
   (e) Difficult to track which function changed data.
   (f) If data structure is changed, functions to be revised.

   ? Object Oriented Programming:-
   (a) Main focus on data.
   (b) Bind the data to the function using it.
   (c) Program is divided into Objects (data/function).
   (d) It protects data from accidental changes.
   
2) Class:-

   (a) Class is the fundamental unit of OOPs.
   (b) User defined Data Types
   (c) Define some data/properties & method/function.

3) Object:-

   (a) Object are variable of type class.
   (b) Variable of data type "Student" --> object

4) Constructor & Destructor

   (a) Constructor are used to initialize and object object with some value
   (b) This is a function which is called when an object is called
   (c) same name as class name.
    ? Types:- Default, Parameterised, copy

    Destructor:-
   (a) function is called when object is deleted
   (b) cannot pass any nme
   (c) name -> ~(class_name)

5) Encapsulation:-

   (a) Binding of methods & variables together into a single unit - [class].
   (b) how? -> data is only accessible from the class method.
   (c) it also leads to data abstraction/hiding class  --> ADT(Abstract data type).

6) Abstraction:-

   (a) enable us to dislplay only essential information while hidinging implementation details.

7) Inheritance:-

   (a) is used to inherit property of another class

8) Access Specifier: -

? Modes of inheritance --> a) Public  b) Private  c) Protected
    Public: Data and Functions ---> they can be accessed  from anywhere in the code.
    Protected : Data and Functions ---> they can be accessed  in own class, parent class & derived class.
    Private : Data and Functions ---> accessible ony in own class

? Types of inheritance --> a) Single Inheritance  b) Multi-level Inheritance  c) Multiple Inheritance  d)Hierarchical Inheritance  e) Hybrid Inheritance
! Diamond Problem in Inheritance --> base class has multiple parent class having a common ancestor class




9) Polymorphism:-

   (a) ability of objects/methods to take different
   ? 1) Compile time ploymorphin  --> it is seen through function overloading/ opertor overloading.

   * Compile time vs Runtime Polymorphism

     ? Compile time:- acheve through function overloading, operatorloading
       -> occurs at compile time.
       -> through function-overloading/operator-overloading.
       -> function name should be same but parameters can be different.
       -> faster execution time.
       -> more memory efficient.

     ? Run time:-  resolved at runtime, achieve by fuction overiding, child class defines a function of parent class
       -> occurs at run time.
       -> through function overiding.
       -> function name and parameter should be same.
       -> slower execution time.
       -> less memory efficient as compared to compile time

10) Virtual Functions:- virtual keyword used for function overiding.



& Abstract Class

11) Friend Function:-
      Non-member function which can access private members of the class.
 
*/



