
//
// Created by alber on 12/12/2022.
//

#include "lib.h"
bool trova(char arr[][20], char nome[], int &pos_nome){
    int car=0;
    for(int i=0; i<10; i++) {//confronto carattere per carattere
        for(int j=0; j<20; j++){
            if(arr[i][j]==nome[j])car++;
        }
        if(car==20){//se sono tutti uguali car=20
            pos_nome=i;
            return true;
        }
        else car=0;//altrimenti lo riporto a 0
    }
    return false;
}
