#pragma once

#include <genesis.h>
#include "DTO/Vec2.h"

typedef struct TextoBLL
{
  Vec2* Posicao;
  char* Texto;
} TextoBLL;

static TextoBLL TextoBLL_New(char* texto, Vec2* posicao) 
{
	return (struct TextoBLL){.Texto=texto, .Posicao=posicao};
}

static void TextoBLL_Escreve(TextoBLL *texto)
{
    VDP_drawText(texto->Texto, texto->Posicao->X, texto->Posicao->Y);
}