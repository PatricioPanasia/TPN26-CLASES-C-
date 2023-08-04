#include <iostream>
using namespace std;
class CNumber{
	private: 
	int n1;
	int n2;
	int n3;
	public:
	CNumber(int a, int b, int c);
	int Setn1(int a);
	int Setn2(int b);
	int Setn3(int c);
	int NumeroMaximo(int a, int b, int c);
	int NumeroMinimo(int a, int b, int c);
	float PromedioNumeros(int a, int b, int c);
	int NumerosPares(int a, int b, int c);
	int numerosImpares(int a, int b, int c);
};
CNumber::CNumber(int a, int b, int c)
{
	int n1=Setn1(a);
	int n2=Setn2(b);
	int n3=Setn3(c);
}
CNumber::Setn1(int a)
{
	int n1 = a;
	return n1;
}
CNumber::Setn2(int b)
{
	int n2 = b;
	return n2;
}CNumber::Setn3(int c)
{
	int n3 = c;
	return n3;
}
int CNumber::NumeroMaximo(int a, int b, int c)
{
	int x=0;
	if(a>b && a>c){
		x=a;
	}
		if(b>a && b>c){
		x=b;
	}
		if(c>a && c>b){
		x=c;
	}
	return x;
}
int CNumber::NumeroMinimo(int a, int b, int c)
{
	int x=0;
		if(a<b && a<c){
		x=a;
	}
		if(b<a && b<c){
		x=b;
	}
		if(c<a && c<b){
		x=c;
	}
	return x;
}
float CNumber::PromedioNumeros(int a, int b, int c)
{
	int x;
	x = (a + b + c)/3;
	return x;
}
int CNumber::NumerosPares(int a, int b, int c){
	int x=0;
	if(a%2==0){
		x+=1;
	}
	if(b%2==0){
		x+=1;
	}
	if(c%2==0){
		x+=1;
	}
	return x;
}
int CNumber::numerosImpares(int a, int b, int c)
{
	int x=0;
	if(a%2!=0){
		x+=1;
	}
	if(b%2!=0){
		x+=1;
	}
	if(c%2!=0){
		x+=1;
	}
	return x;
}
int main(){
	int a = 10;
	int b = 15;
	int c = 20;
	int max, min, par, impar;
	float prom;
	CNumber Numeros(a,b,c);
	max=Numeros.NumeroMaximo(a,b,c);
	min=Numeros.NumeroMinimo(a,b,c);
	par=Numeros.NumerosPares(a,b,c);
	impar=Numeros.numerosImpares(a,b,c);
	prom=Numeros.PromedioNumeros(a,b,c);
	cout<<"el numero maximo es: "<<max<<endl;
	cout<<"el numero minimo es: "<<min<<endl;
	cout<<"la cantidad de numeros pares es: "<<par<<endl;
	cout<<"la cantidad de numeros impares es: "<<impar<<endl;
	cout<<"el promedio de los 3 numeros es: "<<prom<<endl;
	return 0;
	}