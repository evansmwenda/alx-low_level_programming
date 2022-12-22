#include "main.h"

/**
* _strncpy - a function that copies a string.
*
*@dest: pointer to destination
*@src: pointer to source
*@n: integer with amount of bytes to copy
*
* Return: dest with src
*/

char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[i] = src[i];

        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }

        return (dest);
}
