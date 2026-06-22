#include <stdio.h>

int timeVerifier(int time){
	int hour = time / 100, minute = time % 100;

	if(hour > 23 || minute > 59){
		return 0;
	}
	return 1;
}
int main(){
	int time;
	printf("\nSet time: "); scanf("%d", &time);

	
	if(timeVerifier(time)){
		printf("\nHorario valido :)");
	}else{
		printf("\nHorario invalido :(");
	}

return 0;
}