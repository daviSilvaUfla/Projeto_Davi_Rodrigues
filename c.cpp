#include <iostream>
#include <string>
using namespace std;
class C {
  private String C1;
  private int C2;
  
//   gets e sets
  public int getC1() {
    return C1;
  }
  public String getC2() {
    return C2;
  }
  public void setC1(int C1) {
    this->C1 = C1;
  }
  public void setC2(int C2) {
    this->C2 = C2;
  }
  
//   métodos que imprime seu proprio nome
  public void MC1() {
    cout << "MC1" << endl;
  }

  public void MC2() {
    cout << "MC2" << endl;
  }

  public void MC3() {
    cout << "MC3" << endl;
  }
};