
#include<stdio.h>
int main(){
    char x='K';
    int a;
    scanf("%d",&a);
    int ans=(a-a/100*100);
    printf("%c%02d",x,ans);

}
