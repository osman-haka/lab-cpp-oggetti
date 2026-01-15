#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                      Utilizzo della classe studente                    */

class Studente {
public:
    string nome;
    int eta;
    float media;

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;
    }
};

int main()
{
    Studente s1;
    s1.nome = "Mario";
    s1.eta = 17;
    s1.media = 7;

    Studente s2;
    Studente *p = &s2;
    p->nome = "Maria";
    p->eta = 18;
    p->media = 8;

    s1.stampaStudente();
    s2.stampaStudente();

    return 0;
}
