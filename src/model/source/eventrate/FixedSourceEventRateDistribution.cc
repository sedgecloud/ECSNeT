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

#include "FixedSourceEventRateDistribution.h"

namespace ecsnetpp {

Define_Module(FixedSourceEventRateDistribution);

void FixedSourceEventRateDistribution::initialize() {
    rate = getAncestorPar("fixedSourceEventRate").doubleValue();
    if (rate > 0) {
        messageDelay = 1 / rate;
    } else {
        throw cRuntimeError("Event rate is not set for the source : %s", getFullPath().c_str());
    }
}

double FixedSourceEventRateDistribution::getMessageDelay() {
    return messageDelay;
}

} //namespace
