#pragma once

#include "plbase/PluginBase_SA.h"
#include "FxSphere_c.h"
#include "FxPlane_c.h"

class FxFrustumInfo_c {
public:
    FxSphere_c m_sphere;
	FxPlane_c m_planes[4];

    bool IsCollision(FxSphere_c* sphere);
};

VALIDATE_SIZE(FxFrustumInfo_c, 0x54);