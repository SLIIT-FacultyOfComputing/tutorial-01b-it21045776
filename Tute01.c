/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1, sub2;
  float average;

  printf("Input marks of 1st subject : ");
  scanf("%d", &sub1); 
  printf("Input marks of 2nd subject : ");
  scanf("%d", &sub2); 

  average = (sub1+sub2)/2;

  printf ("Average is %.2f : ",average);
  
  return 0;
}

