#include <DX3D/Graphics/GraphicsEngine.h>
#include <DX3D/Graphics/RenderSystem.h>

dx3d::GraphicsEngine::GraphicsEngine(const GraphicsEngineDesc& desc) : Base(desc.base)
{
	m_RenderSystem = std::make_unique<RenderSystem>(RenderSystemDesc{m_BaseLogger});
}

dx3d::GraphicsEngine::~GraphicsEngine()
{
}
