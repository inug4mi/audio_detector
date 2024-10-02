/*
This file will handle Audio events like:

from constructor parameters, asign audio

method for getting spectogram

method for getting constallation map
*/

#pragma once

#include <iostream>
#include "sndfile.h"

class AudioManager {
public:
    AudioManager(const char *filename);

    SF_INFO sfinfo;
    SNDFILE* infile;
    float *buffer;

    void read();
    void showInfo();
    void clean();
};