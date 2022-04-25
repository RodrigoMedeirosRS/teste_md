#pragma once

#include <genesis.h>

static bool Up = 0;
static bool Down = 0;
static bool Left = 0;
static bool Right = 0;
static bool A = 0;
static bool B = 0;
static bool C = 0;
static bool Start = 0;

void AtualizarInput(u16 controle, u16 changed, u16 estado)
{
    if(controle == JOY_1)
    {
        if (estado & BUTTON_UP)
            Up = 1;
		else if (changed & BUTTON_UP)
            Up = 0;
        if (estado & BUTTON_DOWN)
            Down = 1;
		else if (changed & BUTTON_DOWN)
            Down = 0;
        if (estado & BUTTON_LEFT)
            Left = 1;
		else if (changed & BUTTON_LEFT)
            Left = 0;
        if (estado & BUTTON_RIGHT)
            Right = 1;
		else if (changed & BUTTON_RIGHT)
            Right = 0;
        if (estado & BUTTON_A)
            A = 1;
		else if (changed & BUTTON_A)
            A = 0;
        if (estado & BUTTON_B)
            B = 1;
		else if (changed & BUTTON_B)
            B = 0;
        if (estado & BUTTON_C)
            C = 1;
		else if (changed & BUTTON_C)
            C = 0;
        if (estado & BUTTON_START)
            Start = 1;
		else if (changed & BUTTON_START)
            Start = 0;
    }
}

void IniciarControle()
{
    JOY_init();
	JOY_setEventHandler(&AtualizarInput);
}