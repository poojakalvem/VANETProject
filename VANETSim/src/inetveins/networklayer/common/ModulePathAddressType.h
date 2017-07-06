//
// Copyright (C) 2012 Opensim Ltd.
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

#ifndef __INETVEINS_MODULEPATHADDRESSTYPE_H
#define __INETVEINS_MODULEPATHADDRESSTYPE_H

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/networklayer/contract/IL3AddressType.h"
#include "inetveins/networklayer/common/ModulePathAddress.h"
#include "inetveins/networklayer/contract/generic/GenericNetworkProtocolControlInfo.h"

namespace inetveins {

class INETVEINS_API ModulePathAddressType : public IL3AddressType
{
  public:
    static ModulePathAddressType INSTANCE;

  public:
    ModulePathAddressType() {}
    virtual ~ModulePathAddressType() {}

    virtual int getAddressBitLength() const override { return 64; }     // change to your choice
    virtual int getMaxPrefixLength() const override { return 0; }    // TODO: support address prefixes
    virtual L3Address getUnspecifiedAddress() const override { return ModulePathAddress(); }
    virtual L3Address getBroadcastAddress() const override { return ModulePathAddress(-1); }
    virtual L3Address getLinkLocalManetRoutersMulticastAddress() const override { return ModulePathAddress(-109); }    // TODO: constant
    virtual L3Address getLinkLocalRIPRoutersMulticastAddress() const override { return ModulePathAddress(-9); }    // TODO: constant
    virtual INetworkProtocolControlInfo *createNetworkProtocolControlInfo() const override { return new GenericNetworkProtocolControlInfo(); }
    virtual L3Address getLinkLocalAddress(const InterfaceEntry *ie) const override { return ModulePathAddress(); }    // TODO constant
};

} // namespace inetveins

#endif // ifndef __INETVEINS_MODULEPATHADDRESSTYPE_H
