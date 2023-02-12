#include <iostream>
using namespace std;
int main() {
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   typedef int feet;
   feet instance = 10;
   cout << "new type feet = " << instance << endl;
   enum color {red, blue, yellow}c;
   c = blue;
   cout << "c is " << c << endl;
   enum color1 {red1, green = 5, blue1};
   cout << "blue1 is " << blue1 << endl;
   return 0;
}