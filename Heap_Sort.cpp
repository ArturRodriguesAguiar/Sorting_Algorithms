#include <bits/stdc++.h>

using namespace std; 

void Amontoar(int Vetor[], int n, int i){
 
	int Maior = i; 
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && Vetor[l] > Vetor[Maior]) Maior = l; 
	if(r < n && Vetor[r] > Vetor[Maior]) Maior = r; 

	if(Maior != i){ 
	
		swap(Vetor[i], Vetor[Maior]);
		Amontoar(Vetor, n, Maior); 
	} 
} 

void HeapSort(int arr[], int n){
 
	for(int i = n / 2 - 1; i >= 0; i--) Amontoar(arr, n, i); 
	for(int i = n - 1; i >= 0; i--){

		swap(arr[0], arr[i]); 
		Amontoar(arr, i, 0); 
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

    cout << "Algoritmo: Heap Sort\nutilizando " << Tamanho << " elementos." << endl;
	Inicio = clock();
	HeapSort(Vetor, Tamanho);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros aleatorios: " << Tempo_Execucao << " segundos." << endl;

	Inicio = clock();
	HeapSort(Vetor, Tamanho);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros ordenados (crescentemente): " << Tempo_Execucao << " segundos." << endl;	
	
	reverse(Vetor, Vetor + Tamanho);	
	Inicio = clock();
	HeapSort(Vetor, Tamanho);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros ordenados (decrescentemente): " << Tempo_Execucao << " segundos." << endl;		
	return 0;
}
