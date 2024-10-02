# Audio detector

## What is this repository about?

- It's about recreating Shazam's music detector algorithm
- Improve coding skills

## Algorithm source (Official Paper)

https://www.ee.columbia.edu/~dpwe/papers/Wang03-shazam.pdf

## How to do it (Step by Step)

### Phase 1:

1. Load audio files in wav format or mp3.
2. Obtain audio's spectogram
3. Obtain constellation map from spectogram

To load audio files in C++, you can use libraries like libsndfile, FMOD, SDL, etc. When you upload a file, you will get information about the sample rate, number of channels, and number of samples

**Audio Values:**

In the case of a WAV file, each number in the buffer (in this case, buffer[]) represents the amplitude of the sound at a moment in time. A value of 0 indicates silence, positive values ​​indicate upward movement (peak), and negative values ​​indicate downward movement (valley).

**Sampling Frequency:**

The sampling rate determines the quality of the audio; A higher frequency means more sound details, while a lower frequency can result in loss of quality.

**Number of Channels:**

The number of channels affects how the sound is perceived. A stereo file can give the feeling of space and direction, while a mono file sounds more focused.

### Phase 2:
