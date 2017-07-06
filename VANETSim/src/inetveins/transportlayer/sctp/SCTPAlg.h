//
// Copyright (C) 2008 Irene Ruengeler
// Copyright (C) 2010-2012 Thomas Dreibholz
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INETVEINS_SCTPALG_H
#define __INETVEINS_SCTPALG_H

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/transportlayer/sctp/SCTPAlgorithm.h"

namespace inetveins {

namespace sctp {

/**
 * State variables for SCTPAlg.
 */
class INETVEINS_API SCTPAlgStateVariables : public SCTPStateVariables
{
  public:
    //...
};

class INETVEINS_API SCTPAlg : public SCTPAlgorithm
{
  protected:
    SCTPAlgStateVariables *state;

  public:
    /**
     * Ctor.
     */
    SCTPAlg();

    /**
     * Virtual dtor.
     */
    virtual ~SCTPAlg();

    /**
     * Creates and returns a SCTPStateVariables object.
     */
    virtual SCTPStateVariables *createStateVariables() override;

    virtual void established(bool active) override;

    virtual void connectionClosed() override;

    virtual void processTimer(cMessage *timer, SCTPEventCode& event) override;

    virtual void sendCommandInvoked(SCTPPathVariables *path) override;

    virtual void receivedDataAck(uint32 firstSeqAcked) override;

    virtual void receivedDuplicateAck() override;

    virtual void receivedAckForDataNotYetSent(uint32 seq) override;

    virtual void sackSent() override;

    virtual void dataSent(uint32 fromseq) override;
};

} // namespace sctp

} // namespace inetveins

#endif // ifndef __INETVEINS_SCTPALG_H
