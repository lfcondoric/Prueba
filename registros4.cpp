#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,x=0,m,y=0,a[100];
	string p;
	struct ATLETAS{
		string nombres;
		char pais[20];
		char disciplina[20];
		int medallas;
	}atl[100];
	cout<<"INGRESE LA CANTIDAD DE PEPORTISTAS A REGISTRAR: ";cin>>n;
	cin.ignore(10000,'\n');
	for(int i=0;i<n;i++){
		cout<<"INGRESE LOS DATOS DEL DEPORTISTA "<<i+1<<":"<<endl;
		cout<<"Nombres: ";getline(cin,atl[i].nombres);
		cout<<"Pais: ";cin>>atl[i].pais;
		cout<<"Disciplina: ";cin>>atl[i].disciplina;
		cout<<"Cantidad de medallas: ";cin>>atl[i].medallas;
		cout<<endl;
		cin.ignore(10000,'\n');
	}
	cout<<"\nIngrese un Pais: \n";cin>>p;
	for(int i=0;i<n;i++){
		if((atl[i].pais)==p){
			a[x]=i;
			x++;
		}
	}
	cout<<"Los deportistas provenientes del pais ingresado son: \n";
	for(int i=0;i<x;i++){
		cout<<atl[a[i]].nombres;
		for(int e=0;e<x;e++){
			if(atl[a[i]].medallas>=atl[a[e]].medallas){
				y++;
			}
		}
		if(y==x){
			cout<<" --> n";
		}else{
			cout<<endl;
			y=0;
		}
	}
	
	return 0;
}