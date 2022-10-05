#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int grade;
	
	printf("輸入成績:");
	scanf("%d", &grade);
	while (grade > 100 | grade < 0){
		printf("請重新輸入");
        exit(0);
	}
	
	switch (grade/10) {
		case 10:
		case 9:
		    puts("A");
		    break;
		
		case 8:
			puts("B");
		    break;
		
		case 7:
			puts("C");
		    break;
		
		case 6:
			puts("D");
		    break;
		
		default:
			puts("E");
			break;
	}
	
	
	return 0;
}
