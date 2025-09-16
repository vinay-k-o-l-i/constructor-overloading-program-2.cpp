/* Vinay koli
24070123133
ENTC B2
*/

#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
    
public:
    Box(double l = 0, double w = 0, double h = 0) {
        length = l;
        width = w;
        height = h;
    }

    Box operator+(Box const& otherBox) {
        Box result;
        result.length = length + otherBox.length;
        result.width = width + otherBox.width;
        result.height = height + otherBox.height;
        return result;
    }
    
    Box operator-(Box const& otherBox) {
        Box result;
        result.length = length - otherBox.length;
        result.width = width - otherBox.width;
        result.height = height - otherBox.height;
        return result;
    }
    
    void display() {
        cout << "Length: " << length 
             << ", Width: " << width 
             << ", Height: " << height << endl;
    }
};

int main() {

    Box box1(5, 5, 2);
    Box box2(2, 4, 1);
    
    cout << "Box 1: ";
    box1.display();
    
    cout << "Box 2: ";
    box2.display();
 
    Box totalBox1 = box1 + box2;
    Box totalBox2 = box1 - box2;
    
    cout << "Total Box (box1 + box2): ";
    totalBox1.display();
    
    cout << "Total Box (box1 - box2): ";
    totalBox2.display();
    
    return 0;
}

/*Output
Box 1: Length: 5, Width: 5, Height: 2
Box 2: Length: 2, Width: 4, Height: 1
Total Box (box1 + box2): Length: 7, Width: 9, Height: 3
Total Box (box1 - box2): Length: 3, Width: 1, Height: 1
*/
