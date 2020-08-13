#ifndef SYNTH_H
#define SYNTH_H

#include <SDL2/SDL.h>
#include <stdint.h>

#include <list>
#include <mutex>

const int BUF_LENGTH = 1024;
const int VOLUME_THRESHOLD = 90;

class SoundGenerator;

enum {
        VUMETER_NONE,
        VUMETER_MONO,
        VUMETER_STEREO
};

class Synth
{

public:  
  Synth();
  ~Synth();

  bool Init();
  bool BeginRecording();
  bool CheckForAudioEvent();
  bool Close();
  
  bool Test();

private:
  int ComputeMaxPeak(u_char *data, size_t count);
  void EnumerateDevices();
  void OutputAudioSpecs();
  void SetParameters();
  
  SDL_AudioSpec m_AudioSpec;
  SDL_AudioDeviceID m_device;

};

#endif
