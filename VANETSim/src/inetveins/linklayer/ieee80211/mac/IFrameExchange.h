//
// Copyright (C) 2015 Andras Varga
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//
// Author: Andras Varga
//

#ifndef __INETVEINS_IFRAMEEXCHANGE_H
#define __INETVEINS_IFRAMEEXCHANGE_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {
namespace ieee80211 {

class Ieee80211Frame;

/**
 * Abstract interface for frame exchange classes. Frame exchanges are a basic
 * building block of UpperMac (see IUpperMac), and coordinate frame sequences.
 */
class INETVEINS_API IFrameExchange
{
    public:
        class INETVEINS_API IFinishedCallback {
            public:
                virtual void frameExchangeFinished(IFrameExchange *what, bool successful) = 0;
                virtual ~IFinishedCallback() {}
        };

        enum FrameProcessingResult { IGNORED, PROCESSED_DISCARD, PROCESSED_KEEP };

    public:
        virtual ~IFrameExchange() {}
        virtual void start() = 0;
        virtual FrameProcessingResult lowerFrameReceived(Ieee80211Frame *frame) = 0;
        virtual void corruptedOrNotForUsFrameReceived() = 0;
};

} // namespace ieee80211
} // namespace inetveins

#endif
