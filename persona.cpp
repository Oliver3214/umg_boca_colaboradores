// Ejemplo Clases en C++ con (setter and getter)

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;




//clase persona
class Persona{
	//ofstream archivo_salida("file.txt");
	private:   //Atributos
	    string nombres;
	    string apellidos;
	    string direccion;
	    int telefono;
    	int dia, mes, anio;
	    
	    //aca tengo que colocar los nuevos datos
	public: // metodos//setters
	    Persona(string, string,string, int, int, int, int); // Constructor
	    void crear();
		void leer();
		void actualizar();
		void borrar();
};



//getter   (clase padre)
Persona::Persona(string _nombres, string _apellidos, string _direccion, int _telefono, int _dia, int _mes, int _anio ){
	nombres = _nombres;
	apellidos = _apellidos;
	direccion = _direccion;
	telefono = _telefono;
    dia = _dia;
	mes = _mes;
	anio = _anio;

}


//creamos los metodos de PERSONA 
void Persona::crear() {
	
}
void Persona::leer(){
	cout<<"nombres:"<<nombres<<endl;
	cout<<"apellidos:"<<apellidos<<endl;
	cout<<"direccion:"<<direccion<<endl;
	cout<<"telefono:"<<telefono<<endl;
}
void Persona::actualizar(){
	
}
void Persona::borrar(){
	
}



//llamamos las clases (padre y hijos)
int main(){

	Persona p1 = Persona("nombres","apellidos","direccion",12345678,1,1,1);
	Persona p2("nombres","apellidos","direccion",12345678,1,1,1);
	//Persona p3(25,"Maria");
	
	p1.leer();
	//p2.actualizar();
	//p3.borrar();
	//p4.crear();
	//metodo de la clase Cliente (hija)
void Cliente::mostrar(){
	leer();
	cout<<"nit"<<nit<<endl;
}<

    //clase hijo empleado
    class Empleado: public Persona{
	private://atributos
		int codigo_empleado;
		string puesto;
	public:
		Empleado(string _nombres, string _apellidos, string _direccion, int _telefono, int _dia, int _mes, int _anio, int codigo_empleado, string puesto);
		void mostrar();
};
//contructor getter
Cliente::Cliente(string _nombres, string _apellidos, string _direccion, int _telefono, int _dia, int _mes, int _anio, int _nit ): Persona(_nombres,_apellidos,_direccion, _telefono, _dia, _mes,_anio ){
	nit = _nit;
};
	return 0;
}
//metodo de la clase Cliente (hija)
void Cliente::mostrar(){
	leer();
	cout<<"nit"<<nit<<endl;
}




//clase hijo empleado
class Empleado: public Persona{
	private://atributos
		int codigo_empleado;
		string puesto;
	public:
		Empleado(string _nombres, string _apellidos, string _direccion, int _telefono, int _dia, int _mes, int _anio, int codigo_empleado, string puesto);
		void mostrar();
};
//metodo de la clase Cliente (hija)
void Cliente::mostrar(){
	leer();
	cout<<"nit"<<nit<<endl;
}




//clase hijo empleado
class Empleado: public Persona{
	private://atributos
		int codigo_empleado;
		string puesto;
	public:
		Empleado(string _nombres, string _apellidos, string _direccion, int _telefono, int _dia, int _mes, int _anio, int codigo_empleado, string puesto);
		void mostrar();
};