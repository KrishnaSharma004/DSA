#include <stdio.h>
#include <stdlib.h>

#define v 4
void addedge(int mat[v][v],int i,int j){
    mat[i][j] = 1;
    mat[j][i] = 1;
}
void displaymatrix(int mat[v][v]){
    for(int i=0;i<v;++i){
        for(int j=0;j<v;++j){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat[v][v] = {0};
    addedge(mat,0,1);
    addedge(mat,0,2);
    addedge(mat,1,2);
    addedge(mat,2,3);
    displaymatrix(mat);
}
//Adjancency Matrix : It is a matrix A[n][n] where n is number of vertices and 
// A[i][j] = 1 if i & j are adjacent
// A[i][j] = 0 otherwise

//Space Complexity : 0(n^2)