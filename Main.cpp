//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "Clase.h"
#include <fstream.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfMain *fMain;

using namespace std;


AnsiString img[6];
int nrIntrebare;
int raspCorect=0;
lista c;
//---------------------------------------------------------------------------



void TfMain::afisareInForma()
{
        bool corect = true;
        lCorect->Visible=false;
        raspunsuriCorecte=c.plimbareLista->getRaspunsCorect();

        if(cbRasp1->Checked==true)
        {
                AnsiString enuntCB;
                      enuntCB=cbRasp1->Caption;
                if(raspunsuriCorecte.SubString(1,enuntCB.Length())==enuntCB)
                        raspunsuriCorecte=raspunsuriCorecte.SubString(1+enuntCB.Length(),raspunsuriCorecte.Length()-1);
                else
                        corect=false;
        }

        if(cbRasp2->Checked==true)
        {
                AnsiString enuntCB;
                enuntCB=cbRasp2->Caption;
                if(raspunsuriCorecte.SubString(1,enuntCB.Length())==enuntCB)
                        raspunsuriCorecte=raspunsuriCorecte.SubString(1+enuntCB.Length(),raspunsuriCorecte.Length()-1);
                else
                        corect=false;
        }

        if(cbRasp3->Checked==true)
        {
                AnsiString enuntCB;
                enuntCB = cbRasp3->Caption;
                if(raspunsuriCorecte.SubString(1,enuntCB.Length())==enuntCB)
                        raspunsuriCorecte=raspunsuriCorecte.SubString(1+enuntCB.Length(),raspunsuriCorecte.Length()-1);
                else
                        corect=false;
        }

        if(cbRasp4->Checked==true)
        {
                AnsiString enuntCB;
                enuntCB=cbRasp4->Caption;
                if(raspunsuriCorecte.SubString(1,enuntCB.Length())==enuntCB)
                        raspunsuriCorecte=raspunsuriCorecte.SubString(1+enuntCB.Length(),raspunsuriCorecte.Length()-1);
                else
                    corect=false;
        }

        if(corect==true && raspunsuriCorecte=="")
        {
                fMain->lRasp->Caption="Corect!";
                raspCorect++;
        }
        else
                fMain->lRasp->Caption="Raspunsul corect este: "+c.plimbareLista->getRaspunsCorect();
}

//---------------------------------------------------------------------------
__fastcall TfMain::TfMain(TComponent* Owner)
        : TForm(Owner)
{
        img[1]="intrebarea 1.jpg";
        img[2]="intrebarea 2.jpg";
        img[3]="intrebarea 3.jpg";
        img[4]="intrebarea 4.jpg";
        img[5]="intrebarea 5.jpg";
        btnUrm->Enabled=false;
        cbRasp1->Enabled=false;
        cbRasp2->Enabled=false;
        cbRasp3->Enabled=false;
        cbRasp4->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TfMain::btnStartClick(TObject *Sender)
{
        nrIntrebare=1;
        afisImg->Picture->LoadFromFile(img[nrIntrebare].c_str());
        c.creare();
        c.plimbareLista=c.primulEl;
        c.afisare(c.plimbareLista);
        btnStart->Enabled=false;
        afisImg->Visible=true;
        raspCorect=0;
        lCorect->Visible=false;
        cbRasp1->Enabled=true;
        cbRasp2->Enabled=true;
        cbRasp3->Enabled=true;
        cbRasp4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TfMain::btnUrmClick(TObject *Sender)
{
        if(c.plimbareLista->next != NULL)
        {
             nrIntrebare++;
             afisImg->Picture->LoadFromFile(img[nrIntrebare]);
             afisareInForma();
             c.plimbareLista=c.plimbareLista->next;
             c.afisare(c.plimbareLista);
        }

        else
        {
             afisareInForma();
             cbRasp1->Enabled=false;
             cbRasp2->Enabled=false;
             cbRasp3->Enabled=false;
             cbRasp4->Enabled=false;
             fMain->lCorect->Visible=true;
             lCorect->Caption="Nr raspunsuri corecte:" + AnsiString(raspCorect);
             btnStart->Enabled=true;
        }
        
        cbRasp1->Checked=false;
        cbRasp2->Checked=false;
        cbRasp3->Checked=false;
        cbRasp4->Checked=false;
        btnUrm->Enabled=false;

}
//---------------------------------------------------------------------------

void __fastcall TfMain::cbRasp1Click(TObject *Sender)
{
        btnUrm->Enabled=true;
        TCheckBox* vector[4];
        vector[0]=cbRasp1;
         vector[1]=cbRasp2;
          vector[2]=cbRasp3;
           vector[3]=cbRasp4;
           c.plimbareLista->Raspunsuri(0,vector);    //tratare uniforma




}
//---------------------------------------------------------------------------

void __fastcall TfMain::cbRasp2Click(TObject *Sender)
{
        btnUrm->Enabled=true;
          TCheckBox* vector[4];
        vector[0]=cbRasp1;
         vector[1]=cbRasp2;
          vector[2]=cbRasp3;
           vector[3]=cbRasp4;
           c.plimbareLista->Raspunsuri(1,vector);
}
//---------------------------------------------------------------------------

void __fastcall TfMain::cbRasp3Click(TObject *Sender)
{
        btnUrm->Enabled=true;
        TCheckBox* vector[4];
        vector[0]=cbRasp1;
         vector[1]=cbRasp2;
          vector[2]=cbRasp3;
           vector[3]=cbRasp4;
           c.plimbareLista->Raspunsuri(2,vector);
}
//---------------------------------------------------------------------------

void __fastcall TfMain::cbRasp4Click(TObject *Sender)
{
       btnUrm->Enabled=true;
       TCheckBox* vector[4];
        vector[0]=cbRasp1;
         vector[1]=cbRasp2;
          vector[2]=cbRasp3;
           vector[3]=cbRasp4;
           c.plimbareLista->Raspunsuri(3,vector);
}
//---------------------------------------------------------------------------


