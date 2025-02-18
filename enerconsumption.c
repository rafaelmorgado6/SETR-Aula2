#include <stdio.h>

void ecAdd(int vect[], int size){
    for(int i=0; i<size; i++){
        printf("%d\n", vect[i]);
    }
}

/* int main(){
    int vect[]={1,2,3,4,5};
    int size = sizeof(vect)/sizeof(vect[0]);
    ecAdd(vect, size);

    return 0;
} */