#include <stdio.h>


typedef struct student Student;
struct student {
	char name[81];
	char registry[8];
	float p1, p2, p3;
	char class;
};



float mean(Student* a_student){
	return (a_student->p1 + a_student->p2 + a_student->p3) / 3;
 }

int is_aproved(Student* a_student){
	return mean(a_student) > 6;
}


void print_approved_students(int n, Student* a_class){
	for (int i = 0; i < n; i++) {
		if (is_aproved(&a_class[i])){
			printf("\tMatrícula: %s | ", a_class[i].registry);
			printf("Aluna(o): %s | ",    a_class[i].name);
			printf("Turma: %c | ",       a_class[i].class);
			printf("Média: %.2f\n",      mean(&a_class[i]));
		}
	}

}

int main(void){
	Student class[4] = {
		{"Joana", "12345678", 10,2,7, 'c'}, 
		{"Berna", "00000000", 0,0,0, 'b'}, 
		{"Joana", "12545678", 10,10,10, 'b'}, 
		{"Paula", "12342378", 1,2,1, 'c'}
	};

	print_approved_students(4, class);
	return 0;
}
