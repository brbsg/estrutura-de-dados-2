#include <stdio.h>

void bubbleSort(int *v, int l, int r);

int main(){

    int aux;
    int t = 1, i=0;
    int *arr = malloc(sizeof(int));
    
    while(scanf("%d", &aux) != EOF){
        if(i == t){
            arr = realloc(arr, t * 2 * sizeof(int));
            t *= 2;
        }

        arr[i++] = aux;
    }

    bubbleSort(arr, 0, t);

    for (int i = 0; i < t; i++){
       printf("%d", arr[i]);
    }
    

    return 0;
}

void bubbleSort(int *v, int l, int r){
    for(int j=l; j<r; j++){
        for(int j=l; j<r; j++){
            if(v[j+1]<v[j]){
                int tmp = v[j];
                v[j]=v[j+1];
                v[j+1]=tmp;
            }
        }
    }
}

