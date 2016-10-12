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

#ifndef __INETVEINS_SPHERE_H
#define __INETVEINS_SPHERE_H

#include "inetveins/common/geometry/base/ShapeBase.h"

namespace inetveins {

/**
 * This class represents a 3 dimensional sphere shape.
 */
class INETVEINS_API Sphere : public ShapeBase
{
  protected:
    double radius;

  public:
    Sphere(double radius);

    const double getRadius() const { return radius; }
    void setRadius(double radius) { this->radius = radius; }

    virtual Coord computeBoundingBoxSize() const override { return Coord(radius * 2, radius * 2, radius * 2); }
    virtual bool computeIntersection(const LineSegment& lineSegment, Coord& intersection1, Coord& intersection2, Coord& normal1, Coord& normal2) const override;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_SPHERE_H

