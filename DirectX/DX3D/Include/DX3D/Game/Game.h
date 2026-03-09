#pragma once
#include <DX3D/Core/Base.h>
#include <DX3D/Core/Core.h>



namespace dx3d
{
	class Game : public Base
	{
	public:
		explicit Game(const GameDesc& desc);
		virtual ~Game() override;

		virtual void run() final;

	private:

		/* CAREFULL : Attributes Declaration Order matters here   : */

		std::unique_ptr<Logger> m_Logger{};					// 1rst attr. defined --> last being deallocated
		std::unique_ptr<GraphicsEngine> m_GraphicsEngine{}; 
		std::unique_ptr<Display> m_Display{};				// last attr. defined --> 1rst being deallocated
		bool m_IsRunning{ true };
	};
}