#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4

#define MAX 60

void initGrid(int, int);
void drawGrid();
void drawFood();
void drawSnake();
void random(int&, int&);

#endif // GAME_H_INCLUDED
