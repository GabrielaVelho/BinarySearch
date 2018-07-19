#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// VERS�O N�O RECURSIVA

int pesquisaBinaria(int vetor[], int numero, int inicio, int fim)
{
    while(inicio <= fim)
    {
        int meio = (inicio + fim)/2;
        if (numero == vetor[meio]) //caso ele ache o n�mero
            return meio;
        else if (numero < vetor[meio])
            fim = meio - 1; //desconsidera o cara do meio, porque eu sei que ele n�o � o n�mero, ou o n�mero � menor que ele ou maior que ele
        else
            inicio = meio + 1;
    }

    return -1; //caso passe pelo while e n�o encontre o elemento
}

int main()
{
    int vetor[10] = {5, 8, 24, 38, 44, 80, 91, 99, 102, 110};
    int numero = 5;
    int resposta = pesquisaBinaria(vetor, numero, 0, 9);
    printf("Posicao = %d\n", resposta);

    return 0;
}

