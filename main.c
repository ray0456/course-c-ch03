#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int grade;
	
	printf("��J���Z:");
	scanf("%d", &grade);
	while (grade > 100 | grade < 0){
		printf("�Э��s��J");
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
