if(CMAKE_SIZEOF_VOID_P MATCHES 4)
	message(STATUS "32 bit architecture detected")
	set(ARCHITECTURE 32)
else()
	message(STATUS "64 bit architecture detected")
	set(ARCHITECTURE 64)
endif()

if(WIN32)
	message(STATUS "Windows system detected")
	include("${CMAKE_SOURCE_DIR}/cmake/platform/win.cmake")
elseif(UNIX)
	message(STATUS "Unix system detected")
	include("${CMAKE_SOURCE_DIR}/cmake/platform/unix.cmake")
endif()