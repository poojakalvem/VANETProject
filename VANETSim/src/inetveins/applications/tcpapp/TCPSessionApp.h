//
// Copyright (C) 2004 Andras Varga
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
#ifndef __INETVEINS_TCPSESSIONAPP_H
#define __INETVEINS_TCPSESSIONAPP_H

#include <vector>

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/common/lifecycle/LifecycleOperation.h"
#include "inetveins/applications/tcpapp/TCPAppBase.h"
#include "inetveins/common/lifecycle/NodeStatus.h"

namespace inetveins {

/**
 * Single-connection TCP application.
 */
class INETVEINS_API TCPSessionApp : public TCPAppBase
{
  protected:
    // parameters
    struct Command
    {
        simtime_t tSend;
        long numBytes = 0;
        Command(simtime_t t, long n) { tSend = t; numBytes = n; }
    };
    typedef std::vector<Command> CommandVector;
    CommandVector commands;

    bool activeOpen = false;
    simtime_t tOpen;
    simtime_t tSend;
    simtime_t tClose;
    int sendBytes = 0;

    // state
    int commandIndex = -1;
    cMessage *timeoutMsg = nullptr;
    NodeStatus *nodeStatus = nullptr;

  protected:
    virtual bool isNodeUp();
    virtual bool handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback);

    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;
    virtual void finish() override;

    virtual void parseScript(const char *script);
    virtual cPacket *createDataPacket(long sendBytes);
    virtual void sendData();

    virtual void handleTimer(cMessage *msg) override;
    virtual void socketEstablished(int connId, void *yourPtr) override;
    virtual void socketDataArrived(int connId, void *yourPtr, cPacket *msg, bool urgent) override;
    virtual void socketClosed(int connId, void *yourPtr) override;
    virtual void socketFailure(int connId, void *yourPtr, int code) override;

  public:
    TCPSessionApp() {}
    virtual ~TCPSessionApp();
};

} // namespace inetveins

#endif // ifndef __INETVEINS_TCPSESSIONAPP_H
