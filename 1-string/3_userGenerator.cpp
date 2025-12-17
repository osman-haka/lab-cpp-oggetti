/***************************************************************************
 *                         Username generator                              *
 *                                                                         *
 *  Capire il funzionamento della funzione minuscolo                       *
 *  e implementare le due funzioni usernameGenerator                       *
 **************************************************************************/

 #include <iostream>
#include <string>
#include <cctype>

using namespace std;


// Funzione che trasforma una stringa in minuscolo
string minuscolo(string s){
    for(int i = 0; i < s.length(); i++)
        s.at(i) = tolower(s.at(i));
    return s;
}

string usernameGenerator(string nome, string cognome){
    string stringa = nome[0] + cognome;
    return minuscolo(stringa);
}

string usernameGenerator(string nomeCognome){
    int j = nomeCognome.find(" ");

    string nome = nomeCognome.substr(0, j);
    string cognome = nomeCognome.substr(j + 1);
    
    string x = nome.substr(0, 1) + cognome;

    return minuscolo(x);

}

// main con testing
int main()
{

    string nome = "Mario";
    string cognome = "Rossi";

    string nomeCognome = "Luca Bianchi";

    string username1 = usernameGenerator(nome, cognome);

    string username2 = usernameGenerator(nomeCognome);

    cout << "Primo utente: " << nome << " " << cognome << ". Username: " << username1 << endl;
    cout << "Secondo utente: " << nomeCognome << ". Username: " << username2;

    return 0;
}
