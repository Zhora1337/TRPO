//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Pie(0,0, 20,20, 20,0, 0,0);
	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Rectangle(20, 20, 100, 100);
}
//---------------------------------------------------------------------------
