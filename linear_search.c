#include<stdio.h>
int main(){
    int array[5]={10,20,30,40,50};
    int KEY,Flag=0;;
    scanf("%d",&KEY);
    for(int i=0;i<5;i++){
        if(KEY==array[i]){
            printf("KEY FOUND AT %d",++i);
            Flag=1;
            break;
        }
    }
    if(Flag==0){
        printf("ELEMENT NOT FOUND");
    }
    
}