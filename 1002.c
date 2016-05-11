#include <stdio.h>
double s[12];
int main(){
    double c;
    int num,k,t=0,max=0;
    memset(s,0,sizeof(s));
    for (int i=0;i<2;i++){
        scanf("%d",&num);
        for(int j=0;j<num;j++){
            scanf("%d%lf",&k,&c);
            s[k]+=c;
            if (k>max) max=k;
        }
    }
    for(int i=0;i<max+1;i++){
        if(s[i]) t++;
    }
    printf("%d",t);
    for(int i=max;i>=0;i--){
        if (s[i]){
            printf(" %d %.1lf",i,s[i]);
        }
    }
    printf("\n");
    
    return 0;
}
