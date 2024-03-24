#include<stdio.h>
int main(){
    int n, k, count = 0;
    
    scanf("%d %d",&n,&k);
    int temp[10000];
    k--;
    for(int i = 0; i < n; i++){
        scanf("%d",&temp[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (temp[i] >= temp[k] && temp[i] > 0)
        {
            count++;
        }
    }

    printf("%d",count);
    return 0;
}