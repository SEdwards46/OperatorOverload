#include "Rect.h"

Rect::Rect(){
  length = width = area = 0;
}

void Rect::setSize(int l, int w){
  length = l;
  width = w;
}

int Rect::calcArea() const{
  return length * width;
}

ostream & operator << (ostream &out, const Rect &c){
  cout << "The area is ";
  out << c.calcArea();
  return out;
}

istream& operator >> (istream &in, Rect &c){
  cout << "Enter length";
  in >> c.length;
  cout << "Enter width";
  in >> c.width;
  c.setSize(c.length, c.width);
  return in;
}