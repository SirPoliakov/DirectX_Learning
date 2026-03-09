#include <DX3D/Game/Display.h>
#include <DX3D/Graphics/RenderSystem.h>

dx3d::Display::Display(const DisplayDesc& desc) : Window(desc.window)
{
	m_SwapChain = desc.renderSystem.RSCreateSwapChain({ m_Handle, m_Size });
}
