#include<stdio.h>
void main(){
    int x=10;
    int y=5;
    printf("\n Values before swapping");
    printf("\n X: %d\n Y:",x,y);
    int t=x;
    x=y;
    y=t;
    printf("\n Values after swapping");
    printf("\n X: %d\n Y:",x,y);

}