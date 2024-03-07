#pragma once

class Sleep {
public:
  double getSleepDuration();
  double getSleepQuality();

private:
  double duration;
  double quality;
};