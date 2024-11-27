#include<stdio.h>
#include<string.h>

char str[114];
int siz=1,flag=1;
int max=1;
int pos,tmp_cnt;

struct node{
	char cc;
	int cnt,st_pos;
}tot[114];

int main(void){
	gets(str);
	for(int i=0;i<strlen(str);i++){
		flag=1;
		for(int j=1;j<=siz-1;j++){
			if(str[i]==tot[j].cc){
				flag=0;
				break;
			}
		}
		if(flag==1){
			tot[siz].cc=str[i];
			tot[siz].st_pos=i;
			for(int j=1;j<=siz-1;j++){
				if(str[i]==tot[j].cc){
					pos=tot[j].st_pos,tmp_cnt=0;
					while(str[pos]==tot[j].cc){
						pos++;
						tmp_cnt++;
					}
					if(tmp_cnt>tot[j].cnt){
						tot[j].cnt=tmp_cnt;
					}
				}
			}
			siz++;
		}
		else{
			for(int j=1;j<=siz-1;j++){
				if(str[i]==tot[j].cc){
					pos=tot[j].st_pos,tmp_cnt=0;
					while(str[pos]==tot[j].cc){
						pos++;
						tmp_cnt++;
					}
					if(tmp_cnt>tot[j].cnt){
						tot[j].cnt=tmp_cnt;
					}
				}
			}
		}
	}
	for(int i=1;i<=siz-1;i++){
		if(tot[i].cnt>tot[max].cnt){
			max=i;
		}
	}
	/*
	for(int i=1;i<=siz-1;i++){
		printf("%c %d %d\n",tot[i].cc,tot[i].cnt,tot[i].st_pos);
	}
	*/
	printf("%c %d %d",tot[max].cc,tot[max].cnt,tot[max].st_pos);
	return 0;
}

