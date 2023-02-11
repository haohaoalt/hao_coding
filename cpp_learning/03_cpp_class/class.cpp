#include<iostream>
using namespace std;

class Line{
    public:
        void setlength(double len);
        double getlength(void);
        Line();  //This is constructor declaration
        ~Line(); //This is destructor declaration
    private:
        double length;
};

Line::Line(){
    cout << "The object is being created " << endl;
}
Line::~Line(){
    cout << "The object is being deleted " << endl;
}
void Line::setlength(double len){
    length = len;
}
double Line::getlength(void){
    return length;
}
// Main function for the program
int main()
{
    Line line;
    // set line length
    line.setlength(6.0);
    cout << "gdbtest point1" << endl;
    cout << "gdbtest point2" << endl;
    cout << "gdbtest point3" << endl;
    cout << "gdbtest point4" << endl;
    cout << "gdbtest point5" << endl;

    cout << "Length of line : " << line.getlength() << endl;
    return 0;
}