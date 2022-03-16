#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int arr[], int i, int j) {
    
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;

}

int main(){

    srand( time(NULL) );

    int x = rand();

    int min = 10, max = 20;
    int y = x % (max-min) + min;
    int array[y];

    for (int i=0 ; i<y ; i++) {
        
        int tmp_rand = rand();
        int tmp = tmp_rand % 100;
        array[i] = tmp;
    
    }
    
    for (int i=0 ; i<y ; i++) {
        
        printf("%d ", array[i]);
    
    }

    printf("\n");

    //insertion sort

    int l;

    for(int k=0 ; k < y ; k++){

        l = k;

        while(y-1 > l && l >= 0 && array[l+1] < array[l]){

            swap(array,l+1,l);

            l--;

        }

    }

    //bouble_sort
    
    //for(int i=0 ; i < y ; i++){

        //for(int j=0 ; j < y-1 ; j++){

            //if(array[j+1]<array[j]){

                //swap(array,j+1,j);

            //}
        //}
    //}

    for (int i=0 ; i<y ; i++) {
        
        printf("%d ", array[i]);
        
    }
    
    printf("\n");

}