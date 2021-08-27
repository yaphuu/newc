#include <stdio.h>
int main(void)
{
  int count = 0;
  char ch;
  
  for (count = 0; count < 10; count++)
  {
    ch = getchar();
    if (ch == '\n')
      continue;
     putchar(ch);
   }
   
  return 0;
}
