#include <bits/stdc++.h>

using namespace std;

void Fundir(int Vetor[], int l, int m, int r){
	
	int n1 = m - l + 1;
	int n2 = r - m;

	int Tmp1[n1], Tmp2[n2];

	for (int i = 0; i < n1; i++) Tmp1[i] = Vetor[l + i];
	for (int j = 0; j < n2; j++) Tmp2[j] = Vetor[m + 1 + j];

	int i = 0; int j = 0; int k = l;

	while(i < n1 && j < n2){
		
		if(Tmp1[i] <= Tmp2[j]){
			
			Vetor[k] = Tmp1[i];
			i++;
		}
		else{
			
			Vetor[k] = Tmp2[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		
		Vetor[k] = Tmp1[i];
		i++;
		k++;
	}
	while(j < n2){
		
		Vetor[k] = Tmp2[j];
		j++;
		k++;
	}
}

void MergeSort(int Vetor[],int l,int r){
	
	if(l >= r) return;
	
	int m = l + (r - l)/2;
	MergeSort(Vetor, l, m);
	MergeSort(Vetor, m + 1, r);
	Fundir(Vetor, l, m, r);
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

    cout << "Algoritmo: Merge Sort\nutilizando " << Tamanho << " elementos." << endl;
	Inicio = clock();
	MergeSort(Vetor, 0, Tamanho - 1);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros aleatorios: " << Tempo_Execucao << " segundos." << endl;

	Inicio = clock();
	MergeSort(Vetor, 0, Tamanho - 1);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros aleatorios (crescentemente): " << Tempo_Execucao << " segundos." << endl;
	
	reverse(Vetor, Vetor + Tamanho);	
	Inicio = clock();
	MergeSort(Vetor, 0, Tamanho - 1);
	Fim = clock();
	Tempo_Execucao = double(Fim - Inicio)/double(CLOCKS_PER_SEC);
	cout << "Tempo de execucao para array preenchida com numeros ordenados (decrescentemente): " << Tempo_Execucao << " segundos." << endl;			
	return 0;
}
