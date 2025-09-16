# Aim
To study overloading ( polymorphism ) in C++

# Software 
Visual studio code

Windows/Linux

# Theory
# Overloading in C++
Overloading in C++ allows multiple definitions for the same name (function or operator) with different parameters or behaviors. It enhances polymorphism, making code more intuitive and flexible.

# Types of Overloading
Function Overloading - Multiple functions with the same name but different parameter lists.

Constructor Overloading - Multiple constructors in a class with different parameter lists.

Operator Overloading - Redefining the behavior of operators for user-defined types (classes).

# 1. Function Overloading
✅ Definition

Function overloading allows you to define multiple functions with the same name but different number or types of parameters.

📌 Rules

Functions must differ in number or type of parameters.

Return type alone cannot distinguish overloaded functions.

🧪 Example

    cpp
    #include <iostream>
    using namespace std;
    
    class Print {
    public:
        void show(int i) {
            cout << "Integer: " << i << endl;
        }
    
        void show(double d) {
            cout << "Double: " << d << endl;
        }
    
        void show(string s) {
            cout << "String: " << s << endl;
        }
    };
    
    int main() {
        Print p;
        p.show(10);
        p.show(3.14);
        p.show("Hello");
        return 0;
    }
    
🎯 Use Cases

Simplifies naming: add(int, int) vs add(double, double)

Improves readability and maintainability

# 2. Constructor Overloading
✅ Definition

Constructor overloading allows a class to have multiple constructors with different parameter lists to initialize objects in different ways.

📌 Rules

Constructors must differ in number or type of parameters.

Helps in creating objects with varying initial states.

🧪 Example

    cpp
    class Box {
    private:
        double length, width, height;
    
    public:
        // Constructor for cube
        Box(double side) {
            length = width = height = side;
        }
    
        // Constructor for cuboid
        Box(double l, double w, double h) {
            length = l;
            width = w;
            height = h;
        }
    
        double volume() {
            return length * width * height;
        }
    };

🎯 Use Cases

Flexibility in object creation

Default, parameterized, and copy constructors

# 3. Operator Overloading

✅ Definition

Operator overloading allows you to redefine the behavior of C++ operators for user-defined types (classes).

📌 Rules

Only existing operators can be overloaded.

Cannot change precedence or arity of operators.

Some operators like ::, ., .*, sizeof cannot be overloaded.

🧪 Example: Overloading + for a Point class

    cpp
    class Point {
    public:
        int x, y;
    
        Point(int a, int b) : x(a), y(b) {}
    
        Point operator+(const Point& p) {
            return Point(x + p.x, y + p.y);
        }
    
        void display() {
            cout << "(" << x << ", " << y << ")" << endl;
        }
    };
    
    int main() {
        Point p1(2, 3), p2(4, 5);
        Point p3 = p1 + p2;
        p3.display();  // Output: (6, 8)
    }

🎯 Use Cases

Intuitive syntax for complex types

Custom behavior for arithmetic, comparison, assignment

# Algorithms
# Program 1
Objective : to illustrate the concept of constructor overloading in C++

Steps 

    1. Start
    
    2. Define a class Construct with three overloaded constructors:
    
    Constructor with two int parameters
    
    Constructor with two string parameters
    
    Constructor with two float parameters
    
    3. Inside each constructor, display the values passed:
    
    For int constructor: print both integers
    
    For string constructor: print both strings
    
    For float constructor: print both float values
    
    4. In the main() function:
    
    Create an object ct1 using integer arguments → invokes Construct(int, int)
    
    Create an object ct2 using string arguments → invokes Construct(string, string)
    
    Create an object ct3 using float arguments → invokes Construct(float, float)
    
    5. Each constructor executes automatically when its corresponding object is created, printing the appropriate output.
    
    6. End

# Program 2
Objective : to illustrate the concept of constructor overloading in C++

Steps 

    1.Start
    
    2.Define a class named Volume
    
    Inside the class, define two constructors:
    
    Constructor 1: Accepts three float parameters (l, b, h)
    
    Calculate volume of cuboid: vol = l × b × h
    
    Display the result
    
    Constructor 2: Accepts one float parameter (s)
    
    Calculate volume of cube: vol1 = s × s × s
    
    3.Display the result
    
    In the main() function:
    
    Create object v1 with three float values → invokes cuboid constructor
    
    4.Create object v2 with one float value → invokes cube constructor
    
    5.Each constructor executes automatically when its object is created, printing the respective volume
    
    6.End

# Program 3
Objective : to illustrate the use of function overloading in C++

Steps

    1.Start
    
    2.Define a class named Cars
    
    3.Inside the class, define two member functions:
    
    Car1(string Brand, string model)
    
    Accepts two string parameters
    
    Displays the brand and model
    
    Car2(int price)
    
    Accepts one integer parameter
    
    Displays the price
    
    4.In the main() function:
    
    Create an object c of class Cars
    
    Call Car1() using the object c with string arguments "VW" and "Virtus"
    
    Call Car2() using the object c with integer argument 1500000
    
    5.Each function executes and prints the respective output
    
    6.End

# Program 4
Objective : to illustrate the use of operator overloading in C++

Steps

    1.Start
    
    2.Define a class named Complex
    
    3.Declare two private integer variables:
    
    real to store the real part
    
    imag to store the imaginary part
    
    4.Define a constructor Complex(int r=0, int i=0)
    
    Initialize real with r
    
    Initialize imag with i
    
    5.Define an overloaded + operator function
    
    Accepts another Complex object as a parameter
    
    Creates a temporary Complex object res
    
    Adds the real parts: res.real = real + obj.real
    
    Adds the imaginary parts: res.imag = imag + obj.imag
    
    Returns the result object res
    
    6.Define a print() function
    
    Displays the complex number in the format real + iimag
    
    7.In the main() function:
    
    Create object c1 with values (10, 5)
    
    Create object c2 with values (2, 4)
    
    Add c1 and c2 using overloaded + operator → store result in c3
    
    Call c3.print() to display the result
    
    8.End

# Program 5
Objective : to illustrate the use of operator overloading in C++

Steps 

    1.Start
    
    2.Define a class named Box
    
    3.Declare three private data members:
    
    length (double)
    
    width (double)
    
    height (double)
    
    4.Define a constructor Box(double l = 0, double w = 0, double h = 0)
    
    Initialize length, width, and height with provided values or default to 0
    
    5.Define the overloaded + operator function
    
    Accepts another Box object as parameter
    
    Creates a new Box object result
    
    Adds corresponding dimensions: result.length = length + otherBox.length result.width = width + otherBox.width result.height = height + otherBox.height
    
    Returns result
    
    6.Define the overloaded - operator function
    
    Accepts another Box object as parameter
    
    Creates a new Box object result
    
    Subtracts corresponding dimensions: result.length = length - otherBox.length result.width = width - otherBox.width result.height = height - otherBox.height
    
    Returns result
    
    7.Define a display() function
    
    Prints the values of length, width, and height
    
    8.In the main() function:
    
    Create box1 with dimensions (5, 5, 2)
    
    Create box2 with dimensions (2, 4, 1)
    
    Display box1 and box2
    
    Create totalBox1 by adding box1 and box2 using overloaded + operator
    
    Create totalBox2 by subtracting box2 from box1 using overloaded - operator
    
    Display totalBox1 and totalBox2
    
    9.End
