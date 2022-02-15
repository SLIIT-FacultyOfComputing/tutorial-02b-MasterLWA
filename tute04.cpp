/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
 
}

long Factorial(int no){
  long value;
     for (int a=1;a<=no;a++) 
     {
		   value=value*a;
	   }
  return value;
  }



long nCr(int n, int r){
  long answer;
  answer =  Factorial(n)/(Factorial(r)*Factorial(n-r));
  return answer;
  }