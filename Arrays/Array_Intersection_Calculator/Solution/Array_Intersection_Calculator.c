#include <stdio.h>

#define agetsize(x) (sizeof(x)/sizeof(x[0]))

const int a1[] = {1,2,4,5,6};
const int a2[] = {2,3,5,7};


int* Array_Intersection_Calculator(const int* a1,const int* a2,size_t size1,size_t size2) {
    
    int* intersectionarr = (int *)malloc(sizeof(int) * size1 > size2 ? size1 : size2);
    int k = 0;
    
    for(size_t i=0;i<size1;i++){
        for(size_t j=0;j<size2;j++){
            if(a1[i]==a2[j]){
                intersectionarr[k]=a1[i];
                k++;
            }
        }
    }

    printf("Elements of array are : ");  
    for(size_t i=0;i<k;i++)  
    {  
        printf("%d ", intersectionarr[i]);  
    }  

    return intersectionarr;

}


int main() {

    Array_Intersection_Calculator(a1,a2,agetsize(a1),agetsize(a2));

}
