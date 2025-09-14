#include<stdio.h>
int main(){
for (int i = 0; i < 10; i++)
{
  if (i == 3)
  {
   continue;//will continue to print when 3 comes and will skip 3 
  }
   printf("%d", i);
}
}