/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Chamando Bibiliotecas
#include <stdio.h>
#include <stdlib.h>
// Biblioteca de idiomas
#include <locale.h>

int main()
{
    // Configura o idioma para PT-BR
    setlocale(LC_ALL, "Portuguese");
    
    // Mudando a cor do texto, funciona apenas no Windows
//  system("color A");
    // Para por background, so juntar 2 letras
    // A primeira letra e o fundo
// system("color E4");

    // Mudando a cor usando codigo ANSI
    printf("\033[1;32mTexto verde!\033[0m\n");
    printf("Olá Mundo!\n");
    printf("\033[0m--- TABELA DE CORES ANSI (CLARAS/BRILHANTES) ---\n\n");
    printf("\033[1;90m[1;90] Cinza escuro\n");
    printf("\033[1;91m[1;91] Vermelho claro\n");
    printf("\033[1;92m[1;92] Verde claro\n");
    printf("\033[1;93m[1;93] Amarelo claro ☀️ (SUN)\n");
    printf("\033[1;94m[1;94] Azul claro\n");
    printf("\033[1;95m[1;95] Roxo claro / Lilás\n");
    printf("\033[1;96m[1;96] Verde água claro (Ciano)\n");
    printf("\033[1;97m[1;97] Branco brilhante\n");
    // Resetar para cor padrão
    printf("\033[0m\n--- Fim da Tabela ---\n");
    
    printf("\033[0m--- TABELA DE CORES ANSI: FUNDOS ---\n\n");
    // Fundos normais (40–47)
    printf("\033[97;40m [40] Fundo preto         \033[0m\n");
    printf("\033[97;41m [41] Fundo vermelho      \033[0m\n");
    printf("\033[30;42m [42] Fundo verde         \033[0m\n");
    printf("\033[30;43m [43] Fundo amarelo       \033[0m\n");
    printf("\033[97;44m [44] Fundo azul          \033[0m\n");
    printf("\033[97;45m [45] Fundo magenta/roxo  \033[0m\n");
    printf("\033[30;46m [46] Fundo ciano         \033[0m\n");
    printf("\033[30;47m [47] Fundo branco/cinza  \033[0m\n");
    printf("\n");
    // Fundos claros/brilhantes (100–107)
    printf("\033[30;100m [100] Fundo cinza escuro      \033[0m\n");
    printf("\033[30;101m [101] Fundo vermelho claro    \033[0m\n");
    printf("\033[30;102m [102] Fundo verde claro       \033[0m\n");
    printf("\033[30;103m [103] Fundo amarelo claro ☀️  \033[0m\n");
    printf("\033[30;104m [104] Fundo azul claro         \033[0m\n");
    printf("\033[30;105m [105] Fundo lilás/roxo claro   \033[0m\n");
    printf("\033[30;106m [106] Fundo verde água claro   \033[0m\n");
    printf("\033[30;107m [107] Fundo branco brilhante   \033[0m\n");
    // Reset
    printf("\033[0m\n--- Fim da Tabela ---\n");
    
    // Funciona apensas no CMD do Windows
//  system("pause");
    // Pedindo pro usuario apertar pra continuar
    printf("Pressione Enter para sair...");
    getchar();
    
    // Limpar a tela no Windows:
//  system("cls");
    // Limpa a tela online:
    system("clear");
    printf("Fim");
    
    return 0;
}
// Cor do texto Normal e ANSI
// 0 preto \033[0;30m
// 1 azul \033[0;34m
// 2 verde \033[0;32m
// 3 verde agua
// 4 vermelho \033[0;31m
// 5 roxo
// 6 amarelo \033[0;33m
// 7 branco \033[0;37m
// 8 cinza \033[1;90m	
// 9 azul claro \033[1;94m	
// A verde claro \033[1;92m	
// B verde agua claro
// C vermelho claro \033[1;91m	
// D lilas \033[1;95m	
// E amarelo claro \033[1;93m	
// F branco brilhante \033[1;97m
