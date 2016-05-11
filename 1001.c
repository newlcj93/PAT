#include <stdio.h>
int str2n(char *s){
    int i=0,ans=0;
    int sign=1;
    if(s[0]=='-') {
        sign = -1;
        i++;
    }
    while(s[i]){
        if (s[i]!=','){
            ans=ans*10+s[i]-'0';
        }
        i++;
    }
    return sign*ans;
}
int main(){
    char a[20],b[20],s[20];
    int c,d,sum,tot=0;
    scanf("%s%s",a,b);
    c=str2n(a);
    d=str2n(b);
    sum=c+d;
    if (sum<0){
        printf("-");
        sum=-sum;
    }
    else if(!sum) printf("0");
    while (sum) {
        s[tot++]=sum%10;
        sum/=10;
    }
    for(int i=tot-1;i>=0;i--){
        printf("%d",s[i]);
        if (i%3==0 && i) printf(",");
    }
    printf("\n");
    return 0;
}
