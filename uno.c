// Uno-cli
// last modified in January 2023


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER_CARDS 108

typedef enum {
  ZERO , UM , DOIS , TRES , QUATRO , CINCO , SEIS , SETE , OITO , NOVE , BLOQ , INVERTE , COMPRA_2 , CURINGA_STD , CURINGA_COMPRA
} tipos_carta;

typedef enum {
  AZUL , AMARELO , VERDE , VERMELHO , PRETO
} cor_carta;

typedef struct {
  int numero;		//numeracão de 0 a 107
  tipos_carta tipo; 	//numeros das cartas ou especiais
  cor_carta cor;  	//cores
  char id[17];		//identificacao
  int pts;		//pontos
} card_type;

card_type baralho_compra[NUMBER_CARDS] = {
{ 0 , ZERO , AZUL , "0,Azul" , 0 }, { 1 , UM , AZUL , "1,Azul" , 1 }, { 2 , UM , AZUL , "1,Azul" , 1 }, { 3 , DOIS , AZUL , "2,Azul" , 2 }, { 4 , DOIS , AZUL , "2,Azul" , 2 }, { 5 , TRES , AZUL , "3,Azul" , 3 }, { 6 , TRES , AZUL , "3,Azul" , 3 }, { 7 , QUATRO , AZUL , "4,Azul" , 4 }, { 8 , QUATRO , AZUL , "4,Azul" , 4 }, { 9 , CINCO , AZUL , "5,Azul" , 5 }, { 10 , CINCO , AZUL , "5,Azul" , 5 }, { 11 , SEIS , AZUL , "6,Azul" , 6 }, { 12 , SEIS , AZUL , "6,Azul" , 6 }, { 13 , SETE , AZUL , "7,Azul" , 7 }, { 14 , SETE , AZUL , "7,Azul" , 7 }, { 15 , OITO , AZUL , "8,Azul" , 8 }, { 16 , OITO , AZUL , "8,Azul" , 8 }, { 17 , NOVE , AZUL , "9,Azul" , 9 }, { 18 , NOVE , AZUL , "9,Azul" , 9 }, { 19 , BLOQ , AZUL , "Bloqueia,Azul" , 20 }, { 20 , BLOQ , AZUL , "Bloqueia,Azul" , 20 }, { 21 , INVERTE , AZUL , "Inverte,Azul" , 20 }, { 22 , INVERTE , AZUL , "Inverte,Azul" , 20 }, { 23 , COMPRA_2 , AZUL , "+2,Azul" , 20 }, { 24 , COMPRA_2 , AZUL , "+2,Azul" , 20 }, { 25 , ZERO , AMARELO , "0,Amarelo" , 0 }, { 26 , UM , AMARELO , "1,Amarelo" , 1 }, { 27 , UM , AMARELO , "1,Amarelo" , 1 }, { 28 , DOIS , AMARELO , "2,Amarelo" , 2 }, { 29 , DOIS , AMARELO , "2,Amarelo" , 2 }, { 30 , TRES , AMARELO , "3,Amarelo" , 3 }, { 31 , TRES , AMARELO , "3,Amarelo" , 3 }, { 32 , QUATRO , AMARELO , "4,Amarelo" , 4 }, { 33 , QUATRO , AMARELO , "4,Amarelo" , 4 }, { 34 , CINCO , AMARELO , "5,Amarelo" , 5 }, { 35 , CINCO , AMARELO , "5,Amarelo" , 5 }, { 36 , SEIS , AMARELO , "6,Amarelo" , 6 }, { 37 , SEIS , AMARELO , "6,Amarelo" , 6 }, { 38 , SETE , AMARELO , "7,Amarelo" , 7 }, { 39 , SETE , AMARELO , "7,Amarelo" , 7 }, { 40 , OITO , AMARELO , "8,Amarelo" , 8 }, { 41 , OITO , AMARELO , "8,Amarelo" , 8 }, { 42 , NOVE , AMARELO , "9,Amarelo" , 9 }, { 43 , NOVE , AMARELO , "9,Amarelo" , 9 }, { 44 , BLOQ , AMARELO , "Bloqueia,Amarelo" , 20 }, { 45 , BLOQ , AMARELO , "Bloqueia,Amarelo" , 20 }, { 46 , INVERTE , AMARELO , "Inverte,Amarelo" , 20 }, { 47 , INVERTE , AMARELO , "Inverte,Amarelo" , 20 }, { 48 , COMPRA_2 , AMARELO , "+2,Amarelo" , 20 }, { 49 , COMPRA_2 , AMARELO , "+2,Amarelo" , 20 }, { 50 , ZERO , VERDE , "0,Verde" , 0 }, { 51 , UM , VERDE , "1,Verde" , 1 }, { 52 , UM , VERDE , "1,Verde" , 1 }, { 53 , DOIS , VERDE , "2,Verde" , 2 }, { 54 , DOIS , VERDE , "2,Verde" , 2 }, { 55 , TRES , VERDE , "3,Verde" , 3 }, { 56 , TRES , VERDE , "3,Verde" , 3 }, { 57 , QUATRO , VERDE , "4,Verde" , 4 }, { 58 , QUATRO , VERDE , "4,Verde" , 4 }, { 59 , CINCO , VERDE , "5,Verde" , 5 }, { 60 , CINCO , VERDE , "5,Verde" , 5 }, { 61 , SEIS , VERDE , "6,Verde" , 6 }, { 62 , SEIS , VERDE , "6,Verde" , 6 }, { 63 , SETE , VERDE , "7,Verde" , 7 }, { 64 , SETE , VERDE , "7,Verde" , 7 }, { 65 , OITO , VERDE , "8,Verde" , 8 }, { 66 , OITO , VERDE , "8,Verde" , 8 }, { 67 , NOVE , VERDE , "9,Verde" , 9 }, { 68 , NOVE , VERDE , "9,Verde" , 9 }, { 69 , BLOQ , VERDE , "Bloqueia,Verde" , 20 }, { 70 , BLOQ , VERDE , "Bloqueia,Verde" , 20 }, { 71 , INVERTE , VERDE , "Inverte,Verde" , 20 }, { 72 , INVERTE , VERDE , "Inverte,Verde" , 20 }, { 73 , COMPRA_2 , VERDE , "+2,Verde" , 20 }, { 74 , COMPRA_2 , VERDE , "+2,Verde" , 20 }, { 75 , ZERO , VERMELHO , "0,Vermelho" , 0 }, { 76 , UM , VERMELHO , "1,Vermelho" , 1 }, { 77 , UM , VERMELHO , "1,Vermelho" , 1 }, { 78 , DOIS , VERMELHO , "2,Vermelho" , 2 }, { 79 , DOIS , VERMELHO , "2,Vermelho" , 2 }, { 80 , TRES , VERMELHO , "3,Vermelho" , 3 }, { 81 , TRES , VERMELHO , "3,Vermelho" , 3 }, { 82 , QUATRO , VERMELHO , "4,Vermelho" , 4 }, { 83 , QUATRO , VERMELHO , "4,Vermelho" , 4 }, { 84 , CINCO , VERMELHO , "5,Vermelho" , 5 }, { 85 , CINCO , VERMELHO , "5,Vermelho" , 5 }, { 86 , SEIS , VERMELHO , "6,Vermelho" , 6 }, { 87 , SEIS , VERMELHO , "6,Vermelho" , 6 }, { 88 , SETE , VERMELHO , "7,Vermelho" , 7 }, { 89 , SETE , VERMELHO , "7,Vermelho" , 7 }, { 90 , OITO , VERMELHO , "8,Vermelho" , 8 }, { 91 , OITO , VERMELHO , "8,Vermelho" , 8 }, { 92 , NOVE , VERMELHO , "9,Vermelho" , 9 }, { 93 , NOVE , VERMELHO , "9,Vermelho" , 9 }, { 94 , BLOQ , VERMELHO , "Bloqueia,Vermelho" , 20 }, { 95 , BLOQ , VERMELHO , "Bloqueia,Vermelho" , 20 }, { 96 , INVERTE , VERMELHO , "Inverte,Vermelho" , 20 }, { 97 , INVERTE , VERMELHO , "Inverte,Vermelho" , 20 }, { 98 , COMPRA_2 , VERMELHO , "+2,Vermelho" , 20 }, { 99 , COMPRA_2 , VERMELHO , "+2,Vermelho" , 20 }, { 100 , CURINGA_STD , PRETO , "Curinga,Normal" , 50 }, { 101 , CURINGA_STD , PRETO , "Curinga,Normal" , 50 }, { 102 , CURINGA_STD , PRETO , "Curinga,Normal" , 50 }, { 103 , CURINGA_STD , PRETO , "Curinga,Normal" , 50 }, { 104 , CURINGA_COMPRA , PRETO , "Curinga,+4" , 50 }, { 105 , CURINGA_COMPRA , PRETO , "Curinga,+4" , 50 }, { 106 , CURINGA_COMPRA , PRETO , "Curinga,+4" , 50 }, { 107 , CURINGA_COMPRA , PRETO , "Curinga,+4" , 50 }
};

int baralho_compra_tam = NUMBER_CARDS;

card_type oponente[NUMBER_CARDS];
int oponente_tam = 0;

card_type jogador[NUMBER_CARDS];
int jogador_tam = 0;

card_type descarte[NUMBER_CARDS];
int descarte_tam = 0;

int corativa;

char playerName[60];

unsigned int turno = 0;

// PROTOTIPOS
void embaralhar ( card_type *b );
void imprime_cartas ( card_type *c , int tam );
card_type pega_carta ( card_type *b , int *tam );
void bota_carta ( card_type *lugar , int *tam , card_type carta );
void inicia_jogo ( );
void imprime_descarte ( card_type *c , int tam );
int contapontos ( card_type *c , int tam );
void print_turno_jogador ( );
void turn_jogador ( card_type *c , int *tam );
void turn_oponente( card_type *c , int *tam );
void reorganiza ( card_type *b , int *tam , int sai );
void descarta_carta ( card_type *c , int *tam , int qual );
void compra_carta( card_type *c , int *tam );
void finaliza_jogo ( card_type *jog , int tam_jog , card_type *opo , int tam_opo );

// FUNCOES

// dá inicio ao jogo
void inicia_jogo () {	
	embaralhar( baralho_compra );
	int i;
	card_type card;
	for ( i = 0 ; i < 7 ; i++ ) {
		card = pega_carta( baralho_compra , &baralho_compra_tam );
		bota_carta( jogador , &jogador_tam , card );
		card = pega_carta( baralho_compra , &baralho_compra_tam );
		bota_carta( oponente , &oponente_tam , card );
	}
	card = pega_carta( baralho_compra , &baralho_compra_tam );
	bota_carta( descarte , &descarte_tam , card );
	corativa = card.cor;
	system ( "clear" );
}

// embaralhar
void embaralhar ( card_type *b ) {
	int i, j;
	card_type aux;
	srandom ( time ( NULL ) );
	for ( i = 0 ; i < NUMBER_CARDS ; i++ ) {
		j = random() % NUMBER_CARDS;
		aux = b[i];
	    b[i] = b[j];
	    b[j] = aux;
	}
	for ( i = 0 ; i < NUMBER_CARDS ; i++ ) {
		j = random() % NUMBER_CARDS;
		aux = b[i];
	    b[i] = b[j];
	    b[j] = aux;
	}
}

// imprimir cartas
void imprime_cartas ( card_type *c , int tam ) {
	int i, pts;
	for ( i = 0 ; i < tam ; i++ ) {
		if( i > 0 )  printf(" | ");
    	printf( "%d) %s" , i+1 , c[i].id );
	}
	printf( " - [ %d pontos ]\n", contapontos( c , tam ) );
}

// imprime descarte
void imprime_descarte ( card_type *c , int tam ) {
   	printf( "%s" , c[tam-1].id );
}

// pega carta
card_type pega_carta ( card_type *b , int *tam ) {
	(*tam)--;
	return b[*tam];
}

// bota carta
void bota_carta ( card_type *lugar , int *tam , card_type carta ) {
	lugar[*tam] = carta;
	(*tam)++;
}

// pega carta do jogador
card_type pega_carta_jogada ( card_type *b , int *tam , int qual ) {
	(*tam)--;
	return b[qual-1];
}

// reorganiza baralho depois de descartar
void reorganiza ( card_type *b , int *tam , int sai ) {
	int i;
	for ( i = sai ; i < *tam ; i++ )  b[i] = b[i+1];
}

// conta os pontos de um baralho
int contapontos ( card_type *c , int tam ) {
	if ( tam == 0 ) return 0;
	int i;
	int pontos = 0;
	for ( i = 0 ; i < tam ; i++ ) {
		pontos += c[i].pts;
	}
	return pontos;
}

// descarta uma carta
void descarta_carta ( card_type *c , int *tam , int qual ) {
	card_type card;
	card = pega_carta_jogada( c , tam , qual );
	if( *tam == 1 ) printf( "\n UNO\n" );
	bota_carta( descarte , &descarte_tam , card );
	corativa = card.cor;
	reorganiza( c , tam , qual-1 );
}

// compra carta
void compra_carta ( card_type *c , int *tam ) {
	card_type card;
	if( baralho_compra_tam <= 0 ) {
		printf( "\n\nACABARAM AS CARTAS PARA COMPRAR\n" );
		finaliza_jogo( jogador , jogador_tam , oponente, oponente_tam );
	}
	card = pega_carta( baralho_compra , &baralho_compra_tam );
	bota_carta( c , tam , card );
}

// printa a mesa e as cartas da mao
void print_turno_jogador ( ) {
	turno++;
	printf( "\n============================== TURNO %3u ==============================\n\n", turno );
	if( baralho_compra_tam > 0 )  printf( "Baralho de compras: %d cartas\n", baralho_compra_tam );
	else printf( "\nBaralho de compras: VAZIO - [ Nao é possivel comprar mais cartas ]\n" );
	if( oponente_tam > 1 ) printf( "\nComputador: %d cartas\n", oponente_tam );
	else printf ( "\nComputador: 1 carta\n" );
	printf( "\nCor Ativa: %d\n", corativa+1 );
	printf( "\n--\nMESA: " );
	imprime_descarte( descarte , descarte_tam );
	printf("\n--\n");
	printf( "\n%s", playerName );
	imprime_cartas( jogador , jogador_tam );
	printf("\n");
}

// conta pontos e anuncia o vencedor
void finaliza_jogo ( card_type *jog , int tam_jog , card_type *opo , int tam_opo ) {
	int ptsJog = contapontos( jog , tam_jog );
	int ptsOpo = contapontos( opo , tam_opo );
	printf( "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" );
	printf( "\n\n\nFIM DE JOGO!\n\n" );
	printf( "-----\n\n" );
	if( tam_jog == 0 ) printf( "Voce: %d cartas [ %d pontos ]", tam_jog, ptsJog );
	else {
		printf( "Voce: %d cartas [ %d pontos ]:\n\n", tam_jog, ptsJog );
		int i = 0;
		for ( i = 0 ; i < tam_jog ; i++ ) {
			if( i > 0 )  printf(" | ");
    	printf( "%s" , jog[i].id );
		}
	}
	printf( "\n\n-----\n\n" );
	if( tam_opo == 0 ) printf( "Computador: %d cartas [ %d pontos ]", tam_opo, ptsOpo );
	else {
		printf( "Computador: %d cartas [ %d pontos ]:\n\n", tam_opo, ptsOpo );
		int i = 0;
		for ( i = 0 ; i < tam_opo ; i++ ) {
			if( i > 0 )  printf(" | ");
    	printf( "%s" , opo[i].id );
		}
	}
	printf( "\n\n-----\n" );
	if ( tam_jog == 0 && tam_opo > 0 ) printf( "\n\nParabéns, %s\nVOCE VENCEU!\n\n\n", playerName );
	else if ( tam_opo == 0 && tam_jog > 0 ) printf( "\n\nVOCE PERDEU, %s\n\n\n", playerName );
	else {
		if ( ptsJog < ptsOpo ) printf( "\n\nParabéns, %s\nVOCE VENCEU!\n\n\n", playerName );
		else if ( ptsOpo < ptsJog ) printf( "\n\nVOCE PERDEU, %s\n\n\n", playerName );
		else printf( "\n\nEMPATE!\n\n\n" );
	}
	exit(0);
}

// vez do jogador
void turn_jogador ( card_type *c , int *tam ) {
	if( *tam == 0 || oponente_tam == 0 ) return;
	int qual;
	print_turno_jogador();
	while ( 1 ) {
		if( baralho_compra_tam > 0 ) {
			if ( *tam > 2 ) printf( "Digite 1 a %d p/ descartar ( 0 p/ comprar )  ", *tam );
			else if ( *tam == 2 ) printf( "Digite 1 ou 2 p/ descartar ( 0 p/ comprar )  " );
			else printf( "Digite 1 p/ descartar ( 0 p/ comprar )  " );
		}
		else {
			if ( *tam > 2 ) printf( "Digite 1 a %d p/ descartar  ", *tam );
			else if ( *tam == 2 ) printf( "Digite 1 ou 2 p/ descartar  " );
			else printf( "Digite 1 p/ descartar  " );
		}
		scanf( " %d", &qual );
		if ( qual == 0 ) {
			if( baralho_compra_tam <= 0 ) printf( "\nVoce tentou comprar.\n" );
			else printf("\nVoce comprou.\n");
			compra_carta( c , tam );
			break;
		}
		else if ( qual < 0 || qual > *tam ) printf( "Jogada invalida! Tente novamente... \n" );
		else {
			if ( c[qual-1].cor == PRETO ) {
				if ( c[qual-1].tipo == CURINGA_COMPRA ) {
					int i;
					for ( i = 0 ; i < 4 ; i++ )  compra_carta( oponente , &oponente_tam );
					printf( "\n\nComputador comprou 4 e perdeu a vez.\n" );
					descarta_carta( c , tam , qual );
					while ( 1 ) {
						printf( "\nQue cor deseja selecionar?\n\n1) Azul  -  2) Amarelo  -  3) Verde  -  4) Vermelho :  " );
						scanf( " %d", &corativa );
						corativa--;
						printf("\n");
						if( corativa == 0 ) {
							printf( "COR ESCOLHIDA: %d ( AZUL )\n", corativa+1 );
							break;
						}
						else if( corativa == 1 ) {
							printf( "COR ESCOLHIDA: %d ( AMARELO )\n", corativa+1 );
							break;
						}
						else if( corativa == 2 ) {
							printf( "COR ESCOLHIDA: %d ( VERDE )\n", corativa+1 );
							break;
						}
						else if( corativa == 3 ) {
							printf( "COR ESCOLHIDA: %d ( VERMELHO )\n", corativa+1 );
							break;
						}
						else printf( "Jogada inválida! Tente novamente... \n" );
					}
					turn_jogador( c , tam );
					break;
				}
				else {
					printf( "\n" );
					descarta_carta( c , tam , qual );
					while ( 1 ) {
						printf( "\nQue cor deseja selecionar?\n\n1) Azul  -  2) Amarelo  -  3) Verde  -  4) Vermelho :  " );
						scanf( " %d", &corativa );
						corativa--;
						printf("\n");
						if( corativa == 0 ) {
							printf( "COR ESCOLHIDA: %d ( AZUL )\n", corativa+1 );
							break;
						}
						else if( corativa == 1 ) {
							printf( "COR ESCOLHIDA: %d ( AMARELO )\n", corativa+1 );
							break;
						}
						else if( corativa == 2 ) {
							printf( "COR ESCOLHIDA: %d ( VERDE )\n", corativa+1 );
							break;
						}
						else if( corativa == 3 ) {
							printf( "COR ESCOLHIDA: %d ( VERMELHO )\n", corativa+1 );
							break;
						}
						else printf( "Jogada inválida! Tente novamente... \n" );
					}
					break;
				}
			}
			else if ( c[qual-1].tipo == COMPRA_2 ) {
				if ( c[qual-1].cor == corativa || descarte[descarte_tam-1].tipo == COMPRA_2 ) {
					compra_carta( oponente , &oponente_tam );
					compra_carta( oponente , &oponente_tam );
					printf( "\nVoce jogou:  %s \n", c[qual-1].id );
					printf( "\nComputador comprou 2 e perdeu a vez. \n" );
					descarta_carta( c , tam , qual );
					turn_jogador( c , tam );
					break;
				}
				else {
					printf( "Jogada inválida! Tente novamente... \n" );
				}
			}
			else if ( c[qual-1].tipo == BLOQ ) {
				if ( descarte[descarte_tam-1].tipo == BLOQ || c[qual-1].cor == corativa ) {
					printf( "\nVoce jogou:  %s \n", c[qual-1].id );
					printf( "\nÉ sua vez denovo.\n" );
					descarta_carta( c , tam , qual );
					turn_jogador( c , tam );
					break;
				}
				else printf( "Jogada inválida! Tente novamente... \n" );
			}
			else if ( c[qual-1].tipo == INVERTE ) {
				if ( descarte[descarte_tam-1].tipo == INVERTE || c[qual-1].cor == corativa ) {
					printf( "\nVoce jogou:  %s \n", c[qual-1].id );
					printf( "\nÉ sua vez denovo.\n" );
					descarta_carta( c , tam , qual );
					turn_jogador( c , tam );
					break;
				}
				else printf( "Jogada inválida! Tente novamente... \n" );
			}
			else if ( c[qual-1].cor == corativa || c[qual-1].tipo == descarte[descarte_tam-1].tipo ) {	
				printf( "\nVoce jogou:  %s \n", c[qual-1].id );
				descarta_carta( c , tam , qual );
				break;
			}
			// caso digitem uma carta invalida
			else printf( "Jogada inválida! Tente novamente... \n" );	
		}
	}
}

// vez do computador
void turn_oponente ( card_type *c , int *tam ) {
	if( *tam == 0 || oponente_tam == 0 ) return;
	int i;
	turno++;
	printf( "\n============================== TURNO %3u ==============================\n\n", turno );
	int descartei = 0;
	for( i = 0 ; i < *tam ; i++ ) {				//jogadas possiveis e opcoes (bot joga sempre a primeira carta possivel)
		if( c[i].cor == PRETO ) {
			if ( c[i].tipo == CURINGA_COMPRA ) {
				printf( "Computador jogou CURINGA +4.\n" );
				descarta_carta( c , tam , i+1 );
				int j;
				for ( j = 0 ; j < 4 ; j++ )  compra_carta( jogador , &jogador_tam );
				corativa = random() % 4;
				if( corativa == 0 ) printf( "\nCOR ESCOLHIDA: %d ( AZUL )\n", corativa+1 );
				else if( corativa == 1 ) printf( "\nCOR ESCOLHIDA: %d ( AMARELO )\n", corativa+1 );
				else if( corativa == 2 ) printf( "\nCOR ESCOLHIDA: %d ( VERDE )\n", corativa+1 );
				else if( corativa == 3 ) printf( "\nCOR ESCOLHIDA: %d ( VERMELHO )\n", corativa+1 );
				descartei = 1;
				turn_oponente( c , tam );
				break;
			}
			else if ( c[i].tipo == CURINGA_STD ){
				printf( "Computador jogou CURINGA.\n" );
				descarta_carta( c , tam , i+1 );
				corativa = random() % 4;
				if( corativa == 0 ) printf( "\nCOR ESCOLHIDA: %d ( AZUL )\n", corativa+1 );
				else if( corativa == 1 ) printf( "\nCOR ESCOLHIDA: %d ( AMARELO )\n", corativa+1 );
				else if( corativa == 2 ) printf( "\nCOR ESCOLHIDA: %d ( VERDE )\n", corativa+1 );
				else if( corativa == 3 ) printf( "\nCOR ESCOLHIDA: %d ( VERMELHO )\n", corativa+1 );
				descartei = 1;
				break;
			}
			descartei = 1;
			break;
		}
		else if ( c[i].tipo == BLOQ ) {
			if( descarte[descarte_tam-1].tipo == BLOQ || c[i].cor == corativa ) {
				printf( "Computador jogou:  %s \n\n", c[i].id );
				printf( "É a vez do computador denovo.\n" );
				descarta_carta( c , tam , i+1 );
				turn_oponente( c , tam );
				descartei = 1;
				break;
			}
			else continue;
		}
		else if ( c[i].tipo == INVERTE ) {
			if ( descarte[descarte_tam-1].tipo == INVERTE || c[i].cor == corativa ) {
				printf( "Computador jogou:  %s \n\n", c[i].id );
				printf( "É a vez do computador denovo.\n" );
				descarta_carta( c , tam , i+1 );
				turn_oponente( c , tam );
				descartei = 1;
				break;
			}
			else continue;
		}
		else if( c[i].tipo == COMPRA_2 ) {
			if ( c[i].cor == corativa || descarte[descarte_tam-1].tipo == COMPRA_2 ) {
				printf( "Computador jogou:  %s \n\n", c[i].id );
				printf( "É a vez do computador denovo.\n" );
				descarta_carta( c , tam , i+1 );
				compra_carta( jogador , &jogador_tam );
				compra_carta( jogador , &jogador_tam );
				descartei = 1;
				turn_oponente( c , tam );
				break;
			}
			else continue;
		}
		else if( c[i].cor == corativa || c[i].tipo == descarte[descarte_tam-1].tipo ) {
			printf( "Computador jogou:  %s\n", c[i].id );
			descarta_carta( c , tam , i+1 );
			descartei = 1;
			break;
		}
	}
	if( descartei == 0 ) {							//se computador nao jogar carta ele compra
		if( baralho_compra_tam <= 0 ) printf( "Computador tentou comprar.\n" );
		else printf( "Computador comprou.\n" );
		compra_carta( c , tam );
		return;
	}
}

// FUNCAO MAIN
int main ( ) {
	srandom ( time ( NULL ) );
	turno = random() % 2;
	int i;

	// da inicio ao jogo
	inicia_jogo();

	for ( i = 0 ; i < 3 ; i++ ) printf("\n");
	printf( "=================================~~--------~~UNO~~--------~~=================================" );
	for ( i = 0 ; i < 10 ; i++ ) printf("\n");

	// usuario registra seu nome
	printf( "Para comecar o jogo, digite seu nome: ");
	fgets( playerName , 60 , stdin );
	printf( "\n\nEmbaralhando cartas... \n\n" );
	printf( "\nINICIO DE JOGO! Boa Sorte, %s\n", playerName );

	if ( turno % 2 == 0 ) {
		turno = 0;
		printf( "VOCE COMEÇA\n" );
		if( descarte[descarte_tam-1].tipo == COMPRA_2 ) {
			compra_carta( jogador , &jogador_tam );
			compra_carta( jogador , &jogador_tam );
			printf( "\n--\nMESA: " );
			imprime_descarte( descarte , descarte_tam );
			printf("\n--\n");
			printf( "\nVOCE COMPROU 2\n" );
		}
		else if ( descarte[descarte_tam-1].tipo == CURINGA_COMPRA || descarte[descarte_tam-1].tipo == CURINGA_STD ) {
				printf("\n");
			printf( "\n--\nMESA: " );
			imprime_descarte( descarte , descarte_tam );
			printf("\n--\n");
			printf( "\nDescarte: Curinga -> Carta descartada...\n" );
			compra_carta( descarte , &descarte_tam );
			printf( "\n--\nMESA: " );
			imprime_descarte( descarte , descarte_tam );
			printf("\n--\n");
		}
		else if ( descarte[descarte_tam-1].tipo == BLOQ || descarte[descarte_tam-1].tipo == INVERTE ) {
			printf( "\n--\nMESA: " );
			imprime_descarte( descarte , descarte_tam );
			printf("\n--\n");
			printf("\nVOCE PERDEU A VEZ\n");
			turn_oponente( oponente, &oponente_tam );
		}

		turn_jogador( jogador , &jogador_tam );

		//o loop comeca com turno do jogador, entao se o jogador comecar jogaria duas vezes seguidas
		turn_oponente( oponente, &oponente_tam );	
	}
	else {
		turno = 0;
		printf( "COMPUTADOR COMEÇA\n" );
		printf( "\n--\nMESA: " );
		imprime_descarte( descarte , descarte_tam );
		printf("\n--\n");
		if( descarte[descarte_tam-1].tipo == COMPRA_2 ) {
			compra_carta( oponente, &oponente_tam );
			compra_carta( oponente, &oponente_tam);
			printf( "\nCOMPUTADOR COMPROU 2\n" );
		}
		else if ( descarte[descarte_tam-1].tipo == CURINGA_COMPRA || descarte[descarte_tam-1].tipo == CURINGA_STD ) {
			printf( "\nDescarte: Curinga -> Carta descartada...\n" );
			compra_carta( descarte , &descarte_tam );
			printf( "\n--\nMESA: " );
			imprime_descarte( descarte , descarte_tam );
			printf("\n--\n");
		}
		else if ( descarte[descarte_tam-1].tipo == BLOQ || descarte[descarte_tam-1].tipo == INVERTE ) {
			printf( "\nCOMPUTADOR PERDEU A VEZ\n" );
			turn_jogador( jogador , &jogador_tam );
		}

		turn_oponente( oponente, &oponente_tam );
	}

	//loop de jogo até o fim

	while ( 1 ) {
		if( jogador_tam == 0 ) {
			printf( "\n\nVOCE DESCARTOU TODAS AS CARTAS\n" );
			break;
		}
		if( oponente_tam == 0 ) {
			printf( "\n\nO COMPUTADOR DESCARTOU TODAS AS CARTAS\n" );
			break;
		}
		turn_jogador( jogador , &jogador_tam );
		if( jogador_tam == 0 ) {
			printf( "\n\nVOCE DESCARTOU TODAS AS CARTAS\n\n" );
			break;
		}
		if( oponente_tam == 0 ) {
			printf( "\n\nO COMPUTADOR DESCARTOU TODAS AS CARTAS\n" );
			break;
		}
		turn_oponente( oponente, &oponente_tam );
	}

	//finaliza o jogo e anuncia o vencedor
	finaliza_jogo( jogador , jogador_tam , oponente, oponente_tam );

	return 0;
 }
