#include <stdio.h>
#include <string.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    for(int i =0;i<strlen(c);++i){
        if(c[i]>='a' && c[i]<='z'){
            c[i]-=32;
        }
    }
    puts(c);

}