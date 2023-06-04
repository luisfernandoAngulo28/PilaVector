//---------------------------------------------------------------------------

#pragma hdrstop

#include "PilaVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
	PilaVector::PilaVector(){
		elementos=new int[maxpila];
		tope=0;

	}
	bool PilaVector:: Vacia(){
		return tope==0;
	}

	void PilaVector:: Meter(int elem){//push
		if(tope<maxpila){
		  elementos[tope]=elem;
		  tope++;
		}
	}
	void PilaVector::Sacar( int &e){ //pop
		 if(!Vacia()){
		 e=elementos[tope-1];
		   tope--;
		 }else{
			 cout<<"Error \n"<<endl;
		 }

	}
	int PilaVector::Sacar(){
		 if(!Vacia()){
		 int e=elementos[tope-1];
		   tope--;
		   return e;
		 }else{
			 return -1;
		 }

	}
	//este metodo solo consulta a ultimo de la pila
	int PilaVector::cima(){   //get
		 if(!Vacia()){
		   return  elementos[tope-1];
		 }

	}
	void PilaVector::mostrar(){
		 PilaVector* aux=new  PilaVector();
		 while(!Vacia()){
		   int e;
		   Sacar(e);
		   aux->Meter(e);
		   //cout<<"|_"<<to_string(e)<<"_|";
			  cout<<"|_"<<e<<"_|"<<endl;
		 }

		 while(!aux->Vacia()){
		   int e;
		   aux->Sacar(e);
		   Meter(e);

		 }


	}
