#include<cstdio>
#include <cstring>
char str[100][270];
int len[100];
int main(){
#ifdef LOCAL
    freopen("/Users/jy/input.txt","r",stdin);
#endif
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        gets(str[i]);
        len[i]=strlen(str[i]);
    }
    bool flag=true;
    int min=len[0]-1;
    for(int i=1;i<n && flag;i++){
        for(int j=len[0]-1,k=len[i]-1;j>0 && k>0;j--,k--){
            if(str[0][j]!=str[i][k]){
                flag=false;
                break;
            }
            else{
                min=j;
            }
        }
    }
    if(min!=len[0]-1){
        for(int i=min;i<len[0];i++){
            printf("%c",str[0][i]);
        }
        printf("\n");
    }
    else printf("nai\n");
    return 0;
}