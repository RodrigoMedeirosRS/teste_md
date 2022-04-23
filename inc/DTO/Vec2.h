#pragma once

typedef struct Vec2
{
  int X;
  int Y;
} Vec2;

static Vec2 Vec2_New(int x, int y) 
{
	return (struct Vec2){.X=x, .Y=y};
}