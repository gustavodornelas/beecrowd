#include <bits/stdc++.h>

using namespace std;

int main(){

    while(true){
        int premios, pilotos, contador = 0;
        int chegadas[100000];

        cin >> premios >> pilotos;
        if(premios == 0 && pilotos == 0){
            break;
        }

        for(int i = 0; i < premios; i++){ // 'G' linhas (cada loop indica o resultado da corrida);
            for(int j = contador; j < pilotos + contador; j++){ // 'P' linhas (ordem de chegada dos pilotos);
                cin >> chegadas[j];                            // chegadas[] armazena todas as chegadas dos pilotos, com aux do contador.
            }
            contador += pilotos;
        }

        int modalidades, variacoes, pontuacoes[110], premiados[110];

        cin >> modalidades;

        for(int i = 0; i < modalidades; i++){
            for(int i = 0; i < 105; i++){ // Preenche o vetor pontuaoes e premiados com zero;
                pontuacoes[i] = 0;
                premiados[i] = 0;
            }
            cin >> variacoes;
            for(int j = 0; j < variacoes; j++){
                cin >> pontuacoes[j];
            }

            // resolvendo premiação

            int vezes = 1, posicao = -1;
            for(int i = 0; i < contador; i++){
                posicao++;
                if(i == pilotos * vezes){
                    vezes++;
                    posicao = 0;
                }
                premiados[posicao] += pontuacoes[chegadas[i] - 1];

            }
            int maior = premiados[0], indice = 0, counter_equals = 0, equals[110];

            for(int u = 0; u < pilotos; u++){
                if(premiados[u] > maior){
                    maior = premiados[u];
                    indice = u + 1;
                }
            }
            for(int u = 0; u < sizeof(premiados)/sizeof(int); u++){
                if(premiados[u] == maior){
                    equals[counter_equals] = u + 1;
                    counter_equals++;
                }
            }

            for(int i = 0; i < counter_equals; i++){
                if(i == counter_equals - 1)
                    cout << equals[i];
                else{
                    cout << equals[i] << " ";
                }

            }
            cout << endl;
        }
    }
}