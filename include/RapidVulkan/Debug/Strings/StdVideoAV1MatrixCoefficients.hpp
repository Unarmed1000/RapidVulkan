#ifndef RAPIDVULKAN_DEBUG_STRINGS_STDVIDEOAV1MATRIXCOEFFICIENTS_HPP
#define RAPIDVULKAN_DEBUG_STRINGS_STDVIDEOAV1MATRIXCOEFFICIENTS_HPP
#if VK_HEADER_VERSION >= 280
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

// If you use the functionality in this file its recommended to 'WRAP' it in a hpp/cpp file combo so its only included in one file!

// Auto-generated Vulkan 1.0 C++11 RAII classes by RAIIGen (https://github.com/Unarmed1000/RAIIGen)

#include <vulkan/vulkan.h>

namespace RapidVulkan
{
  namespace Debug
  {
    inline const char* TryToString(const StdVideoAV1MatrixCoefficients& value)
    {
      switch(value)
      {
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_IDENTITY:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_IDENTITY";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_709:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_709";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_UNSPECIFIED:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_UNSPECIFIED";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_RESERVED_3:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_RESERVED_3";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_FCC:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_FCC";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_470_B_G:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_470_B_G";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_601:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_601";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_SMPTE_240:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_SMPTE_240";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_SMPTE_YCGCO:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_SMPTE_YCGCO";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_2020_NCL:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_2020_NCL";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_2020_CL:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_2020_CL";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_SMPTE_2085:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_SMPTE_2085";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_CHROMAT_NCL:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_CHROMAT_NCL";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_CHROMAT_CL:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_CHROMAT_CL";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_ICTCP:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_ICTCP";
#endif
#if VK_HEADER_VERSION >= 280
      case STD_VIDEO_AV1_MATRIX_COEFFICIENTS_INVALID:
        return "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_INVALID";
#endif
      default:
        return nullptr;
      }
    };

    inline const char* ToString(const StdVideoAV1MatrixCoefficients& value)
    {
      auto result = TryToString(value);
      return (result != nullptr ? result : "*Unknown*");
    };
  }
}

#endif
#endif
