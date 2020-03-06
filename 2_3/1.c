#include <stdio.h>
#include <stdlib.h>

int main (){
  const int N = 5;
    int Arr[N][N];
  int buf;


  for(int i = 0; i < N; ++i) {
      for(int j = 0; j < N; ++j){
          scanf("%d",&Arr[i][j]);
      }
      printf("\n");
  }

    for( int i=0; i<N; i++ )  {
        for ( int j = 0; j<N; j++ ){
           if ( Arr[i][j] == Arr[j][i] ){
             buf = 1;
           }else{
             buf = 0;
             break;
           }
        }
        if (buf == 0){break;}
    }

    if (buf == 1){
      printf("Симетричная");
    }else{
      printf("Не симетричная");
    }


    return 0;
}
