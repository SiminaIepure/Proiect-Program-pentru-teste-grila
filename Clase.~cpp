//---------------------------------------------------------------------------


#pragma hdrstop

#include "Clase.h"
#include <fstream.h>
  fstream fisier("Intrebari.txt");
//---------------------------------------------------------------------------


    AnsiString Intrebare::enunt()
{
        fisier>>cuvant;
        bool stop=false;
        AnsiString urmCuvant;  
        while(stop==false && cuvant!="")
        {
                urmCuvant=AnsiString(cuvant);
                enuntIntrebare=enuntIntrebare+urmCuvant+" ";
                AnsiString semn = urmCuvant.SubString(urmCuvant.Length(), urmCuvant.Length()-1);
                if(semn=="?")
                        stop=true;
                fisier>>cuvant;
        }
        return enuntIntrebare;
}

void Intrebare::citireRaspuns()
{
        AnsiString urmCuvant;
        int ct=0;
        while(ct<=4 && AnsiString(cuvant)!="")
        {
                urmCuvant=AnsiString(cuvant);
                if(ct==0)
                    while(urmCuvant.SubString(1,1)!="b")
                    {
                        raspuns1=raspuns1+urmCuvant+" ";
                        fisier>>cuvant;
                        urmCuvant=AnsiString(cuvant);
                    }
                if(ct==1)
                    while(urmCuvant.SubString(1,1)!="c")
                    {
                        raspuns2=raspuns2+urmCuvant+" ";
                        fisier>>cuvant;
                        urmCuvant=AnsiString(cuvant);
                    }

                if(ct==2)
                    while(urmCuvant.SubString(1,1)!="d")
                    {
                        raspuns3=raspuns3+urmCuvant+" ";
                        fisier>>cuvant;
                        urmCuvant= AnsiString(cuvant);
                    }
                if(ct==3)
                    while(urmCuvant.SubString(1,1)!="*")
                    {
                        raspuns4=raspuns4+urmCuvant+" ";
                        fisier>>cuvant;
                        urmCuvant=AnsiString(cuvant);
                    }
                ct++;
        }
}

void Intrebare::citireRaspunsCorect()
{
        AnsiString urmCuvant;
        fisier>>cuvant;
        while(AnsiString(cuvant)!=urmCuvant && AnsiString(cuvant)!="urmator")
        {
                urmCuvant=AnsiString(cuvant);
                raspunsCorect=raspunsCorect+urmCuvant+" ";
                fisier>>cuvant;
        }
}

AnsiString  Intrebare::getRaspuns1()
{
        return raspuns1;
}

AnsiString  Intrebare::getRaspuns2()
{
        return raspuns2;
}

AnsiString  Intrebare::getRaspuns3()
{
        return raspuns3;
}

AnsiString  Intrebare::getRaspuns4()
{
        return raspuns4;
}

AnsiString Intrebare::getRaspunsCorect()
{
        return raspunsCorect;
}

void Intrebare:: setenuntIntrebare(AnsiString enunt)
{
     enuntIntrebare=enunt;
}

AnsiString Intrebare:: getenuntIntrebare()
{
   return enuntIntrebare;
}

void lista::creare()
{
        Intrebare *p;
        int nr=0;
        while(!fisier.eof())
        {        nr++;
        if (nr!=5)
                p=new Intrebare;
                else
                p=new IntrebareRaspunsMultiplu;
                p->setenuntIntrebare(p->enunt());
                p->citireRaspuns();
                p->citireRaspunsCorect();
                if(primulEl==NULL)
                {
                        primulEl=plimbareLista=p;
                        plimbareLista->next=NULL;
                }
                else
                {
                        plimbareLista->next=p;
                        plimbareLista=p;
                        plimbareLista->next=NULL;
                }
        }
}
void Intrebare:: Raspunsuri(int nr, TCheckBox* vector[4])
{
        for (int i=0;i<=3;i++)
        if(i!=nr)
        vector[i]->Checked=false;

}
void lista::afisare(Intrebare *plimbareLista)
{
        fMain->lIntrebare->Caption=plimbareLista->getenuntIntrebare().c_str();
        fMain->cbRasp1->Caption=plimbareLista->getRaspuns1().c_str();
        fMain->cbRasp2->Caption=plimbareLista->getRaspuns2().c_str();
        fMain->cbRasp3->Caption=plimbareLista->getRaspuns3().c_str();
        fMain->cbRasp4->Caption=plimbareLista->getRaspuns4().c_str();
}

lista::~lista()
{
        while(primulEl!=NULL)
        {
                 plimbareLista=primulEl;
                 primulEl=primulEl->next;
                 delete plimbareLista;
        }

}
//---------------------------------------------------------------------------

#pragma package(smart_init)
