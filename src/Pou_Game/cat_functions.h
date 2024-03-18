#pragma once

void catNormal();
void catEating();
void catCleaning();
void catSleeping();
void catDied();
void catClearScreen();

void catDisplayNormal(int numFrames = 6, int frameDelay = 300);
void catDisplayEating(int numFrames = 6, int frameDelay = 300);
void catDisplayCleaning(int numFrames = 6, int frameDelay = 300);
void catDisplaySleeping(int numFrames = 6, int frameDelay = 300);
void catDisplayDied(int numFrames = 4, int frameDelay = 300);