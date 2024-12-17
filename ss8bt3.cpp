#include<stdio.h>
int main(){
	int in;
	printf("moi ban nhap mot so nguyen: ");
	scanf("%d",&in);
	int a[in][in];
	int ngang=in,cot=in;
	for(int i=0;i<ngang;i++){
		for(int j=0;j<cot;j++){
			printf("moi ban nhap hang %d cot %d: ",i,j);
			scanf("%d",&
			a[i][j]);
		}
	}
		for(int i=0;i<ngang;i++){
		for(int j=0;j<cot;j++){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	

}
