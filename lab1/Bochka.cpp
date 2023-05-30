#include "Bochka.h"

Bochka::Bochka() {
    volume = 10, concentration = 0;
}

Bochka::Bochka(int v, int c) {
    volume = v, concentration = (double)c / 100;
}

double Bochka::GetConcentration() {
    return concentration * 100;
}

void Bochka::Pereliv(Bochka & other, int mug_v) {
    concentration = (other.concentration * mug_v + this->concentration * this->volume) / (mug_v + this->volume);
    other.volume -= mug_v;
    this->volume += mug_v;
}
