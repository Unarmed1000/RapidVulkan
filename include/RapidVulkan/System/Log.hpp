#ifndef RAPIDVULKAN_SYSTEM_LOG_HPP
#define RAPIDVULKAN_SYSTEM_LOG_HPP
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2017-2025, Rene Thrane
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

// Define some basic logging macros.

#ifdef FSL_DEMOFRAMEWORK

#ifndef FSL_FEATURE_FSLBASE_LOG3
  #include <FslBase/Log/BasicLog.hpp>
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG(X)                               FSLBASICLOG(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_IF(cONDITION, X)                 FSLBASICLOG_IF(cONDITION, X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_WARNING(X)                       FSLBASICLOG_WARNING(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_WARNING_IF(cONDITION, X)         FSLBASICLOG_WARNING_IF(cONDITION, X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_ERROR(X)                         FSLBASICLOG_ERROR(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_ERROR_IF(cONDITION, X)           FSLBASICLOG_ERROR_IF(cONDITION, X)

  // Log statements that are only included in debug builds.
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG(X)                         FSLBASICLOG_DEBUG(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_IF(cONDITION, X)           FSLBASICLOG_DEBUG_IF(cONDITION, X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_WARNING(X)                 FSLBASICLOG_DEBUG_WARNING(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_WARNING_IF(cONDITION, X)   FSLBASICLOG_DEBUG_WARNING_IF(cONDITION, X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_ERROR(X)                   FSLBASICLOG_DEBUG_ERROR(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_ERROR_IF(cONDITION, X)     FSLBASICLOG_DEBUG_ERROR_IF(cONDITION, X)
#else
  #include <FslBase/Log/Log3Core.hpp>
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG(X)                               FSLLOG3_INFO(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_IF(cONDITION, X)                 FSLLOG3_INFO_IF(cONDITION, X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_WARNING(X)                       FSLLOG3_WARNING(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_WARNING_IF(cONDITION, X)         FSLLOG3_WARNING_IF(cONDITION, X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_ERROR(X)                         FSLLOG3_ERROR(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_ERROR_IF(cONDITION, X)           FSLLOG3_ERROR_IF(cONDITION, X)

  // Log statements that are only included in debug builds.
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG(X)                         FSLLOG3_DEBUG_INFO(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_IF(cONDITION, X)           FSLLOG3_DEBUG_IF(cONDITION, X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_WARNING(X)                 FSLLOG3_DEBUG_WARNING(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_WARNING_IF(cONDITION, X)   FSLLOG3_DEBUG_WARNING_IF(cONDITION, X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_ERROR(X)                   FSLLOG3_DEBUG_ERROR(X)
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_ERROR_IF(cONDITION, X)     FSLLOG3_DEBUG_ERROR_IF(cONDITION, X)
#endif

#else

  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG(X)                               {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_IF(cONDITION, X)                 {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_WARNING(X)                       {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_WARNING_IF(cONDITION, X)         {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_ERROR(X)                         {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_ERROR_IF(cONDITION, X)           {}

  // Log statements that are only included in debug builds.
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG(X)                         {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_IF(cONDITION, X)           {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_WARNING(X)                 {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_WARNING_IF(cONDITION, X)   {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_ERROR(X)                   {}
  // NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
  #define RAPIDVULKAN_LOG_DEBUG_ERROR_IF(cONDITION, X)     {}

#endif

#endif
