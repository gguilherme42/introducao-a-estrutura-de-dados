## Considere as estrututas de Ponto e Circulo dadas a seguir:
`
typedef struct ponto Ponto;
struct ponto {
	float x, y;
};

typedef struct circulo Circulo;
struct circulo {
	Ponto c;
	float r;
};
`
## Pede-se:
	1. Implemente uma função que determina se dois círculos se interceptam. A função deve retornar 1, se houver interseção, ou 0, caso contrário, seguindo o protótipo: _int intersecao(Circulo* a, Circulo* b);_.
	2. Considere um vetor de pontos que rpresenta uma linha poligonal. Impelemente uma função que calcule o comprimento poligonal: _float comprimento(int n, Ponto* v);_.
	3. Escreva uma função _main_ para testas as funções anteriores.


