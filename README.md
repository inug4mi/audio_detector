# Audio detector

## What is this repository about?

- It's about recreating Shazam's music detector algorithm
- Improve coding skills

## Algorithm source (Official Paper)

https://www.ee.columbia.edu/~dpwe/papers/Wang03-shazam.pdf

## How to do it (Step by Step)

### Fase 1:

1. Load audio files in wav format or mp3.
2. Obtain audio's spectogram
3. Obtain constellation map from spectogram

Para cargar archivos de audio en C++, puedes usar bibliotecas como libsndfile, FMOD, SDL, etc. Al cargar un archivo, obtendrás información sobre la frecuencia de muestreo, el número de canales y el número de muestras

**Valores de Audio:**

En el caso de un archivo WAV, cada número en el buffer (en este caso, buffer[]) representa la amplitud del sonido en un instante de tiempo. Un valor de 0 indica el silencio, valores positivos indican el movimiento hacia arriba (pico) y negativos indican el movimiento hacia abajo (valle).

**Frecuencia de Muestreo:**

La frecuencia de muestreo determina la calidad del audio; una frecuencia más alta significa más detalles del sonido, mientras que una frecuencia más baja puede resultar en pérdida de calidad.

**Número de Canales:**

El número de canales afecta cómo se percibe el sonido. Un archivo estéreo puede dar la sensación de espacio y dirección, mientras que un archivo mono suena más centrado.

### Fase 2:
