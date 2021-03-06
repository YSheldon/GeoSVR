
/*

UoB WinAODV 0.1 - An AODV (RFC 3561) protocol handler for Microsoft Windows XP
Copyright 2004 ComNets, University of Bremen

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/




/*
* Header file that provides the definitions for
* StatusPrinterThread.cpp
*
* @author : Asanga Udugama
* @date : 19-jul-2004
* @email : adu@comnets.uni-bremen.de
*
*/
#ifndef __STATUSPRINTERTHREAD__H
#define __STATUSPRINTERTHREAD__H

// WinAODV lock
extern CRITICAL_SECTION WinAODVLock;
extern LPCRITICAL_SECTION pWinAODVLock;

extern CRITICAL_SECTION LoggingLock;
extern LPCRITICAL_SECTION pLoggingLock;
extern void LogMessage(int LoggingLevel, char *pPrintStr);

DWORD WINAPI StatusPrinterThreadFunc( LPVOID pParam ); 
VOID StatusPrinterThreadInit( VOID ); 
VOID StatusPrinterThreadTerm( VOID ); 

extern int PrintStatus();

#endif // __STATUSPRINTERTHREAD__H

