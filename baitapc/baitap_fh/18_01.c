#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    short d1 = 0,d2 = 0, d3 = 0;
    for(int i =0;i<=strlen(c);++i){
        if(isdigit(c[i])){
            ++d1;
        }else if(isalpha(c[i])){
            ++d2;
        }
       
    }
    printf("%hd %hd %hd",d1,d2,strlen(c)-(d1+d2)-1);
    
}