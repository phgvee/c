#include <stdio.h>
struct Student
{
    char id[20];
    char name[30];
    double GPA;
    char class[20];
};
typedef struct Student st;
st Nhap(){
    st a;
    gets(a.id);
    gets(a.name);
    gets(a.class);
    scanf("%lf",&a.GPA);
    return a;
    
}
void In(st a){
    printf("%s %s %s %.2f\n",a.id,a.name,a.class,a.GPA);
}

int main(){
    st a = Nhap();
    In(a);
}