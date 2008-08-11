/*
 
 File:			WaveDriverUSBRalinkRT2570.h
 Program:		KisMAC
 Author:		pr0gg3d
 Description:	KisMAC is a wireless stumbler for MacOS X.
 
 This file is part of KisMAC.
 
 KisMAC is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 KisMAC is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with KisMAC; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#import <Foundation/Foundation.h>
#import "WaveDriverUSB.h"
#import "../Driver/USBJack/RalinkJack.h"


@interface WaveDriverUSBRalinkRT2570 : WaveDriverUSB {
}

- (id)initAsMaster;
//- (id)initWithMaster: (WaveDriverUSBIntersil) master;
@end
