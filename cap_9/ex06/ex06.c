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


float a_class_mean(int n, Student* a_subject, char a_class){
	float result = 0;
	int qtt_students = 0;
	for (int i =0; i < n; i++){
		if (a_subject[i].class == a_class){
			result += mean(&a_subject[i]);
			qtt_students++;
		}
	}

	result = result / qtt_students;
		
	return result;	
}

int main(void){
	Student class[4] = {
		{"Joana", "12345678", 10,2,7, 'c'}, 
		{"Berna", "00000000", 0,0,0, 'b'}, 
		{"Joana", "12545678", 10,10,10, 'b'}, 
		{"Paula", "12342378", 1,2,1, 'c'}
	};

	printf("Média da turma c: %.2f\n", a_class_mean(4, class, 'c'));
	return 0;
}
