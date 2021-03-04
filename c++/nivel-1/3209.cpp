#include <iostream>

using namespace std;

int main()
{
    int nTeste;
    int nFiltros;
    cin >> nTeste;

    //Para C++ 17 utilize essa declaração
    int resposta[nTeste] = {};
    // Para C++ utlize essa declaração
    //int resposta[nTeste];
    
    for(int i=0; i<nTeste; i++){
        cin >> nFiltros;
        //Para C++ faça a inicialização do valor da variavel dessa forma:
        //resposta[i] = 0;
        int filtros[nFiltros];
        for(int c=0; c<nFiltros; c++){
            cin >> filtros[c];
        }
        for(int c=0; c<nFiltros; c++){
            if(c<nFiltros-1){
                resposta[i] += filtros[c]-1;
            }else resposta[i] += filtros[c];
        }
    }

    for(int i=0; i<nTeste; i++){
        cout << resposta[i] << endl ;
    }
    return 0;
}
