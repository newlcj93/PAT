#include <stdio.h>
#include<string.h>
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
    char a[20],b[20],result[20];
    long int c,d,sum;
    while(scanf("%s%s",a,b)!=EOF){
        c=str2n(a);
        d=str2n(b);
        sum=c+d;
        sprintf(result,"%d",sum);
        int len=strlen(result);
        for(int i=0;i<len;i++){
            putchar(result[i]);
            if((len-i-1)%3==0 && i!=len-1 && result[i]!='-') putchar(',');
        }
        putchar('\n');

    }
    return 0;
}
