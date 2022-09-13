
#include <stdio.h>
#include <stdlib.h>


void copy(char A[20], char B[20]){
   char *ptA = A;
   char *ptB = B;
    while (A) {
        if(*ptA=='\0'){
            break;
        }
        *ptB=*ptA;
        ptA++;
        ptB++;
    }
    printf("%s",B);

}
int main(){

    char B[20];
    char A[20];
            printf("entre une chaine de caractere contienne moins de 10 cararctere:\n");
            scanf("%s",A),

    copy(A,B);


}
