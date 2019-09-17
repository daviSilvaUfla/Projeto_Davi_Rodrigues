#include <iostream>
#include <string>
using namespace std;
class A {
  private int A1;
  private float A2;
  
  public int getA1() {
    return A1;
  }
  public float getA2() {
    return A2;
  }
  public void setA1(int A1) {
    this->A1 = A1;
  }
  public void setA2(int A2) {
    this->A2 = A2;
  }
  
  public void MA1() {
    cout << "MA1" << endl;
  }
  public void MA2() {
    cout << "MA2" << endl;
  }
  public void MA3() {
    cout << "Alteração a classe A partir do clone" << endl;
  }
};
