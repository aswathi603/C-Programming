#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s,sen;
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%[^\n]s",sen);
    printf("%c",ch);
    printf("%s",s);
    printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
