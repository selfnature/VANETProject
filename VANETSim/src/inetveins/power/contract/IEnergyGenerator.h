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

#ifndef __INETVEINS_IENERGYGENERATOR_H
#define __INETVEINS_IENERGYGENERATOR_H

#include "inetveins/power/base/PowerDefs.h"

namespace inetveins {

namespace power {

/**
 * This is an interface that should be implemented by energy generators models
 * to integrate with other parts of the power model. Energy generators should
 * connect to an energy sink that will absorb the generated energy. They should
 * also notify the energy sink when the amount of generated power changes.
 *
 * See the corresponding NED file for more details.
 *
 * @author Levente Meszaros
 */
class INETVEINS_API IEnergyGenerator
{
  public:
    virtual ~IEnergyGenerator() {}

    /**
     * Returns the current power generation in the range [0, +infinity).
     */
    virtual W getPowerGeneration() const = 0;
};

} // namespace power

} // namespace inetveins

#endif // ifndef __INETVEINS_IENERGYGENERATOR_H

