#include <stdio.h>
#include <string.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    if(c[0]>='a'&& c[0]<='z'){
        c[0]-=32;
    }
    puts(c);
}