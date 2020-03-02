#include <stdio.h>
#include <stdlib.h>

int main (){

    const int rows = 5;
    const int cols = 5;
    int M[rows][cols];
    printf("Enter 25 elements: ");
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j){
            scanf("%d",&M[i][j]);
        }
        printf("\n");
    }
    
    
    for(int k = 0; k < rows * cols; ++k) {
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                if(j != cols - 1) {
                    if(M[i][j+1] < M[i][j]) {
                        int tmp = M[i][j+1];
                        M[i][j+1] = M[i][j];
                        M[i][j] = tmp;
                    }
                }
                else {
                    if((M[i+1][0] < M[i][j]) && (i != rows - 1)) {
                        int tmp = M[i+1][0];
                        M[i+1][0] = M[i][j];
                        M[i][j] = tmp;
                    }
                }
            }
        }
    }
    

    printf( "\n\n" );

    for ( int i = 0; i < 5; i++ ){
      for( int j = 0; j < 5; j++ ){
            printf( "%4d", M[i][j] );
        }
        printf("\n");
    }

}






