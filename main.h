/* simple-tetris Game
 * Built using Allegro library
 * https://github.com/initrunlevel0/simple-tetris
 *
 * Author :
 * Putu Wiramaswara Widya
 * Reinhard Ruben R.
 *
 * Created for Object Oriented Programming (KI091311) Class
 * at Informatics Departmennt, Institut Teknologi Sepuluh Nopember (ITS)
 * Surabaya, Indonesia
 */


#include <allegro.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <list>
#include <cstdlib>
#include "tinyxml2.h"


#define GAME_LOOP_SPEED_NORMAL 75
#define GAME_LOOP_SPEED_TURBO 15
#define GAME_LOOP_SPEED_TICKSPEED 50
#define GAME_CANVAS_START_X 20
#define GAME_CANVAS_START_Y 20
#define GAME_CANVAS_BACKGROUND makecol(0,0,0)
#define GAME_STATE_NEWSHAPE_COMEOUT 0
#define GAME_STATE_NEWSHAPE_FALL 1
#define GAME_MAX_X 16
#define GAME_MAX_Y 26
#define GAME_SCORE_DESTROY 50
#define GAME_SCORE_STONED 5

#define TETRIS_INTERFACE_MENU 0
#define TETRIS_INTERFACE_GAME 1
#define TETRIS_INTERFACE_HIGHSCORE 2

#define SHAPE_1A 0
#define SHAPE_1B 1
#define SHAPE_2A 2
#define SHAPE_2B 3
#define SHAPE_3A 4
#define SHAPE_3B 5
#define SHAPE_4 6
#define SHAPE_5A 7
#define SHAPE_5B 8
#define SHAPE_5C 9
#define SHAPE_5D 10
#define SHAPE_6A 11
#define SHAPE_6B 12
#define SHAPE_6C 13
#define SHAPE_6D 14
#define SHAPE_7A 15
#define SHAPE_7B 16
#define SHAPE_7C 17
#define SHAPE_7D 18

#define BLOCK_STATE_FLY 0
#define BLOCK_STATE_STONED 1
#define BLOCK_STATE_DUMMY 2

#define COLOR_WHITE makecol(255,255,255)
#define COLOR_RED makecol(255,0,0)
#define COLOR_GREEN makecol(0,255,0)
#define COLOR_BLUE makecol(0,0,255)
#define COLOR_BLACK makecol(0,0,0)

#define BLOCK_COLOR_BLACK 0
#define BLOCK_COLOR_RED 1
#define BLOCK_COLOR_YELLOW 2
#define BLOCK_COLOR_GREEN 3
#define BLOCK_COLOR_BLUE 4

#define GAME_NEXTSHAPE_START_X 420
#define GAME_NEXTSHAPE_START_Y 160
#define GAME_NEXTSHAPE_WIDTH 160
#define GAME_NEXTSHAPE_HEIGHT 160
#define GAME_NEXTSHAPE_BLOCK_START_X 50
#define GAME_NEXTSHAPE_BLOCK_START_Y 50

#define GAME_SCOREBOARD_START_X 420
#define GAME_SCOREBOARD_START_Y 50
#define GAME_SCOREBOARD_WIDTH 160
#define GAME_SCOREBOARD_HEIGHT 99
#define GAME_SCOREBOARD_PLAYERNAME_Y 60
#define GAME_SCOREBOARD_SCORE_Y 90

#define MUSIC_TOTAL_NUM 2
#define MUSIC_NUM_1 0
#define MUSIC_NUM 2 1

#define HIGHSCORE_ITEM_START_X 100
#define HIGHSCORE_ITEM_START_Y 100
#define HIGHSCORE_ITEM_HEIGHT 50
#define HIGHSCORE_SCORENUMBER 300



using namespace std;
using namespace tinyxml2;
class game;
class logic;
class control;
class canvas;
class interfacegame;
class score;
