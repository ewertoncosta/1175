//
//  main.c
//  1175
//
//  Created by Ewerton Costa on 16/11/15.
//  Copyright © 2015 Ewerton Costa. All rights reserved.
//

#include<stdio.h>
int main(){
    int N[20], i, a = 0;
    //Pede 20 valores
    for(i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }
    //Imprime os 20 ao contrario
    for(i=19 ; i >=0 ; i--){
    printf("N[%d] = %d\n", a, N[i]);
    a++;
    }
    return 0;
}
