#include "easy.h"
#include <iostream>
using namespace std;

int main() {
  itc_fio(); 
  cout << endl;
  cout << itc_abs(7);
  cout << endl;
  cout << itc_fabs(-0.1111) << endl; 
  cout << itc_revnbr(123) << endl; 
  cout << itc_iseven(4) << endl; 
  cout << itc_max(0, -6) << endl; 
  cout << itc_min(-56, -56) << endl; 
  cout << itc_fmax(5.2, 1.2) << endl; 
  cout << itc_fmin(84.412, 84.92) << endl; 
  cout << itc_sqrt(9) << endl; 
  cout << itc_skv(5) << endl; 
  cout << itc_spr(5, 0) << endl; 
  cout << itc_str(1,2,3) << " ------13" << endl; 
  cout << itc_scir(5) << endl; 
  cout << itc_pow(-2, -3) << endl; 
  cout << itc_ispositive(-1) << endl; 
  itc_ispositive_d(-0.2);
  return 0;
}
