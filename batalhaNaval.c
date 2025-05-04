#include <stdio.h>

int main(){


  //MONTA TABULEIRO
  int tabuleiro[10][10]; 

  //VARIAVEIS QUE REPRESENTAM OS NAVIOS
  int navio1[3] = {3, 3, 3};
  int navio2[3] = {3, 3, 3};
  int navio1diagonal[3] = {3, 3, 3};
  int navio2diagonal[3] = {3, 3, 3};


//IMPRIME O TABULEIRO COM OS NAVIOS POSICIONADOS
  for (int i = 0; i < 10; i++) { // Loop para as linhas
   
      
    for (int j = 0; j < 10; j++) { // Loop para as colunas
      
      tabuleiro[i][j] = 0; //MONTA TABULEIRO ZERADO

      //POSICIONA NAVIO NA HORIZONTAL
      tabuleiro[7][2] = navio1[0];
      tabuleiro[7][3] = navio1[1];
      tabuleiro[7][4] = navio1[2];

      //POSICIONA NAVIO NA VERTICAL
      tabuleiro[2][6] = navio2[0];
      tabuleiro[3][6] = navio2[1];
      tabuleiro[4][6] = navio2[2];

      //POSICIONA NAVIO 1 NA DIAGONAL
      tabuleiro[1][1] = navio1diagonal[0];
      tabuleiro[2][2] = navio1diagonal[1];
      tabuleiro[3][3] = navio1diagonal[2];

      //POSICIONA NAVIO 2 NA DIAGONAL
      tabuleiro[7][9] = navio2diagonal[0];
      tabuleiro[8][8] = navio2diagonal[1];
      tabuleiro[9][7] = navio2diagonal[2];


      //HABILIDADES ESPECIAIS
      if(i == 0){

        tabuleiro[0][4] = 5;//PARTE SUPERIOR DO TRIANGULO
        tabuleiro[0][8] = 5;//PARTE SUPERIOR DO OCTAEDRO

      }else if(i == 1)
      {

        //PARTE INFERIOR DO TRIANGULO
        tabuleiro[i][3] = 5;
        tabuleiro[i][4] = 5;
        tabuleiro[i][5] = 5;
        
        //PARTE CENTRAL DO OCTAEDRO
        tabuleiro[i][7] = 5;
        tabuleiro[i][8] = 5;
        tabuleiro[i][9] = 5;

      }else if(i == 2)
      {
        tabuleiro[i][8] = 5;//PARTE INFERIOR DO OCTAEDRO
     
      }else if(i == 3)//INICIO DA CRUZ
      {
        tabuleiro[i][2] = 5;      
      
      }else if(i == 4)
      {
        tabuleiro[i][0] = 5;
        tabuleiro[i][1] = 5;
        tabuleiro[i][2] = 5;
        tabuleiro[i][3] = 5;
        tabuleiro[i][4] = 5;

      }else if(i == 5)
      {
        tabuleiro[i][2] = 5;
      
      }else if(i == 6)
      {
        tabuleiro[i][2] = 5;
      }//FINAL DA CRUZ



      printf("%d ", tabuleiro[i][j]); // Imprime o elemento atual
    }
    printf("\n"); // Pula para a próxima linha para melhor visualização
  }
  


  return 0;


}

