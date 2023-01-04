#include <Tone.h>

#define C4_DO_PIN 2
#define D4_RE_PIN 3
#define E4_MI_PIN 4
#define F4_FA_PIN 5
#define G4_SOL_PIN 6
#define A4_LA_PIN 7
#define B4_SI_PIN 8
#define C5_DO_PIN 9

#define NOTE_PLAYING_DURATION 50

#define SPEAKER_PIN 10

Tone piano;

void setup() {

  piano.begin(SPEAKER_PIN);

  pinMode(C4_DO_PIN, INPUT_PULLUP);
  pinMode(D4_RE_PIN, INPUT_PULLUP);
  pinMode(E4_MI_PIN, INPUT_PULLUP);
  pinMode(F4_FA_PIN, INPUT_PULLUP);
  pinMode(G4_SOL_PIN, INPUT_PULLUP);
  pinMode(A4_LA_PIN, INPUT_PULLUP);
  pinMode(B4_SI_PIN, INPUT_PULLUP);
  pinMode(C5_DO_PIN, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(C4_DO_PIN) == LOW) {
    piano.play(NOTE_C4,NOTE_PLAYING_DURATION);
  }

  if (digitalRead(D4_RE_PIN) == LOW) {
    piano.play(NOTE_D4,NOTE_PLAYING_DURATION);
  }
  
  if (digitalRead(E4_MI_PIN) == LOW) {
    piano.play(NOTE_E4,NOTE_PLAYING_DURATION);
  }

  if (digitalRead(F4_FA_PIN) == LOW) {
    piano.play(NOTE_F4,NOTE_PLAYING_DURATION);
  }
  
  if (digitalRead(G4_SOL_PIN) == LOW) {
    piano.play(NOTE_G4,NOTE_PLAYING_DURATION);
  }

  if (digitalRead(A4_LA_PIN) == LOW) {
    piano.play(NOTE_A4,NOTE_PLAYING_DURATION);
  }
  
  if (digitalRead(B4_SI_PIN) == LOW) {
    piano.play(NOTE_B4,NOTE_PLAYING_DURATION);
  }

  if (digitalRead(C5_DO_PIN) == LOW) {
    piano.play(NOTE_C5,NOTE_PLAYING_DURATION);
  }
}
