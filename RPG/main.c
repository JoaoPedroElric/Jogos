#include "AtributosPlayer.c"

int main(void){

    Atributoplayer player;

    printf("Informe seu nome\n");
    scanf(" %[^\n]",player.s_nomeplayer);

    Inicializar_Atributos(&player);

    printf("%s\nATK: %d\nDEF: %d\nPV: %d\n", player.s_nomeplayer, player.i_atk, player.i_def, player.i_pv);

    return 0;
}