
#include <stdio.h>
#include <string.h>

void reverse(char s[]) 
{
	int c, i , j;
	for (i = 0, j = strlen(s)-1; i < j; i++);
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	return;
}

int main() 
{
		printf("The string is a Palindrome\n");
	} else 
  {
		printf("The string is not a Palindrome\n");
	}
	return 0;
}
