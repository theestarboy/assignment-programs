#include <stdio.h>

int main() {
    int matrix[2][2][3]={  {{20,30,40},{40,50,60}},{{70,80,90},{100,10,15}}};
    
    int a,b,c;
    for (a=0;a<2;a++){
        for(b=0;b<2;b++){
            for(c=0;c<3;c++){
                
                printf(" matrix [%d][%d][%d]= %d\n",a,b,c,matrix[a][b][c]);
            }
        }
    }
    return 0;
}
