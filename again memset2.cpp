
#include <stdio.h>
#include<string.h>
int main()
{
char str[30] = "what the hell";
memset(str,'*',13);
puts(str);
return 0;
}
