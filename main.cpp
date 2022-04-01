#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	float NotEst, Precio, Descuento, Pagofinal;
	
    cout<<"Se le aplicara un descuento al pago de colegiatura al estudiante, dependiendo de la nota que haya sacado"<<endl;
    cout<<""<<endl;
	Precio= 800;
	printf("Las notas de 90 en adelante, se le aplicara 20% de descuento \n");
	printf("Las notas entre 75 y 89, se le aplicara 15% de descuento \n");
	printf("Las notas entre 60 y 74 se le aplicara 10% de descuento \n");
	printf("Las notas menores a  60 no se le aplicara ningun descuento \n\n");	
	printf("Ingrese la nota del estudiante:");scanf("%f", &NotEst);
	if (NotEst>=90){
		Descuento=0.20;
	}
	else{
		if(NotEst>=75 && NotEst<90){
			Descuento=0.15;
		}
		else{
			if(NotEst>=60 && NotEst<75){
				Descuento=0.10;			
			}
			else{
					Descuento=0;
				}
			}
		}
	Pagofinal=Precio-(Precio*Descuento);
	printf("El pago de colegiatura final es de: Q%.2f", Pagofinal);
	printf("\n");
	system("pause");
}
