/*
 * Copyright (c) 2017 Evan Kale
 * Email: EvanKale91@gmail.com
 * Web: www.youtube.com/EvanKale
 * Social: @EvanKale91
 *
 * This file is part of ArduinoEvanKale.
 *
 * ArduinoEvanKale is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define PAYMENT_PIN 3
#define ACTUATOR_SPEED 10

void setup() {
  pinMode(PAYMENT_PIN, OUTPUT);
}

void loop() {
  //Thrust
  digitalWrite(PAYMENT_PIN, HIGH);
  delay(100-(ACTUATOR_SPEED*3));
  //Retract
  digitalWrite(PAYMENT_PIN, LOW);
  delay(100-(ACTUATOR_SPEED*3));
}
