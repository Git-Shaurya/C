//Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit.
#include<stdio.h>

int calculateper(int s, int m , int san);

int main () {
  int sci = 90;
  int math = 90;
  int sans = 90;

  printf ("percentage is : %d ", calculateper( sci , math , sans));

}

int calculateper(int s, int m, int san)
{
    int avg = ((s + m + san )/3 );
    return avg;
}
