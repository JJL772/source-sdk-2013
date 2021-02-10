
#include "tier0/basetypes.h"
#include "igamesystem.h"

class CS13CGameSystem : CBaseGameSystemPerFrame
{
public:
    CS13CGameSystem();
    ~CS13CGameSystem();

    const char* Name() { return "S13GameSystem"; };

    // Called before rendering
	void PreRender() override;

	// Gets called each frame
	void Update( float frametime ) override;

	// Called after rendering
	void PostRender() override;
    
    bool Init() override;
	void PostInit() override;
	void Shutdown() override;
};

CS13CGameSystem& GlobalS13CGameSystem();