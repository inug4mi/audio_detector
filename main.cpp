#include <iostream>
#include "audio_manager.h"
#include <windows.h>

int main(){
    AudioManager audioManager("songs/hitHurt.wav");
    audioManager.showInfo();
    return 0;
}