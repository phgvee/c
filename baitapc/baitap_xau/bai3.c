#include <stdio.h>
#include <string.h>
#include <ctype.h>

// int main(){
//    char c[100];
//    fgets(c,100,stdin);
//    int cnt1 =0, cnt2 = 0;
//    for(int i =0;i < strlen(c);++i){
//        if(isalpha(c[i])){
//            cnt1++;
//        }
//        else if(isdigit(c[i])){
//            cnt2++;
//        }
//    }
//    printf("%d %d %d",cnt1,cnt2,strlen(c)-cnt1-cnt2);
// }
//-----------------------------------------------------------------------------------------------
// dem so lan xuat hien cua cac ki tu in hoa ( thuong )
// int main(){
//     char c[100];
//     scanf("%s",c);
//     int cnt[26]= {0};
//     for(int i = 0; i < strlen(c);++i){
//        cnt[c[i]-'a']++;
//     }
//     for(int i =0 ;i <26;++i){
//         if(cnt[i]!=0){
//             printf("%c %d\n",(i+'a'),cnt[i]);
//         }
//     }
// }
//--------------------------------------------------------------------------------------------
int main(){
   char c[200];
    gets(c);
    int cnt[256] = { 0};
    for(int i = 0;i < strlen(c);++i){
        cnt[c[i]]++;
    }
    for(int i =0 ;i < 256; ++i){
        if(cnt[i]!=0){
            printf("%c %d\n",i,cnt[i]);
        }
    }
}
