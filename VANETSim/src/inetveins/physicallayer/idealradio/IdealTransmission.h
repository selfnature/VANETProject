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

#ifndef __INETVEINS_IDEALTRANSMISSION_H
#define __INETVEINS_IDEALTRANSMISSION_H

#include "inetveins/physicallayer/base/packetlevel/TransmissionBase.h"

namespace inetveins {

namespace physicallayer {

/**
 * This model characterizes transmissions with the communication range,
 * interference range, and detection range.
 */
class INETVEINS_API IdealTransmission : public TransmissionBase
{
  protected:
    const m maxCommunicationRange;
    const m maxInterferenceRange;
    const m maxDetectionRange;

  public:
    IdealTransmission(const IRadio *transmitter, const cPacket *macFrame, const simtime_t startTime, const simtime_t endTime, const simtime_t preambleDuration, const simtime_t headerDuration, const simtime_t dataDuration, const Coord startPosition, const Coord endPosition, const EulerAngles startOrientation, const EulerAngles endOrientation, m maxCommunicationRange, m maxInterferenceRange, m maxDetectionRange);

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;

    virtual m getMaxCommunicationRange() const { return maxCommunicationRange; }
    virtual m getMaxInterferenceRange() const { return maxInterferenceRange; }
    virtual m getMaxDetectionRange() const { return maxDetectionRange; }
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IDEALTRANSMISSION_H

