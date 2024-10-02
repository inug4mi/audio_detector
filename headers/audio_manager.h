/*
This file will handle Audio events like:

from constructor parameters, asign audio

method for getting spectogram

method for getting constallation map
*/

#pragma once

#include <SFML/Audio.hpp>
#include <iostream>
#include <string>

class AudioManager {
public:
    AudioManager(const std::string &audioWAV);
    sf::SoundBuffer buffer;

    void showInfo();
};