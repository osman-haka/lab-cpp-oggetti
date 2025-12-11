#include <iostream>
#include <string>

using namespace std;


void lunghezzaStringa(string stringa){

int x = stringa.size();
cout << "dimensione della stringa:" << x << endl;
}


void trovaCiao(string stringa){

int y = stringa.find("ciao");

    if(y == 0){
     cout << "la parola ciao E' presente" << endl;
    } else {
    cout << "la parola ciao NON e' presente" << endl;
    }

}



void sostituisciPizzaConPasta(string stringa){

int z = stringa.find("pizza");
if(z == 0){
    string c =  stringa.replace(z, 5, "pasta");
    cout << "la stringa dopo la modifica:" << c << endl;
}

}



void stampaPrimaParola(string stringa){
int j = stringa.find(" ");

    cout << "la prima parola e': " << stringa.substr(0, j) << endl;


}





void aggiungiGiovanni(string frase){

frase.insert(frase.size(), "Giovanni!");
    cout << "Stringa dopo insert:" << frase << endl;

}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);


    lunghezzaStringa(str);
    trovaCiao(str);
    sostituisciPizzaConPasta(str);
    stampaPrimaParola(str);
    aggiungiGiovanni(str);



    return 0;
}
