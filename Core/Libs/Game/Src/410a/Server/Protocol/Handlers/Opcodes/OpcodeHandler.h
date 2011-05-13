/*
 * Copyright (C) 2010-2011 Strawberry-Pr0jcts <http://www.strawberry-pr0jcts.com/>
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OPCODE_HANDLER
#define OPCODE_HANDLER

class WorldPacket;

// Max. opcode size
#define NUM_MSG_TYPES 0xFFFF

enum PacketProcessing
{
    PROCESS_INPLACE      = 0x0,                             // Not handled Client Opcodes, Server Opcodes and Opcodes before / on authentication.
    PROCESS_THREADUNSAFE = 0x2,                             // packet is not thread-safe - process it in World::UpdateSessions()
    PROCESS_THREADSAFE   = 0x3                              // Handled Movement Opcodes and handled Client Opcodes on MapUpdate.
};

enum SessionStatus
{
    STATUS_AUTHED                       = 0x0,              // Player is authenticated but not in World. ONLY CMSG!
    STATUS_LOGGEDIN                     = 0x1,              // Player is in World. ONLY MSG and CMSG!
    STATUS_TRANSFER                     = 0x2,              // Player is in World and on a transport / teleport. ONLY MSG!
    STATUS_LOGGEDIN_OR_RECENTLY_LOGGOUT = 0x3,              // Player logged out. ONLY CMSG!
    STATUS_NEVER                        = 0x4,              // Client Opcode not used or Server Opcode.
    STATUS_UNHANDLED                    = 0x5               // Unknown Opcode. NOT USED!!!
};

inline const char* LookupOpcodeName(uint32 opcodeValue)
{
    if (opcodeValue >= NUM_MSG_TYPES)
        return "Received to big opcode: " + opcodeValue;

    return "";//clientOpcodeTable[opcodeValue].name && clientServerOpcodeTable[opcodeValue].name && serverOpcodeTable[opcodeValue].name;
}

#endif
