#include <stdio.h>
double s[1010];
int main(){
    double c;
    int n,k,cnt=0,max=0;
    memset(s,0,sizeof(s));
    for (int i=0;i<2;i++){
        scanf("%d",&n);
        while(n--){
            scanf("%d%lf",&k,&c);
            s[k]+=c;
            if (k>max) max=k;
        }
    }
    for(int i=0;i<max+1;i++){
        if(s[i]) cnt++;
    }
    printf("%d",cnt);
    for(int i=max;i>=0;i--){
        if (s[i]){
            printf(" %d %.1lf",i,s[i]);
        }
    }
    printf("\n");
    
    return 0;
}
