#include <stdio.h>

int main(){
	int aukera;
	printf("1. Athletic\n");
	printf("2. Manchester United\n");
	printf("3. Flamengo\n");
	scanf("%d", &aukera);

	switch(aukera){
		case 1:{
			printf("Athletic Club taldea aukeratu duzu\n");
			printf("Athletickek San Mamesen jokatzen du\n");
		}break;

		case 2:{
			printf("Manchester United taldea aukeratu duzu\n");
                        printf("Manchester Unitedek Old Trafforden jokatzen du\n");
                }break;

		case 3:{
			printf("Flamengo taldea aukeratu duzu\n");
                        printf("Flamengok Maracanan jokatzen du\n");
                }break;
	}

	return 0;
}
