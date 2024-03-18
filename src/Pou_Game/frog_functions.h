#pragma once

void frogNormal();
void frogEating();
void frogCleaning();
void frogSleeping();
void frogDied();
void frogClearScreen();

void frogDisplayNormal(int numFrames = 6, int frameDelay = 300);
void frogDisplayEating(int numFrames = 6, int frameDelay = 300);
void frogDisplayCleaning(int numFrames = 6, int frameDelay = 300);
void frogDisplaySleeping(int numFrames = 6, int frameDelay = 300);
void frogDisplayDied(int numFrames = 4, int frameDelay = 300);