#include<stdio.h>

int indice(int T[] ,int n){
    int imax=0 ;
    int i=n-1 ;
    if(T[imax]>T[i])
        return imax ;
    else
    return indice(T,n-2) ;
} 

int main(){
    int n=5 ;
    int T[]={12 ,10 ,18 ,5 , 9}  ;
    int r ;
     
    r=(T,n) ;
    printf("L'indice du plus grand element est :%d",r)  ;
    printf("\n") ;

    return 0;
}