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

#include "NormallyDistributedSourceEventRate.h"

namespace ecsnetpp {

Define_Module(NormallyDistributedSourceEventRate);

void NormallyDistributedSourceEventRate::initialize() {
    mean = par("mean").doubleValue();
    stddev = par("stddev").doubleValue();
}

double NormallyDistributedSourceEventRate::getMessageDelay(){
    double val = truncnormal(mean, stddev);
    std::cout << val << endl;
    return val;
}

} /* namespace ecsnetpp */
