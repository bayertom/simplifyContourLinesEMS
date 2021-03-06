// Description: Comparision of two points according to their planar coordinates

// This library is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published
// by the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this library. If not, see <http://www.gnu.org/licenses/>.


#ifndef isEqualPointByPlanarCoordinates_H
#define isEqualPointByPlanarCoordinates_H

//Comparator, are two points equal by planar coordinates?
template <typename Point>
class isEqualPointByPlanarCoordinates
{
        public:
                bool operator() ( const Point & p1, const Point & p2 ) const
                {
                        return *p1 == *p2;
                }
};


#endif
