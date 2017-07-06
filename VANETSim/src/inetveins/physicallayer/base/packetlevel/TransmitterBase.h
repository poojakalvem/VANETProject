//
// Copyright (C) 2013 OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INETVEINS_TRANSMITTERBASE_H
#define __INETVEINS_TRANSMITTERBASE_H

#include "inetveins/physicallayer/contract/packetlevel/ITransmitter.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API TransmitterBase : public cModule, public virtual ITransmitter
{
  protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }

  public:
    virtual W getMaxPower() const override { return W(NaN); }
    virtual m getMaxCommunicationRange() const override { return m(NaN); }
    virtual m getMaxInterferenceRange() const override { return m(NaN); }
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_TRANSMITTERBASE_H
