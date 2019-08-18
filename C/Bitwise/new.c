#include <stdio.h>
#include<limits.h>

int main()
{
    int i;
    char c='a';
    for (i = CHAR_BIT; i-- != 0; )
    {
        printf( "%u", ( unsigned char )c >> i & 1 );
    }

    return 0;
}