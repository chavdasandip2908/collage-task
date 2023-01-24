#include<stdio.h> 
#include<string.h>

 
int main ()
{
  char a[1000], freq[256] = {0};
  int i, j, count = 0;
  scanf("%[^\n]s", a);    
  char ch = '0';
  for (i = 0; i < 10; i++)
    {
          for (j = 0; j < strlen(a) ; j++)
    	  {
    	    if (a[j] == ch)
    	    {
    	      count++;
    	    }
    	  }
      printf("%d ", count);
      count = 0;
      ch++;
    }

  return 0;
}
