#include <iostream>
#include "PilaVector.h"
using namespace std;
int main(){


	 PilaVector* P=new PilaVector();
	 P->Meter(1);
	 P->Meter(3);
	 P->Meter(5);
	 P->Meter(5);
	 P->mostrar();
      int e;
	  P->Sacar(e);
		cout<<"sacar ";
	   cout<<e<<endl;
			cout<<"sacar2 ";
	   cout<<P->Sacar()<<endl;

     system("Pause");
	 return 0;



}
