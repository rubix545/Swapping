#include<stdio.h>
void swap(int *x,int *y)
{
    int t=x;
    x=y;
    y=t;
}
void main(){
    int x=10;
    int y=5;
    printf("\n Values before swapping");
    printf("\n X: %d\n Y:",x,y);
    swap(&x,&y);
    printf("\n Values after swapping");
    printf("\n X: %d\n Y:",x,y);

}