#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap cac so a,b,c ");
	scanf("%d""%d""%d" , &a,&b,&c);
	if(a>b>c){
		printf("thu tu tu nho den lon la : " ,c ,b ,a);
	}
	else{
		if(b>c>a){
			printf("thu tu tu nho den lon la : %d\n" ,a ,c ,b);
		}
		else{
			if(c>a>b){
			printf("thu tu tu nho den lon la : %d\n" , b ,a ,c);
			}
			else{
				if(c>b>a){
					printf("thu tu tu nho den lon la : %d\n" , a, b, c);
				}
				else{
					if(b>a>c){
						printf("thu tu tu nho den lon la : %d\n" , c, a, b);
					}
					else{
						if(a>c>b){
				    	printf("thu tu tu nho den lon la : %d\n" , b ,c ,a);
					}				    
					}
				}
			}
		}
	}
	
	return 0;
}
	
