#include <iostream>

using namespace::std;


int main()
{
  int input, result;
  cout << "Enter number to be divided by 7" << endl;
  cin >> input;
  int maxresult = input >> 2;
  for(result = 0; result < maxresult; result++){
    if(result * 7 == input){
      break;
    }
    else if(result * 7 > input){
      result--;
      break;
    }
    else{
      continue;
    }
  }
  cout << "Result = " << result;
  return 0;
}