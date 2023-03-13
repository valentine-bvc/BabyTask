//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "tasks_list.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Add_ButtonClick(TObject *Sender)
{
		  String tasktext=  Task_Input->Text;
		  if( tasktext!= "")
			Task_Box->Items->Add(tasktext);

          Task_Input->Text= "";
}
//---------------------------------------------------------------------------

