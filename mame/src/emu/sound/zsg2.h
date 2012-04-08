/*
    ZOOM ZSG-2 custom wavetable synthesizer
*/

#pragma once

#ifndef __ZSG2_H__
#define __ZSG2_H__

READ16_DEVICE_HANDLER( zsg2_r );
WRITE16_DEVICE_HANDLER( zsg2_w );

typedef struct _zsg2_interface zsg2_interface;
struct _zsg2_interface
{
	const char *samplergn;
};

DEVICE_GET_INFO( zsg2 );
#define SOUND_ZSG2 DEVICE_GET_INFO_NAME( zsg2 )

#endif	/* __ZSG2_H__ */
