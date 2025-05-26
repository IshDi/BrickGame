#ifndef GAME_H
#define GAME_H

#define ACTION_BUTTON 32
#define TERMINATE_BUTTON 27
#define PAUSE_BUTTON 112
#define START_BUTTON 115

#include <unistd.h>

#include "brick_game/tetris/backend.h"
#include "common.h"
#include "gui/cli/console_front.h"

void updateUserAction();

#endif