#include <iostream>
using namespace std;
void itc_name() {
  setlocale(LC_ALL, "Russia");
  cout << " Кирилл ";
}

void itc_fio() { 
  setlocale(LC_ALL, "Russian");
  itc_name();
  cout << "Штырков Ильич";
}

int itc_abs(int x) {
  if (x >= 0) {
    return x;
  } else
    return -x;
}

double itc_fabs(double x) {
  if (x >= 0) {
    return x;
  } else
    return x * -1;
}

int itc_revnbr(int x) { 
  if (x > 0)
    return (1 * (x / 100)) + (10 * (x / 10 % 10)) + (100 * (x % 10));

  else {
    x *= -1;
    return (-10 * (x / 10 % 10)) + (-100 * (x % 10)) + (-1 * (x / 100));
  }
}

bool itc_iseven(int x) {
  if (x % 2 == 0)
    return true;
  else
    return false;
}

int itc_max(int x, int c) {
if (x > c)
    return x;
  else
    return c;
}

int itc_min(int x, int c) {
  if (x > c)
    return c;
  else
    return x;
}

double itc_fmax(double x,double c) {
  if (x > c)
    return x;
  else
    return c;
}

double itc_fmin(double x,double c) {
  if (x > c)
    return c;
  else
    return x;
}

int itc_sqrt(int x) {
  if ( x > 0){
  for (int i = 0; i < x; i++) {
    if (x == i * i) {
      return i;
    }
  }
    }
  if ( x == 0){
    return 0;
  }
  return -1;
}

int itc_skv(int x) { 
  if (x > 0)
    return x * x;
  else
    return -1;
}

int itc_spr(int x, int c) { 
if (x > 0)
    return x * c;
  else
    return -1;
}

int itc_str(int x, int c, int z) { 
  int g = (x + c + z) / 2, f = 0;
  f = g * (g - x) * (g - c) * (g - z);
  if (x > 0 && c > 0 && z > 0) {
    if (itc_sqrt(f) > 0)
    return itc_sqrt(f);
  } 
  return -1;
}

double itc_scir(int r) {
  if (r > 0)
    return 3.14 * (r * r);
  else
    return -1;
}

double itc_pow(int x, int c) { 
  int z = x;
  if (c > 0) {
    for (int i = 1; i < c; i++) {
      x = x * z;
    }
    return x;
  }
  if (c == 0) {
    return 1;
  }
  if (c < 0) {
    for (int i = 1; i < (c * -1); i++) {
      x = x * z;
    }
    return 1.0 / x;
  }
}

bool itc_ispositive(int x) { 
  if (x >= 0)
    return true;
  if (x < 0)
    return false;
}

bool itc_ispositive_d(double x) { 
  if (x >= 0)
    return true;
  if (x < 0)
    return false;
}
