#include <DX3D/Game/Game.h>
#include <DX3D/Window/Window.h>
#include <DX3D/Graphics/GraphicsEngine.h>
#include <DX3D/Core/Logger.h>

dx3d::Game::Game(const GameDesc& desc)  : Base({ *std::make_unique<Logger>(desc.logLevel).release() }),
					 m_Logger(&m_BaseLogger)
{
	m_GraphicsEngine = std::make_unique<GraphicsEngine>(GraphicsEngineDesc{m_BaseLogger});
	m_Display = std::make_unique<Window>(WindowDesc{m_BaseLogger});

	m_Logger->Log(Logger::LogLevel::Info, "Game Instance initialized!");
}

dx3d::Game::~Game()
{
	m_Logger->Log(Logger::LogLevel::Info, "Game Instance deallocating");
}
