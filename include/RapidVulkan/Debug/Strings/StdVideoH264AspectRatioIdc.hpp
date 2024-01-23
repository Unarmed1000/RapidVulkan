#ifndef RAPIDVULKAN_DEBUG_STRINGS_STDVIDEOH264ASPECTRATIOIDC_HPP
#define RAPIDVULKAN_DEBUG_STRINGS_STDVIDEOH264ASPECTRATIOIDC_HPP
#if VK_HEADER_VERSION >= 239
//***************************************************************************************************************************************************
//* BSD 3-Clause License
//*
//* Copyright (c) 2017, Rene Thrane
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
    inline const char* TryToString(const StdVideoH264AspectRatioIdc& value)
    {
      switch(value)
      {
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_UNSPECIFIED:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_UNSPECIFIED";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_SQUARE:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_SQUARE";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_12_11:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_12_11";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_10_11:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_10_11";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_16_11:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_16_11";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_40_33:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_40_33";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_24_11:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_24_11";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_20_11:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_20_11";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_32_11:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_32_11";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_80_33:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_80_33";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_18_11:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_18_11";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_15_11:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_15_11";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_64_33:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_64_33";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_160_99:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_160_99";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_4_3:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_4_3";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_3_2:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_3_2";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_2_1:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_2_1";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_EXTENDED_SAR:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_EXTENDED_SAR";
#endif
#if VK_HEADER_VERSION >= 239
      case STD_VIDEO_H264_ASPECT_RATIO_IDC_INVALID:
        return "STD_VIDEO_H264_ASPECT_RATIO_IDC_INVALID";
#endif
      default:
        return nullptr;
      }
    };

    inline const char* ToString(const StdVideoH264AspectRatioIdc& value)
    {
      auto result = TryToString(value);
      return (result != nullptr ? result : "*Unknown*");
    };
  }
}

#endif
#endif
