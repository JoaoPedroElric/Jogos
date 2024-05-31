#include "AtributosPlayer.h"

// CRIANDO OS DAODS DO PLYER
struct atributoplayer{

	char s_nomeplayer[15]; // NOME.
	int i_limite_pv;       // MAXIMO DE VIDA.
	int i_pv;              // VIDA ATUAL.
	int i_atk;             // ATQUE.
	int i_item;            // QUANTIDADE DE ITENS QUE PODE SER LEVADO NO INVENTARIO.
	int i_def;             // QUANTIDADE DE DEFESA.
	int i_nivel;           // NIVEL ATUAL.
	int i_xp;              // QUANTIDADE DE EXPERIENCIA .
	int i_limitexp;        // LIMITE DE XP PARA UPAR DE NIVEL.
	int i_moedas;          // QAUNTIDADE DE DINHEIRO.
	int i_safe;            // DEFINIR SE UM LUGAR A SEGURO OU NÃO.
		
};

// DANDO OS ATRIBUTOS INICIAIS DO PLAYER. 
void Inicializar_Atributos(Atributoplayer *player){
	
	player->i_limite_pv = 40;
	player->i_pv = 40;
	player->i_atk = 5;
	player->i_item = 5;
	player->i_def = 1;
	player->i_nivel = 1;
	player->i_xp = 0;
	player->i_limitexp = 50;
	player->i_moedas = 50;
	player->i_safe = 0;
	
}

