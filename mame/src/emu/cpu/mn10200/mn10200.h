/*
    Panasonic MN10200 emulator

    Written by Olivier Galibert
    MAME conversion by R. Belmont

*/

#pragma once

#ifndef MN10200_H
#define MN10200_H

enum
{
	MN10200_PC,
	MN10200_PSW,
	MN10200_MDR,
	MN10200_D0,
	MN10200_D1,
	MN10200_D2,
	MN10200_D3,
	MN10200_A0,
	MN10200_A1,
	MN10200_A2,
	MN10200_A3,
	MN10200_NMICR,
	MN10200_IAGR
};

enum
{
	MN10200_PORT0,
	MN10200_PORT1,
	MN10200_PORT2,
	MN10200_PORT3,
	MN10200_PORT4
};

CPU_GET_INFO( mn10200 );
#define CPU_MN10200 CPU_GET_INFO_NAME( mn10200 )

CPU_DISASSEMBLE( mn10200 );

#endif
