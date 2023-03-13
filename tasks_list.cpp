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

		  if( Task_Input->Text != "")
			Task_Box->Items->Add(Task_Input->Text);

          Task_Input->Text= "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Task_BoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	Task_Box->Items->Delete(Item->Index);
}
//---------------------------------------------------------------------------

