#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char arr[10][20];
    char nome[20]={"rty"};
    int pos_nome=69;

    for(int i=0; i<10; i++){//inizializzo vuoto
        for(int j=0; j<20; j++){
            arr[i][j]=' ';
            nome[j]=' ';
        }
    }

    for(int i=0; i<10; i++) cin>> arr[i];//prendo da tastirera
    cin>>nome;

    if(trova(arr, nome,pos_nome))cout<<pos_nome;
    else cout<<"non presente";

    return 0;
}
