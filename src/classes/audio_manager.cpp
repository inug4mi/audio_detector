#include "../headers/audio_manager.h"

AudioManager::AudioManager(const char *filename) {
    infile = sf_open(filename, SFM_READ, &sfinfo);
    if (infile == nullptr){
        std::cerr << "Error openig file: " << sf_strerror(nullptr) << std::endl;
    }
}

void AudioManager::read(){
    float *buffer = new float[sfinfo.frames * sfinfo.channels];
    sf_readf_float(infile, buffer, sfinfo.frames);
}

void AudioManager::showInfo(){
    std::cout << "Número de canales: " << sfinfo.channels << std::endl;
    std::cout << "Frecuencia de muestreo: " << sfinfo.samplerate << std::endl;
    std::cout << "Número de muestras: " << sfinfo.frames << std::endl;
}

void AudioManager::clean(){
    delete[] buffer;
    sf_close(infile);
}