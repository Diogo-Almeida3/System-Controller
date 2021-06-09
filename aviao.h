#ifndef AVIAO_H
#define AVIAO_H

#include <tchar.h>

typedef struct {
	int x;
	int y;
} Coordenadas;

typedef struct {
	TCHAR nome[50];			// Nome do aeroporto
	Coordenadas pos;		// Posi��o do aeroporto
	int numAvioes;			// Quantidade atual de avi�es
	int numPass;			// Quantidade atual de Passageiros
} Aeroporto;

typedef struct {
	DWORD id;				// Identificador �nico do avi�o --> PID
	int cap_max;			// Capacidade m�xima de passageiros que o avi�o tem
	int velocidade;			// Velocidade do avi�o
	Coordenadas pos;		// Posi��o atual do avi�o
	Aeroporto partida;		// Aeroporto de onde o avi�o iniciou a sua viagem
	Aeroporto destino;		// Aeroporto de onde o avi�o se pertende deslocar
	TCHAR msg[50];			// Mensagem de controlo para comunica��o com o controlador
	int numPassagBord;		// N�mero de passageiros a bordo
	int flagChegada;		// Flag de controlo para avisar o controlador que chegou ao seu destino
} Aviao;


#endif /*AVIAO_H*/
