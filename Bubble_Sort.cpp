#include <bits/stdc++.h>

using namespace std;

void BubbleSort(int Vetor[], int Tamanho){
	
    int i, j;  
    for(i = 0; i < Tamanho - 1; i++)       
	    for(j = 0; j < Tamanho - i - 1; j++)  
	        if(Vetor[j] > Vetor[j + 1])  
	            swap(Vetor[j], Vetor[j + 1]);  
}  

int main(){

    int * Vetor;
    unsigned Tamanho, i;
    double Tempo_Execucao;    
    clock_t Inicio, Fim;
    
    ios_base::sync_with_stdio(false);    
    
    ifstream Arquivo("Entrada.txt");
    Arquivo >> Tamanho;   
    Vetor = (int*)malloc(Tamanho * sizeof(int));
    for(i = 0; i < Tamanho; i++) Arquivo >> Vetor[i];
    
    cout << "Algoritmo: Bubble Sort\nutilizando " << Tamanho << " elementos." << endl;
    Inicio = clock();
	BubbleSort(Vetor, Tamanho - 1);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros aleatorios: " << Tempo_Execucao << " segundos." << endl;

    Inicio = clock();
	BubbleSort(Vetor, Tamanho - 1);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros aleatorios (crescentemente): " << Tempo_Execucao << " segundos." << endl;
	
	reverse(Vetor, Vetor + Tamanho);	
    Inicio = clock();
	BubbleSort(Vetor, Tamanho - 1);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros ordenados (decrescentemente): " << Tempo_Execucao << " segundos." << endl;	
	return 0;
}
