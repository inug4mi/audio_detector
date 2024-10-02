#include "audio_manager.h"

AudioManager::AudioManager(const std::string &audioWAV)
{
    if (!buffer.loadFromFile(audioWAV)) 
    {
        std::cerr << "Error al cargar el archivo" << std::endl;
    }
}

void AudioManager::showInfo(){
    const sf::Int16* samples = buffer.getSamples();
    std::size_t sampleCount = buffer.getSampleCount();

    // Imprime la cantidad de muestras y otras propiedades
    std::cout << "Numero de muestras: " << sampleCount << std::endl;
    std::cout << "Frecuencia de muestreo: " << buffer.getSampleRate() << " Hz" << std::endl;
    std::cout << "Canales: " << buffer.getChannelCount() << std::endl;

    for (std::size_t i = 0; i < 30; i++){
        std::cout << "muestra " << i << ": " << samples[i] << std::endl;
    }
}

