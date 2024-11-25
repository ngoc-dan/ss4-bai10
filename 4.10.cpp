#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap cac so a,b,c ");
	scanf("%d""%d""%d" , &a,&b,&c);
	if(a>b&&b>c){
		printf("thu tu tu nho den lon la : %d %d %d" ,c ,b ,a);
	}
	else{
		if(b>c && c>a){
			printf("thu tu tu nho den lon la : %d %d %d" ,a , c , b);
		}
		else{
			if(c>a&&a>b){
			printf("thu tu tu nho den lon la : %d %d %d" , b ,a ,c);
			}
			else{
				if(c>b&&b>a){
					printf("thu tu tu nho den lon la : %d %d %d" , a, b, c);
				}
				else{
					if(b>a&&a>c){
						printf("thu tu tu nho den lon la : %d %d %d" , c, a, b);
					}
					else{
						if(a>c&&c>b){
				    	printf("thu tu tu nho den lon la : %d %d %d" , b ,c ,a);
					}
					else{
						printf("khong hop le");
					}				    
					}
				}
			}
		}
	}
	
	return 0;
}
	
