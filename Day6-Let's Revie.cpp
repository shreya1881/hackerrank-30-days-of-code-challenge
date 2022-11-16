#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char s[10000];
    scanf("%s",s);
    for(int i=0; i<strlen(s); i++)
    {
        if(i%2==0)
        printf("%c",s[i]);
    }   
    printf(" ");
    for(int i=0; i<strlen(s); i++)
    {
        if(i%2!=0)
        printf("%c",s[i]);
    }
    printf("\n");
    }
    return 0;
}
