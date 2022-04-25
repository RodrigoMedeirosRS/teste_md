#pragma once

#include <genesis.h>
#include "DTO/Vec2.h"

typedef struct TextoBLL
{
  Vec2* Posicao;
  char* Texto;
} TextoBLL;

TextoBLL TextoBLL_New(char* texto, Vec2* posicao) 
{
	return (struct TextoBLL){.Texto=texto, .Posicao=posicao};
}

void TextoBLL_Escreve(TextoBLL *texto)
{
    VDP_drawText(texto->Texto, texto->Posicao->X, texto->Posicao->Y);
}

void TextoBLL_Apaga(TextoBLL *texto)
{
    VDP_clearTextLine(texto->Posicao->Y);
}