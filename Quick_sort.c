#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int arr[], int i, int j) {

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

void quick_sort(int array[], int head, int tail){

    int pivot;
    int i,j=head;
    int a;

    pivot=array[tail];
    
    if(tail-head<2){

        if(array[head]>array[tail]){

            swap(array,head,tail);

        }

        return;

    }

    for(i=head;i<tail;i++){

        if(array[i]<pivot){

            swap(array,i,j);
            j++;

        }
    }

    swap(array,j,tail);

    if(j==head){
        
        quick_sort(array,j+1,tail);

    }

    else if(j==tail){

        quick_sort(array,head,j-1);

    }

    else{
        
        quick_sort(array,head,j-1);
        quick_sort(array,j+1,tail);

    }

}



int main(){

    srand( time(NULL) );

    int x = rand();

    int min = 10, max = 20;
    int y = x % (max-min) + min;
    int array[y];

    for (int i=0 ; i<y ; i++){

        int tmp_rand = rand();
        int tmp = tmp_rand % 100;
        array[i] = tmp;
    
    }
    
    for (int i=0 ; i<y ; i++){

        printf("%d ", array[i]);

    }
    
    printf("\n");

    quick_sort(array, 0, y-1);

    for (int i=0 ; i<y ; i++) {
    
        printf("%d ", array[i]);
    
    }
    
    printf("\n");

}