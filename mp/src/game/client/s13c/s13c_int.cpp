
#include "s13c_int.h"

static CS13CGameSystem g_S13CGameSystem;

CS13CGameSystem::CS13CGameSystem() {}

CS13CGameSystem::~CS13CGameSystem() {}

bool CS13CGameSystem::Init() 
{
    return true;    
}

void CS13CGameSystem::PostInit()
{
    
}

void CS13CGameSystem::Shutdown()
{
    
}

void CS13CGameSystem::PreRender()
{
}

// Called each frame
void CS13CGameSystem::Update(float frametime)
{
}

void CS13CGameSystem::PostRender()
{
}

CS13CGameSystem & GlobalS13CGameSystem()
{
    return g_S13CGameSystem;
}