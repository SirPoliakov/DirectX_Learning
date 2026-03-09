#include <DX3D/Graphics/GraphicsEngine.h>
#include <DX3D/Graphics/RenderSystem.h>
using namespace dx3d;

dx3d::GraphicsEngine::GraphicsEngine(const GraphicsEngineDesc& desc) : Base(desc.base)
{
	m_RenderSystem = std::make_shared<RenderSystem>(RenderSystemDesc{ m_BaseLogger });
}

dx3d::GraphicsEngine::~GraphicsEngine()
{
}

RenderSystem& dx3d::GraphicsEngine::GetRenderSystemRef() const noexcept
{
	return *m_RenderSystem;
}
