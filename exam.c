#include<stdio.h>
int main(){
	int score;
	char grades;
	printf("enter your score");
	scanf("%d",&score);
		
    grades=score>90?'A':score>80?'B':score>70?'C':score>60?'D':score>50?'E':'F';
    printf("your grade is %c ",grades);
    int choice;
	switch (grades){
		case 'A':
			printf("Excellent work ");
			break;
			case 'B':
				printf("well done ");
				break;
				case 'C':
					printf("Good job ");
					break;
					case 'D':
						printf("you passed but you could do better ");
						break;
					case 'F':
						printf("sorry you failed ");
						break;
			

	
}
	if (grades=='A'||grades=='B'||grades=='C'||grades=='D'){
		printf("Congratulations, you are eligible for the next level");
	}else{
		printf("please try again next time");
	}
}
