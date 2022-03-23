//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------

using namespace std;
class TfMain : public TForm
{
__published:	// IDE-managed Components
        TLabel *lIntrebare;
        TLabel *lRasp;
        TLabel *lCorect;
        TImage *afisImg;
        TCheckBox *cbRasp1;
        TCheckBox *cbRasp2;
        TCheckBox *cbRasp3;
        TButton *btnStart;
        TButton *btnUrm;
        TCheckBox *cbRasp4;
        void __fastcall btnStartClick(TObject *Sender);
        void __fastcall cbRasp1Click(TObject *Sender);
        void __fastcall cbRasp2Click(TObject *Sender);
        void __fastcall cbRasp3Click(TObject *Sender);
        void __fastcall btnUrmClick(TObject *Sender);
        void __fastcall cbRasp4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfMain(TComponent* Owner);
        void afisareInForma();
        AnsiString raspunsuriCorecte;
};
//---------------------------------------------------------------------------

extern PACKAGE TfMain *fMain;
//---------------------------------------------------------------------------

#endif
