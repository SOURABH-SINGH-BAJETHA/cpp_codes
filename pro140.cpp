#include <iostream>
#include <cmath>
using namespace std;
// Abstract base class CAL_AREA
class CAL_AREA {
protected:
 float radius;
 float height;

};
// Derived class Cone from CAL_AREA
class Cone : public CAL_AREA {
public:
 // Redefine get_data for Cone
 void get_data(){
 cout << "Enter the dimensions for Cone:" << endl;
 cout << "Radius: ";
 cin >> radius;
 cout << "Height: ";
 cin >> height;
 }
 // Redefine display_volume for Cone
 void display_volume(){
 float volume = (1.0 / 3.0) * M_PI * pow(radius, 2) * height;
 cout << "Volume of Cone: " << volume << endl;
 }
};
// Derived class Hemisphere from CAL_AREA
class Hemisphere : public CAL_AREA {
public:
 // Redefine get_data for Hemisphere
 void get_data(){
 cout << "Enter the dimensions for Hemisphere:" << endl;
 cout << "Radius: ";
 cin >> radius;
 }
 // Redefine display_volume for Hemisphere
 void display_volume() {
 float volume = (2.0 / 3.0) * M_PI * pow(radius, 3);
 cout << "Volume of Hemisphere: " << volume << endl;
 }
};
// Derived class Cylinder from CAL_AREA
class Cylinder : public CAL_AREA {
public:
 // Redefine get_data for Cylinder
 void get_data(){
 cout << "Enter the dimensions for Cylinder:" << endl;
 cout << "Radius: ";
 cin >> radius;
 cout << "Height: ";
 cin >> height;
 }
 // Redefine display_volume for Cylinder
 void display_volume(){
 float volume = M_PI * pow(radius, 2) * height;
 cout << "Volume of Cylinder: " << volume << endl;
 }
};
int main() {
 CAL_AREA* shapePtr; // Pointer to abstract base class
 // Example of using Cone

 Cylinder c;
 c.get_data();
 c.display_volume();
 
 return 0;
}
