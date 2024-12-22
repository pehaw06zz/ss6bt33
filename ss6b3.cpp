#include<stdio.h>
#include<string.h>
int main(){
	const char correctmatkhau[]="7777777";
    char enteredmatkhau[50];
    printf("yeu cau nhap mat khau: ");
    scanf("%49s",enteredmatkhau);
    if(strcmp(correctmatkhau,enteredmatkhau)==0){
    	printf("mat khau chinh xac \n");
	}else{
		printf("mat khau khong chinh xac \n");
	}
	return 0;
 }
