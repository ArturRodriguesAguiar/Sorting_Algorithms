#include <bits/stdc++.h>

using namespace std;

void SelectionSort(int Vetor[], unsigned Tamanho){
	
	unsigned i, j;
	int Minimo; 

	for (i = 0; i < Tamanho - 1; i++){ 
		
		Minimo = i; 
		for(j = i + 1; j < Tamanho; j++) 
			if(Vetor[j] < Vetor[Minimo]) 
				Minimo = j; 
		swap(Vetor[Minimo], Vetor[i]);
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
    
    cout << "Algoritmo: Selection Sort\nutilizando " << Tamanho << " elementos." << endl;
	Inicio = clock();
	SelectionSort(Vetor, Tamanho); 
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros aleatorios: " << Tempo_Execucao << " segundos." << endl;

	Inicio = clock();
	SelectionSort(Vetor, Tamanho); 
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros aleatorios (crescentemente): " << Tempo_Execucao << " segundos." << endl;
	
	reverse(Vetor, Vetor + Tamanho);	
	Inicio = clock();
	SelectionSort(Vetor, Tamanho); 
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros ordenados (decrescentemente): " << Tempo_Execucao << " segundos." << endl;			
	return 0; 
}
