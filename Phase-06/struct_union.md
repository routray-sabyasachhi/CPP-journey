
# Objective:
1> Introduction
2> Declaration 
     a) Types of declaration
     b) Types of Initialization
          (Designated initialization)
3> struct v/s class





## =====================================================
# 1> Introduction :
A struct in C++ (short for structure) is a user-defined data type that allows grouping of different data types into a single composite object. Structs are particularly useful for managing composite data such as points, student information, or web page attributes. 

Why Use structs ?
i) Storing 2D coordinates of a point with x and y values.
ii) Managing student details, such as roll number, name, and address, in one structure.
iii) Grouping related attributes of a web pages.

# 2> Declaration
example is given in Phase-06/declaration.cpp

NOTE : in struct all member variables are by default public. but, we can make it pivate by declaring private.
and in class by default private we can make it public. 

# 3> struct v/s class

a) Default access specifier # above NOTE
    e.g. declaration.cpp
b) structs can acts like classes (structs in c++ supports all features of classes )
    e.g. * Constructors
         * Destructors
         * Member fuctions
         * Inheritance