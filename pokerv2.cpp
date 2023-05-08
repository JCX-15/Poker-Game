#include <iostream>
#include <vector>
#include <iomanip>
#include <conio.h>

using namespace std;

//Funcion que busca los Dobles, Triples y Poker(Cuadruples).
void conta(int uni[][5],int t, int m, int conti){
    int x=0, l;
    for (int i=0;i<t;i++){
        if (m==uni[0][i]){
            x++;
            l=uni[0][i];
        }
    }
	if (x==2){
		if ((conti>=0)&&(conti<1)){
			cout<<"Existe Doble para: "<<l<<endl;
		}
	}
	else{
		if ((conti>=0)&&(conti<1)){
			cout<<"No hay Dobles."<<endl;
		}
	}
	if (x==3){
		if ((conti>=0)&&(conti<3)){
			cout<<"Existe Triple para: "<<l<<endl;
		}
	}
	else{
		if ((conti>0)&&(conti<2)){
			cout<<"No hay Triples."<<endl;
		}
	}
	if (x==4){
		if ((conti>=0)&&(conti<1)){
			cout<<"Existe Poker para: "<<l<<endl;
		}
	}
	else{
		if ((conti>=0)&&(conti<1)){
			cout<<"No hay Poker."<<endl;
		}
	}	
}

int main(){
	int mano[2][5], vec[5];
	int n, g=0;
	cout<<"Ingrese su mano actual: "<<endl;
	cout<<setw(3)<<"J = 11, Q = 12, K = 13, As = 14"<<endl;
	cout<<"Ingrese sus cartas en orden comenzando por el mas alto."<<endl;
	cout<<"Ingrese los numeros de sus cartas: "<<endl;
	for (int i=0;i<5;i++){
		g=i+5;
		cout<<setw(g)<<" ";
		cin>>mano[0][i];
	}
	cout<<"Ingrese el palo correspondiente a su carta de la siguiente forma: "<<endl;
	cout<<setw(3)<<"1 = Trebol ; 2 = Diamantes ; 3 = Corazon ; 4 = Picas"<<endl;
	for (int j=0;j<5;j++){
		g=j+5;
		cout<<setw(g)<<" ";
		cin>>mano[1][j];
	}
	//Dobles, Triples y Poker(Cuadruples).
    for(int i = 0; i < 5; i++ ){
    	n = mano[0][i];
    	if (n!=0){
    	    conta(mano,5,n,i);
    	}
	}
    //Color(Quintuple de Color), Escalera real y Escalera de Color
    if ((mano[1][0]==mano[1][1])&&(mano[1][2]==mano[1][3])&&(mano[1][4]==mano[1][0])){
		cout<<"Existe 'Color' dentro de la mano."<<endl;
    	if ((mano[0][0]==14)&&(mano[0][1]==13)&&(mano[0][2]==12)&&(mano[0][3]==11)&&(mano[0][4]==10)){
    		cout<<"Existe 'Escalera Real' dentro de la mano."<<endl;
		}
		else
		{
			cout<<"No existe 'Escalera Real' dentro de la mano."<<endl;
		}
		if ((mano[0][4]==(mano[0][0])-4)&&(mano[0][3]==(mano[0][0])-3)&&(mano[0][2]==(mano[0][0])-2)&&(mano[0][1]==(mano[0][0])-1)){
			cout<<"Existe 'Escalera de Color' dentro de la mano."<<endl;
		}
		else
		{
			cout<<"No existe 'Escalera de Color' dentro de la mano."<<endl;
		}
	}
	else
	{
		cout<<"No existe 'Color' dentro de la mano."<<endl;
	}
	//Escalera
	if ((mano[0][4]==(mano[0][0])-4)&&(mano[0][3]==(mano[0][0])-3)&&(mano[0][2]==(mano[0][0])-2)&&(mano[0][1]==(mano[0][0])-1)){
		cout<<"Existe 'Escalera' dentro de la mano."<<endl;
	}
	else
	{
		cout<<"No existe 'Escalera' dentro de la mano."<<endl;
	}
	//Full house
	if ((mano[0][0]==mano[0][1])&&(mano[0][2]==mano[0][3])&&(mano[0][3]==mano[0][4])){
		cout<<"Existe 'Full House' dentro de la mano."<<endl;
		if((mano[0][0]==12)&&(mano[0][3]==4)){
			cout<<"Existe 'Full House de Damas y Cuatros' dentro de la mano."<<endl;
		}
	}
	else
	{
		cout<<"No existe 'Full House' dentro de la mano."<<endl;
	}
	getch();
	return 0;
}
//Programa hecho por Julio César Barreto Torres (20211023083)
