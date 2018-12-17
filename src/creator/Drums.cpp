#include "Drums.h"

#include "../Rand.h"

using namespace steve;

Drums::Drums(Music* music) : Creator(music) {
  _channel = 9;
}
Notes Drums::get(size_t start, size_t size) const {
  Notes notes;
  size_t i(0);
  while(i<size) {
    const size_t d(time(i, size));
    uint8_t tone(Rand::next(35, 59)); // 81 for full range
    add_note(notes, 9, tone, i, d, 100);
    i += d;
  }
  return notes;
}
