#include "stdio.h"
#include "string.h"

#define _ ;
#define print printf
#define def(fn, x) switch(1)default
#define def(x) switch(1)default



int main() {
  int a = 3;
  def (a):
    print("Hi");
    print("Hello world");

  return 0;
} 