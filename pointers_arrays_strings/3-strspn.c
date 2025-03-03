#include "main.h"
#include <stdio.h>

/**
* _strspn -  changes all
* @s:  all lowercase letters
* @accept: the character
* Return: Pointer to the memory area s
*/

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int compt = 0;
while (s[i])
{
j = 0;

while (accept[j])
{
if (s[i] == accept[j])
{
compt++;
break;
}
j++;
}
if (accept[j] == '\0')
break;
i++;
}
return (compt);
}
