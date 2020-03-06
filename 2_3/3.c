
#include <stdio.h>
#include <stdlib.h>

int main (){
  const int N = 3;
    int Arr[N][N];


    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j){
            scanf("%d",&Arr[i][j]);
        }
        printf("\n");
    }

    for( int i=0; i<N; i++ )  {
        for ( int j = 0; j<N; j++ ){
           if (i == j){
            if (Array[i][j] == 0){
                for ( int k = 0; k<N; k++ ){
                  Array [i][k] = 1;
                }
            }
          }
        }
    }
    for( int i=0; i<N; i++ )  {
      for ( int j = 0; j<N; j++ ){
        printf ( "%4d", arr[i][j] );
              }
            printf("\n");
          }



    return 0;
}
