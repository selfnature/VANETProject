//
// Copyright (C) 2014 OpenSim Ltd.
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

#ifndef __INETVEINS_IEEE80211OFDMDECODERMODULE_H
#define __INETVEINS_IEEE80211OFDMDECODERMODULE_H

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/physicallayer/contract/bitlevel/IDecoder.h"
#include "inetveins/physicallayer/ieee80211/bitlevel/Ieee80211OFDMDecoder.h"
#include "inetveins/physicallayer/ieee80211/bitlevel/Ieee80211OFDMInterleaver.h"
#include "inetveins/physicallayer/common/bitlevel/AdditiveScrambler.h"
#include "inetveins/physicallayer/ieee80211/bitlevel/Ieee80211OFDMInterleaving.h"
#include "inetveins/physicallayer/common/bitlevel/ConvolutionalCoder.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API Ieee80211OFDMDecoderModule : public cSimpleModule, public IDecoder
{
  protected:
    const Ieee80211OFDMDecoder *ofdmDecoder = nullptr;
    const IScrambler *descrambler = nullptr;
    const IFECCoder *convolutionalDecoder = nullptr;
    const IInterleaver *deinterleaver = nullptr;
    const Ieee80211OFDMCode *code = nullptr;

  protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;
    virtual void handleMessage(cMessage *msg) override { throw cRuntimeError("This module doesn't handle self messages"); }

  public:
    virtual ~Ieee80211OFDMDecoderModule();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;
    const Ieee80211OFDMCode *getCode() const { return code; }
    const IReceptionPacketModel *decode(const IReceptionBitModel *bitModel) const override;
};
} /* namespace physicallayer */
} /* namespace inetveins */

#endif // ifndef __INETVEINS_IEEE80211OFDMDECODERMODULE_H

