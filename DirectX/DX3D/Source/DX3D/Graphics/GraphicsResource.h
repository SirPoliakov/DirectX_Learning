#pragma once
#include <DX3D/Core/Common.h>
#include <DX3D/Core/Base.h>
#include <DX3D/Graphics/GraphicsLogUtils.h>

#include <d3d11.h>
#include <wrl.h>

namespace dx3d
{
	struct GraphicsResourceDesc
	{
		BaseDesc base;
		std::shared_ptr<const RenderSystem> renderSystem;
		ID3D11Device& device;
		IDXGIFactory& factory;
	};

	class GraphicsResource : public Base
	{
	public:
		explicit GraphicsResource(const GraphicsResourceDesc& desc) :
			Base(desc.base),
			m_RenderSystem(desc.renderSystem),
			m_Device(desc.device),
			m_Factory(desc.factory)
		{
		}

	protected:
		std::shared_ptr<const RenderSystem> m_RenderSystem;
		ID3D11Device& m_Device;
		IDXGIFactory& m_Factory;
	};
}