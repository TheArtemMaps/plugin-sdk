/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlaneBanner.h"


void CPlaneBanner::Render()
{
    plugin::Call<0x54C830>();
}

void CPlaneBanner::Update()
{
    plugin::Call<0x54C730>();
}