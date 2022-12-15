#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lotto(int a[]){
    int neueZahl = 0;
    int nichtDiese = 0;
    for (int i = 0; i <= 6; i++)
    {
        do{
            nichtDiese = 0;
            neueZahl = rand()%49+1;
            
            for (int j = 0; j <= i; j++)
            {
                if(neueZahl == a[j]){
                    nichtDiese ++;
                    break;
                }
            }
        } while (nichtDiese > 0);
        a[i] = neueZahl;
    }
}

void main(){
    int array[6];

    srand(time(NULL)); //setzt seed für rand() auf die milisekunden seit 1970
    lotto(array); 

    printf("Deine Lottazahlen sind: ");
    for (int i = 0; i <= 6; i++)
    {
        printf("%3d", array[i]);
    }
    
}
