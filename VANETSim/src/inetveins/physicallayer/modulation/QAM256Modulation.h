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

#ifndef __INETVEINS_QAM256MODULATION_H
#define __INETVEINS_QAM256MODULATION_H

#include "inetveins/physicallayer/base/packetlevel/MQAMModulationBase.h"

namespace inetveins {

namespace physicallayer {

/**
 * This modulation implements gray coded rectangular quadrature amplitude
 * modulation with 256 symbols.
 *
 * http://en.wikipedia.org/wiki/Quadrature_amplitude_modulation
 */
class INETVEINS_API QAM256Modulation : public MQAMModulationBase
{
  public:
    static const QAM256Modulation singleton;

  protected:
    static const std::vector<APSKSymbol> constellation;

  public:
    QAM256Modulation();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override { return stream << "QAM256Modulation"; }
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_QAM256MODULATION_H

