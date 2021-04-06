#ifndef RAPIDVULKAN_CHECK_HPP
#define RAPIDVULKAN_CHECK_HPP
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2016, Rene Thrane
//* All rights reserved.
//*
//* Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
//*
//* 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
//* 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the
//*    documentation and/or other materials provided with the distribution.
//* 3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this
//*    software without specific prior written permission.
//*
//* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//* THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
//* CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
//* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
//* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//***************************************************************************************************************************************************

#include <RapidVulkan/CheckError.hpp>

// Define some ease of use macros for logging.
// Please beware that these are not pulled in by any of the RAII classes, so its 100% up to the user of the library to include it
// if the functionality is desired.

#define RAPIDVULKAN_CHECK(X)                  RapidVulkan::CheckError((X), #X, __FILE__, __LINE__)
#define RAPIDVULKAN_CHECK2(X, mESSAGE)        RapidVulkan::CheckError((X), (mESSAGE), __FILE__, __LINE__)

// The Vulkan version this was based on
#define RAPIDVULKAN_VULKAN_VERSION_MAJOR   1
#define RAPIDVULKAN_VULKAN_VERSION_MINOR   2
#define RAPIDVULKAN_VULKAN_VERSION_BUILD   170
#define RAPIDVULKAN_VULKAN_VERSION_HOTFIX  0

#endif
