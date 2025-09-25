#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int x;
    int b;
    
    printf("input a number:");
    scanf("%ui", &x);
    
    for (b=0; x!=0; x >>=1)
    {
        if (x & 1)
        {
        b++;
        }     
    }
    printf("%i", b);
   
  
  system("PAUSE");	
  return 0;
}
