#include <iostream>
using namespace std;

class Rect{


private:
int length, width, area;


public:
Rect();
void setSize(int l, int w);
int calcArea() const;
friend ostream & operator << (ostream &out, const Rect &c);
friend istream & operator >> (istream &in,  Rect &c);
};