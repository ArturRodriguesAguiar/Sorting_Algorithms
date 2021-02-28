#include <bits/stdc++.h>

//Falha para o caso de número ordenados decrescentemente

using namespace std;

int Recolocar(int Vetor[], int Primeiro, int Segundo){
 
	int pivot = Vetor[Segundo];
	int i = Primeiro - 1;

	for(int j = Primeiro; j < Segundo; j++){  
		if (Vetor[j] < pivot){
		 
			i++;
			swap(Vetor[i], Vetor[j]);
		} 
	}  
	swap(Vetor[i + 1], Vetor[Segundo]);
	return (i + 1); 
} 

void QuickSort(int Vetor[], int Primeiro, int Segundo){
 
	if(Primeiro < Segundo){

		int Pos = Recolocar(Vetor, Primeiro, Segundo);
		QuickSort(Vetor, Primeiro, Pos - 1); 
		QuickSort(Vetor, Pos + 1, Segundo); 
	} 
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
    
    cout << "Algoritmo: Quick Sort\nutilizando " << Tamanho << " elementos." << endl;
    Inicio = clock();
	QuickSort(Vetor, 0, Tamanho - 1);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros aleatorios: " << Tempo_Execucao << " segundos." << endl;
	
    Inicio = clock();
	QuickSort(Vetor, 0, Tamanho - 1);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros ordenados (crescentemente): " << Tempo_Execucao << " segundos." << endl;
	
	reverse(Vetor, Vetor + Tamanho);
    Inicio = clock();
	QuickSort(Vetor, 0, Tamanho - 1);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros ordenados (decrescentemente): " << Tempo_Execucao << " segundos." << endl;
	return 0;
}
