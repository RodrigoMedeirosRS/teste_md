#include "DTO/Vec2.h"
#include "BLL/TextoBLL.h"

int main()
{
    Vec2 posicao = Vec2_New(10, 13);
    TextoBLL texto = TextoBLL_New("Jheniffer, eu te amo S2", &posicao);
    TextoBLL_Escreve(&texto);
    while(1)
    {
        //For versions prior to SGDK 1.60 use VDP_waitVSync instead.
        SYS_doVBlankProcess();
    }
    return (0);
}


