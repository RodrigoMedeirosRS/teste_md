#pragma once

#include <genesis.h>

typedef struct Vec2
{
  u16 X;
  u16 Y;
} Vec2;

Vec2 Vec2_New(u16 x, u16 y) 
{
	return (struct Vec2){.X=x, .Y=y};
}