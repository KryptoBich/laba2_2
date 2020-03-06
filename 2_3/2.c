#include <stdio.h>
#include <stdlib.h>

int main (){
  const int N = 4;
  int Arr[N][N];
  int max = 0, min = 0, max_i, max_j, min_i, min_j;


  for(int i = 0; i < N; ++i) {
      for(int j = 0; j < N; ++j){
          scanf("%d",&Arr[i][j]);
      }
      printf("\n");
  }

    for( int i=0; i<N; i++ )  {
        for ( int j = 0; j<N; j++ ){
           if ( Arr[i][j] > 0 ){
             if (Arr[i][j] > max ){
              max = Arr[i][j];
              max_i = i;
              max_j = j;
            }
           }else{
             if (Arr[i][j] < min ){
              min = Arr[i][j];
              min_i = i;
              min_j = j;
            }
           }
        }
    }

    for( int i=0; i<N; i++ )  {
        for ( int j = 0; j<N; j++ ){
          Arr[min_i][min_j] = max;
          Arr[max_i][max_j] = min;
        }
    }

    printf("\n\n");

    for( int i=0; i<N; i++ )  {
        for ( int j = 0; j<N; j++ ){
         printf ( "%4d", Arr[i][j] );
        }
        printf("\n");
    }

    return 0;
}
