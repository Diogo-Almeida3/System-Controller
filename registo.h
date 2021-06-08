#ifndef REGISTO_H
#define REGISTO_H

typedef struct {
	int numMaxAvioes;		// N�mero m�ximo de avi�es que podem ser atendidos pelo controlador
	int numMaxAeroportos;	// N�mero m�ximo de aeroportos que podem ser criados no controlador
} REGISTO_DADOS;

int verificaChave(REGISTO_DADOS* pdados);

#endif /*REGISTO_H*/
