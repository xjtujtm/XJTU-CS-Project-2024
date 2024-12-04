    #include<stdio.h>

    int n;
    int res,arr[6010],cnt,pos,k;
    int flag=1;
    int ans[1145];

    int main(void){
        scanf("%d",&n);
        res=n;
        if(n==3){
            printf("1 2 3");
            return 0;
        }
        for(int i=1;i<=n;i++){
            arr[i]=1;
        }
        k=2;
        pos=1;
        while(flag){
            if(arr[pos]==1){
                cnt++;
            }
            if(cnt==k){
                arr[pos]=0;
                res--;
                cnt=0;
            }
            pos++; 
            if(pos==n+1){
                pos=1;
                cnt=0;
                if(res<=3){
                    flag=0;
                }
                if(k==2){
                    k=3;
                }
                else if(k==3){
                    k=2;
                }
            }
        }
        pos=1;
        for(int i=1;i<=n;i++){
            if(arr[i]==1){
                ans[pos]=i;
                pos++;
            } 
        }
        if(pos==2){
            printf("%d",ans[pos-1]);
        }
        else{
            for(int i=1;i<=pos-2;i++){
                printf("%d ",ans[i]);
            }
            printf("%d",ans[pos-1]);
        }
        return 0;
    }