#include "DTO/Vec2.h"
#include "BLL/TextoBLL.h"
#include "BLL/InputManagerBLL.h"

#include <string.h>

//EstadoConsole = 1 Ligado.
//EStadoConsole = 2 Reset.

void DebugFunc()
{
    VDP_clearTextLine(13);
    char mensagem[100] = "Botao pressionado: ";
    char* mensagemPointer = mensagem;

    if (Up)
        mensagemPointer = strcat(mensagem,"Up ");
    if (Down)
        mensagemPointer = strcat(mensagem,"Down ");
    if (Left)
        mensagemPointer = strcat(mensagem,"Left ");
    if (Right)
        mensagemPointer = strcat(mensagem,"Right ");
    if (A)
        mensagemPointer = strcat(mensagem,"A ");
    if (B)
        mensagemPointer = strcat(mensagem,"B ");
    if (C)
        mensagemPointer = strcat(mensagem,"C ");
    if (Start)
        mensagemPointer = strcat(mensagem,"Start ");

    Vec2 posicao = Vec2_New(2, 13);
    TextoBLL texto = TextoBLL_New(mensagemPointer, &posicao);
    TextoBLL_Escreve(&texto);
}

void IniciarExecucao()
{
    SYS_disableInts();
    VDP_init();
    VDP_setScreenWidth320();
    VDP_setScreenHeight224();
    SYS_enableInts();
}

void Loop(u16 estadoConsole)
{
    DebugFunc();
}

void ExecutarGameLoop(u16 estadoConsole)
{
    while(1)
    {
        Loop(estadoConsole);
        SYS_doVBlankProcess();
    }
}

int main(u16 estadoConsole)
{
    IniciarExecucao();
    IniciarControle();
    ExecutarGameLoop(estadoConsole);
    return 0;
}