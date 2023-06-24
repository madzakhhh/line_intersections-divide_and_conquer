//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <vector>
#include <iostream>
#include "pomocna.h"

using namespace std;

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *algoritamDugme;
	TButton *generisiDuzi;
	TRadioButton *duzicr;
	TImage *Slika;
	void __fastcall generisiDuziClick(TObject *Sender);
	void __fastcall algoritamDugmeClick(TObject *Sender);
	void __fastcall SlikaMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
private:	// User declarations
	int n =19;
	vector<Duz> duzi;
	vector<Tacka> tacke;
	void algoritam();
	void algoritam_rek(const vector<Duz>& duzi);

public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
