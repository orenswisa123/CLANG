#include <stdio.h>
#include <stdlib.h> 

int main() 
{
int value;
char s1[32]="avital";
char s2[120]="tal";
value=strcmp(s2,s1);
printf("%d\n",value);
return 1;
}
