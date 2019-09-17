#include <iostream>
#include <string>
using namespace std;
class B {
    private int B1;
    private float B2;
    
    public int getB1() {
      return B1;
    }
    public float getB2() {
      return B1;
    }
    public void setB1(int B1) {
      this->B1 = B1;
    }
    public void setB2(int B2) {
      this->B2 = B2;
    }
    
    public void MB1() {
      cout << "MB1" << endl;
    }
    public void MB2() {
      cout << "MB2" << endl;
    }
  };