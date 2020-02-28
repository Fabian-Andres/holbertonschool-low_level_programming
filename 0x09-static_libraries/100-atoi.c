#include <stdio.h>

/**
 * -atoi - Function
 *
 * @s: Variable
 */
int _atoi(char *s)
{

        int init;
        int len = 0;

        while (s[len] != '\0')
        {
                len++;
        }
        printf("The leng is %i ", len);
        for (init = 0; init < len; init++)
        {
                printf("%i", (s[init] + '0'));
                if (s[init] <= '0' && s[init] > '9')
                {
                        /*dest[init] = src[init];
                        putchar(s[init] + '0');
                        printf("%i", s[init]);*/
                }
        }


        return (0);
}
