#include <iostream>
#include <math.h>
using namespace::std;

int main(){
  int a, b;
  int maxofint;
  maxofint = pow(2, (8*sizeof(int)) - 1) -1;
  cout << "Maxofint = " << maxofint << endl;
  cout << "Enter input" << endl;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  if(a > maxofint/b){
    cout << "The product will exceed max of int";
    cout << (a * b);
  }
  else{
    cout << (a * b);
  }
  return 0;
}