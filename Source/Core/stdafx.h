﻿#pragma once

#include "Base.h"

//=============================================================================
#if SE_COMPILER_MSVC
#	pragma warning(push, 3) // Set warning levels to a quieter level for the STL
#	pragma warning(disable: 4265)
#	pragma warning(disable: 4548)
#	pragma warning(disable: 4640)
#endif

#include <cstdint>
#include <memory>
#include <functional>
#include <ostream>
#include <sstream>
#include <string>


#if defined(_DEBUG) && SE_COMPILER_MSVC
#	include <crtdbg.h>
#elif defined(_DEBUG)
#	include <cassert>
#endif

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include <glad/glad.h>
#include <GLFW/include/GLFW/glfw3.h>

#if SE_COMPILER_MSVC
#	pragma warning(pop)     // Restore warning levels for our code
#endif
//=============================================================================