#include <stdio.h>
#include <string.h>
int check(char a[],char b[]){
    
    for(int i =0;i<strlen(a);++i){
        if(a[i]!=b[i]){
            if(a[i]>b[i]){
                return 1;
            }else return -1;
        }
    }return 0;
}
int main(){
    char a[50],b[50];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    strlwr(a);
    strlwr(b);
    printf("%d",check(a,b));
}
    