/* Copyright 2013-2015 Matt Tytel
 *
 * twytch is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * twytch is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with twytch.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TWYTCH_LOAD_SAVE_H
#define TWYTCH_LOAD_SAVE_H

#include "JuceHeader.h"

#include "twytch_engine.h"

class TwytchLoadSave {
  public:
    TwytchLoadSave(mopo::TwytchEngine* synth, CriticalSection* critical_section) :
        synth_(synth), critical_section_(critical_section) { }
    virtual ~TwytchLoadSave() { }

    var stateToVar();
    void varToState(var state);

  private:
    mopo::TwytchEngine* synth_;
    CriticalSection* critical_section_;
};

#endif  // TWYTCH_LOAD_SAVE_H
