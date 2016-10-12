//
// Copyright (C) 2013 OpenSim Ltd
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

#ifndef __INETVEINS_LAYEREDPROTOCOLBASE_H
#define __INETVEINS_LAYEREDPROTOCOLBASE_H

#include "inetveins/common/lifecycle/OperationalBase.h"

namespace inetveins {

class INETVEINS_API LayeredProtocolBase : public OperationalBase
{
  public:
    static simsignal_t packetSentToUpperSignal;
    static simsignal_t packetReceivedFromUpperSignal;
    static simsignal_t packetFromUpperDroppedSignal;

    static simsignal_t packetSentToLowerSignal;
    static simsignal_t packetReceivedFromLowerSignal;
    static simsignal_t packetFromLowerDroppedSignal;

  protected:
    virtual void handleMessageWhenUp(cMessage *message) override;
    virtual void handleSelfMessage(cMessage *message);

    virtual void handleUpperCommand(cMessage *message);
    virtual void handleLowerCommand(cMessage *message);

    virtual void handleUpperPacket(cPacket *packet) = 0;
    virtual void handleLowerPacket(cPacket *packet) = 0;

    virtual bool isUpperMessage(cMessage *message) = 0;
    virtual bool isLowerMessage(cMessage *message) = 0;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_LAYEREDPROTOCOLBASE_H

