#include <stdio.h>

void pong(int);
void ping(int n)
{
  if(n>0)
  {
    printf("Ping ");
    n--;
    pong(n);
  }
}

void pong(int n)
{
  if(n>0)
  {
    printf("Pong ");
    n--;
    ping(n);
  }
}

int main()
{
  int n = 4;
  ping(n);

  return 0;
}
