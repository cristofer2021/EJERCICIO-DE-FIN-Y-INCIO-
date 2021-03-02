#include <iostream>
using namespace std;

int main() {
 
 int inicio,fin,s;
	s=0;
	cout << " ingrese el punto de inicio \n";
	cin>> inicio;
cout <<" ingrese el punto de fin\n";
	cin>> fin; 
	
		do
    {
			s=s+inicio;
			inicio=inicio+1;
     
		}while (inicio<fin);
    
    cout << " la sumatoria es :"<<s;
    
}