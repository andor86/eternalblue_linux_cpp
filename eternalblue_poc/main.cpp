//
//  main.cpp
//  eternalblue_poc
//
//  Created by Zorik Cherfas on 06/08/2017.
//  Copyright © 2017 Zorik Cherfas. All rights reserved.
//

#include <iostream>
#include "packetDriver.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    

    PacketDriver *pPacketDriver = new PacketDriver();
    pPacketDriver->setDestPort(445);
    pPacketDriver->setIpAddress("10.0.2.15");
    pPacketDriver->createSocket(Protocol::PROTOCOL_UDP);
    
    
    pPacketDriver->connectSocket();
    pPacketDriver->communicateSocket();
    
    
    
    
    
    return 0;
}
