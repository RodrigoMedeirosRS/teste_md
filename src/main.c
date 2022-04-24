#include "DTO/Vec2.h"
#include "BLL/TextoBLL.h"

//EstadoConsole = 1 Ligado.
//EStadoConsole = 2 Reset.

void DebugFunc()
{
    Vec2 posicao = Vec2_New(10, 13);
    TextoBLL texto = TextoBLL_New("Jheniffer, eu te amo S2", &posicao);
    TextoBLL_Escreve(&texto);
}

int main(u16 estadoConsole)
{
    IniciarExecucao();
    DebugFunc();
    ExecutarGameLoop(estadoConsole);
}

void IniciarExecucao()
{
    SYS_disableInts();
    VDP_init();
    VDP_setScreenWidth320();
    VDP_setScreenHeight224();
    SYS_enableInts();
}

void ExecutarGameLoop(u16 estadoConsole)
{
    while(1)
    {
        Loop(estadoConsole);
        SYS_doVBlankProcess();
    }
    return (0);
}

void Loop(u16 estadoConsole)
{

}
