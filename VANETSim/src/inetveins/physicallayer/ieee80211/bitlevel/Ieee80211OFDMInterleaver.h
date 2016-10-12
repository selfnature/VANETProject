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

#ifndef __INETVEINS_IEEE80211OFDMINTERLEAVER_H
#define __INETVEINS_IEEE80211OFDMINTERLEAVER_H

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/common/BitVector.h"
#include "inetveins/physicallayer/contract/bitlevel/IInterleaver.h"
#include "inetveins/physicallayer/ieee80211/bitlevel/Ieee80211OFDMInterleaving.h"

namespace inetveins {

namespace physicallayer {

/*
 * It is a IEEE 802.11 OFDM block interleaver/deinterleaver implementation.
 * The permutation equations and all the details can be found in:
 * Part 11: Wireless LAN Medium Access Control (MAC) and Physical Layer (PHY) Specifications,
 * 18.3.5.7 Data interleaving
 */
class INETVEINS_API Ieee80211OFDMInterleaver : public IInterleaver
{
  protected:
    int numberOfCodedBitsPerSymbol;
    int numberOfCodedBitsPerSubcarrier;
    int s;
    const Ieee80211OFDMInterleaving *interleaving = nullptr;

  public:
    Ieee80211OFDMInterleaver(const Ieee80211OFDMInterleaving *interleaving);

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;
    BitVector interleave(const BitVector& bits) const override;
    BitVector deinterleave(const BitVector& bits) const override;
    int getNumberOfCodedBitsPerSymbol() const { return numberOfCodedBitsPerSymbol; }
    int getNumberOfCodedBitsPerSubcarrier() const { return numberOfCodedBitsPerSubcarrier; }
    const Ieee80211OFDMInterleaving *getInterleaving() const override { return interleaving; }
};

} /* namespace physicallayer */
} /* namespace inetveins */

#endif // ifndef __INETVEINS_IEEE80211OFDMINTERLEAVER_H

