#pragma once


namespace dx3d
{
	class Logger final
	{
	public:
		enum class LogLevel
		{
			Error = 0,
			Warning,
			Info
		};

		explicit Logger(LogLevel logLevel = LogLevel::Error);

		void Log(LogLevel level, const char* message) const;

	private:
		LogLevel m_LogLevel = LogLevel::Error;
	};


//-------------------------
// MACRO DEF
#define DX3DLogInfo(message)\
	GetLogger().Log((Logger::LogLevel::Info), message);\

#define DX3DLogWarning(message)\
	GetLogger().Log((Logger::LogLevel::Warning), message);\

#define DX3DLogError(message)\
	GetLogger().Log((Logger::LogLevel::Error), message);\

#define DX3DLogErrorAndThrow(message)\
{\
	DX3DLogError(message);\
	throw std::runtime_error(message);\
}

}
