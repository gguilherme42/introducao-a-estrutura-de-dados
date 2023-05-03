#include <stdio.h>


float highest_number(float n1, float n2){
	if (n1 > n2) return n1;
	return n2;
}

int was_approved(float m){
	if (m >= 5) return 1;
	return 0;
}

int was_approved_directly(float n1, float n2, float m) {
	if (was_approved(m) && !(n1 < 3 && n2 < 3)) return 1;
	return 0;
}

float mean(float n1, float n2) {
	return (n1 + n2) / 2;
}


void print_student_status(float m){
	if (was_approved(m)) {
		printf("Aprovado\n");
	} else {
		printf("Reprovado\n");
	}
}


void student_notes(float grade1, float grade2, float m){
	if (was_approved_directly(grade1, grade2, m)) {
		printf("Aprovado\n");
	} else {
		float third_grade;
		printf("Avaliação P3: ");
		scanf("%f", &third_grade);
		
		float student_mean = mean(highest_number(grade1, grade2), third_grade);		
		print_student_status(student_mean);
	}

}


int main(void){
	float first_grade = 0;
	float second_grade = 0;

	printf("Avaliação P1: ");
	scanf("%f", &first_grade);
	printf("Avaliação P2: ");
	scanf("%f", &second_grade);

	student_notes(first_grade, second_grade, mean(first_grade, second_grade));


	return 0;
}
