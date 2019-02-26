#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	//Write your code here.
	int R[N];
	for(int i = 1; i < N; i++)
	{
		for(int g = 0; g < N; g++)
		{
			if(i==g){cout << "[" << d[g] <<"]" << " ";}
			else {cout << d[g] << " ";}
		}
		cout << " => ";
		int r = 0;
		for(int j = i; j != 0; j--)
		{
			if(d[j] > d[j-1])
			{
			swap(d,j,j-1);
			r++;
			}
			R[i] = r;
		}
		for(int k = 0; k < N; k++)
		{
			if(k==i-R[i]){cout << "[" << d[i-R[i]] <<"]" << " ";}
			else {cout << d[k] << " ";}
		}
		cout << "\n";
	}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
