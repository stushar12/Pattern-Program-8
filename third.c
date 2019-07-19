#include <stdio.h>
int main()
{
char ch='A';
  for(int i=1;i<=5;i++)
  {
    char ch1=ch;
    char ch2='B';
    for(int j=1;j<=i;j++)
    {
      printf("%c ",ch1);
      ch1--;

     }
    for(int k=1;k<i;k++)
    {
      printf("%c ",ch2);
      ch2++;
    }

    ch++;
    printf("\n");
  }
}
