#include<Stdio.h>
int main(){
	int i,j;
	for(i=5;i>0;i--){
		for(j=i-1;j<4;j++){
			printf("%d\t",i);
		}
		printf("%d\n",j);
	}
}