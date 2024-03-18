#include "low_stats_check.h"
#include "library.h"
#include <string>

void low_stats_check(std::string petName, Bars &petBars) {
  if (petBars.getHunger() <= 35) {
    petBars.decreaseHealthPoints(10);
    color_text(petName + " is starving! -5 Health", 'R');
  }
  if (petBars.getHygiene() <= 35) {
    petBars.decreaseHealthPoints(10);
    color_text(petName + " is filty! -5 Health", 'R');
  }
  if (petBars.getSleep() <= 35) {
    petBars.decreaseHealthPoints(10);
    color_text(petName + " is so tired! -5 Health", 'R');
  }
}
