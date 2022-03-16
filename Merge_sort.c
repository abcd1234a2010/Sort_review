#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int arr[], int i, int j) {

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

void merge_sort(int arr[], int length) {
    int tmp[length];
    _merge_sort(arr, 0, length-1, tmp);
}

void _merge_sort(int arr[],int head,int tail,int tmp[]){

    int mid;
    int i,j,k;
    
    if(tail-head<2){

        if(arr[head]>arr[tail]){

            swap(arr,head,tail);

        }

        return;

    }

    mid=(head+tail)/2;

    _merge_sort(arr,head,mid,tmp);
    _merge_sort(arr,mid+1,tail,tmp);

    j=mid+1;
    k=head;

    for(i=0;i<tail-head+1;i++){


        if(j>tail||arr[k]<arr[j]){

            tmp[i]=arr[k];
            k++;

        }

        else if(k>mid||arr[k]>arr[j]){

            tmp[i]=arr[j];
            j++;

        }

    }

    for(i=0;i<tail-head+1;i++){

        arr[head+i]=tmp[i];

    }

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

    merge_sort(array, y);

    for (int i=0 ; i<y ; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}