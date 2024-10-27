#include <stdio.h>

int main() {
int Marks[2][3]={{20,30,40},{50,60,70}};


int i,j;
for(i=0;i<2;i++){
for(j=0;j<3;j++){

printf("Matrix [%d][%d]=%d\n",i,j,Marks[i][j]);
}
}
return 0;
}

    