#include <stdio.h>
#include <string.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    short d= 0;
    for(int i =0;i<strlen(c)-1;++i){
        if(c[i] == ' '&& c[i+1]!= ' '){
            ++d;
        }
    }
    if(c[0]!= ' '){
        d+=1;
    }printf("%hd",d);


    
}