//
// Copyright (C) 2000 Institut fuer Telematik, Universitaet Karlsruhe
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


#ifndef VANET_MOBILITY_ACCESS_H
#define VANET_MOBILITY_ACCESS_H

#include "INETDefs.h"

#include "ModuleAccess.h"
#include "IVANETMobility.h"


/**
 * Gives access to the IVANETMobility submodule.
 */
class VANETMobilityAccess : public ModuleAccess<IVANETMobility>
{
    public:
    //VANETMobilityAccess() : VANETMobilityAccess<IVANETMobility>("vanetMobility") {}
};

#endif
