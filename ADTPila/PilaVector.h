//---------------------------------------------------------------------------

#ifndef PilaVectorH
#define PilaVectorH
//---------------------------------------------------------------------------
 #include <iostream>
  using namespace std;
 const int maxpila=100;

class PilaVector{
	private:
	int *elementos;
	int tope;	public:
	PilaVector();  //Crear()
	bool Vacia();
	void Meter(int elem);//push
	void Sacar( int &e);
	int Sacar();//el elemento de la cima
	int cima();
	void mostrar();

};



#endif
