/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n;
  int total = 0;
  int count = 0;

  printf ("Input n : ");
  scanf ("%d", &n);
  while (count < n){
    count = count + 1;
    total = total + count;
  }
  
  printf ("Sum is : %d", total);
  
  return 0;
}

