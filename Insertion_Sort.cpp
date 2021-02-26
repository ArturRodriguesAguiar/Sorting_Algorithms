#include <bits/stdc++.h>

using namespace std;

void InsertionSort(int Vetor[], unsigned Tamanho){
	
	int j, Chave;
	unsigned i;
	
	for(i = 1; i < Tamanho; i++){
	 
		Chave = Vetor[i]; 
		j = i - 1; 
		while (j >= 0 && Vetor[j] > Chave){
		 
			Vetor[j + 1] = Vetor[j]; 
			j = j - 1; 
		} 
		Vetor[j + 1] = Chave; 
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

    cout << "Algoritmo: Insertion Sort\nutilizando " << Tamanho << " elementos." << endl;
	Inicio = clock();
	InsertionSort(Vetor, Tamanho);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros aleatorios: " << Tempo_Execucao << " segundos." << endl;

	Inicio = clock();
	InsertionSort(Vetor, Tamanho);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros ordenados (crescentemente): " << Tempo_Execucao << " segundos." << endl;	

	reverse(Vetor, Vetor + Tamanho);	
	Inicio = clock();
	InsertionSort(Vetor, Tamanho);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros ordenados (decrescentemente): " << Tempo_Execucao << " segundos." << endl;	
	return 0; 
}
