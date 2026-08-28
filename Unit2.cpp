//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
    // configuracion de la imagen
	//ImageGrafica->Align = alClient;     // ocupa toda la pantalla
	//ImageGrafica->Stretch = true;       // mantiene sus proporciones
	//ImageGrafica->Proportional = true;  // si el usuario redimensiona la ventana, la grafica se adapta
}
//---------------------------------------------------------------------------
