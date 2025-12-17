#include <iostream>
#include <string>
#include <cctype>   // per toupper
using namespace std;

 // numero di email
const int N = 12;

// array di email
string emails[N] = {
    "marco.rossi@studio.alberghetti.it",
    "anna.bianchi@studio.alberghetti.it",
    "luca.verdi@studio.alberghetti.it",
    "giulia.moretti@studio.alberghetti.it",
    "alessandro.ferrari@studio.alberghetti.it",
    "chiara.galli@studio.alberghetti.it",
    "matteo.martinelli@studio.alberghetti.it",
    "sara.ricci@studio.alberghetti.it",
    "stefano.colombo@studio.alberghetti.it",
    "elena.sartori@studio.alberghetti.it",
    "gianluca.marini@studio.alberghetti.it",
    "marta.leone@studio.alberghetti.it"
    };


string primoCarattereMaiuscolo(string &s) {

s[0] = toupper(s[0]);
return s;

}

int main() {

    // array destinazione per "Nome Cognome"
    string nomiCognomi[N];



    // ciclo su tutte le email
    for (int i = 0; i < N; i++) {
        string email = emails[i]; 

        int x = email.find(".");
        int y = email.find("@");
        
        string nome = email.substr(0, x);
        string cognome = email.substr(x + 1, y - 1 - x);
        
        primoCarattereMaiuscolo(nome);
        primoCarattereMaiuscolo(cognome);

        nomiCognomi[i] = nome + " " + cognome;
    }

    // stampa il risultato
    cout << "Risultato:\n";
    for (int i = 0; i < N; i++) {
        cout << nomiCognomi[i] << endl;
    }

    return 0;
}
