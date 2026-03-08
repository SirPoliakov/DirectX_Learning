#include <DX3D/Core/Logger.h>
#include <iostream>

dx3d::Logger::Logger(LogLevel logLevel) : m_LogLevel(logLevel)
{
	std::clog << "DirectX 11 Training" << "\n";
	std::clog << "-------------------" << "\n";
}

void dx3d::Logger::Log(LogLevel level, const char* message) const
{
	auto logLevelToString = [](LogLevel level)
		{
			switch (level)
			{
			case LogLevel::Info: return "Info";
			case LogLevel::Warning: return "Warning";
			case LogLevel::Error: return "Error";
			default: return "Unknown";
			}
		};


	if (level > m_LogLevel) return;
	std::clog << "[DX3D " << logLevelToString(level) << "]: " << message << "\n";
}
