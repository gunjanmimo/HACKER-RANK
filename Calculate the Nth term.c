#include<stdio.h>
int main(){
    int n, a,b,c,i;
    int sum=0;
    //int ;
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    
    for(i=1;i<=n;i++){
        sum=a+b+c;
        printf("%d",sum);
        a=b;
        b=c;
        c=sum;

    }
}
    
