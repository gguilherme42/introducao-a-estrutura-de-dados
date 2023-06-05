## Considerando as declarações a seguir para representar o cadastro de alunos de uma disciplina, implemente uma função que exiba na tela o número de matrícula, o nome, a turma e a média de todos os alunos que foram aprovados na disciplina.
`
typedef struct aluno Aluno;
struct aluno {
	char nome[81];
	char matricula[8];
	char turma;
	float p1, p2, p3;
};
`
## Assume que o critério para aprovação é dado pela média de três provas (p1, p2 e p3). A função recebe como parâmetro o número de alunos e um vetor de ponteiros para os dados dos alunos. Essa função deve obedecer ao protótipo: _void imprimeaprovados(int n, Aluno** turmas);_.
