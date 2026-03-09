#pragma once
#include <DX3D/Graphics/GraphicsResource.h>

namespace dx3d
{
	class SwapChain final : public GraphicsResource
	{
	public:
		SwapChain(const SwapChainDesc& swDesc, const GraphicsResourceDesc& grDesc);

	private:
		Microsoft::WRL::ComPtr<IDXGISwapChain> m_SwapChain{};
	};
}
