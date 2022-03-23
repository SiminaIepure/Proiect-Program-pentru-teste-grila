//---------------------------------------------------------------------------

#ifndef ClaseH
#define ClaseH
//---------------------------------------------------------------------------

#include"variantafinala.h"

using namespace std;

class Intrebare
{
protected:
        char cuvant[100];
        AnsiString enuntIntrebare;
        AnsiString raspuns1;
        AnsiString raspuns2;
        AnsiString raspuns3;
        AnsiString raspuns4;
        AnsiString raspunsCorect;
public:

        Intrebare *next;
        Intrebare()
        {
                next= NULL;
        }
        void citireRaspuns();   
        void citireRaspunsCorect();
        AnsiString getRaspuns1();
        AnsiString getRaspuns2();
        AnsiString getRaspuns3();
        AnsiString getRaspuns4();
        AnsiString getRaspunsCorect();
        AnsiString enunt();
        void setenuntIntrebare(AnsiString enunt);
        AnsiString getenuntIntrebare();
        virtual void Raspunsuri( int nr,TCheckBox* vector[4]);


};
class IntrebareRaspunsMultiplu: public Intrebare
{
   public:
     void Raspunsuri(int nr,TCheckBox* vector[4])
     {

     }

};


class lista
{
public:
        Intrebare *plimbareLista , *primulEl;   
        lista()
        {
                primulEl=NULL;
        }
        void creare();
        void afisare(Intrebare*);
        ~lista();
};

#endif
