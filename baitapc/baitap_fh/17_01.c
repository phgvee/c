#include <stdio.h>
#include <string.h>
int main(){
    char c[1001];
    fgets(c,sizeof(c),stdin);
    for(int i =0;i<=strlen(c);++i){
        if(c[i]>='A'&& c[i]<='Z'){
            c[i] = c[i] +32;
        }
    }
    puts(c);
}