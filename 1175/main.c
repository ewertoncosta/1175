//
//  main.c
//  1175
//
//  Created by Ewerton Costa on 16/11/15.
//  Copyright © 2015 Ewerton Costa. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
int main() {
    int N[20], i, j=0;
    
    for(i=0;i<20;i++){
        scanf("%d",&N[i]);
    }
    for(i=19;i>=0;i--){
        printf("N[%d] = %d\n",j, N[i]);
        j++;
    }
    return 0;
}
