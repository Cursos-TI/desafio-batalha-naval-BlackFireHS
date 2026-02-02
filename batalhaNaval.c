#include <stdio.h>

int main(){

    int tabuleiro [10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    tabuleiro [2][2] = 3;
    tabuleiro [2][3] = 3;
    tabuleiro [2][4] = 3;

    tabuleiro [5][8] = 3;
    tabuleiro [6][8] = 3;
    tabuleiro [7][8] = 3;
    

    for(int i = 0; i < 10; i++){
        
        int j = 0;
       
        while(j < 9){
            
            printf("%d  ", tabuleiro[i][j]);
           
            j++;
        }
        
        printf("%d\n", tabuleiro[i][j]);
    }
            
return 0;
}
