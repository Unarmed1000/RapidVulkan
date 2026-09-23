#ifndef RAPIDVULKAN_DEBUG_STRINGS_VKGPAPERFBLOCKAMD_HPP
#define RAPIDVULKAN_DEBUG_STRINGS_VKGPAPERFBLOCKAMD_HPP
#if VK_HEADER_VERSION >= 357
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

// Auto-generated Vulkan 1.0 C++17 RAII classes by RAIIGen (https://github.com/Unarmed1000/RAIIGen)

#include <vulkan/vulkan.h>

namespace RapidVulkan::Debug
{
  constexpr const char* TryToString(const VkGpaPerfBlockAMD value) noexcept
  {
    switch (value)
    {
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_CPF_AMD:
      return "VK_GPA_PERF_BLOCK_CPF_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_IA_AMD:
      return "VK_GPA_PERF_BLOCK_IA_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_VGT_AMD:
      return "VK_GPA_PERF_BLOCK_VGT_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_PA_AMD:
      return "VK_GPA_PERF_BLOCK_PA_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_SC_AMD:
      return "VK_GPA_PERF_BLOCK_SC_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_SPI_AMD:
      return "VK_GPA_PERF_BLOCK_SPI_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_SQ_AMD:
      return "VK_GPA_PERF_BLOCK_SQ_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_SX_AMD:
      return "VK_GPA_PERF_BLOCK_SX_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_TA_AMD:
      return "VK_GPA_PERF_BLOCK_TA_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_TD_AMD:
      return "VK_GPA_PERF_BLOCK_TD_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_TCP_AMD:
      return "VK_GPA_PERF_BLOCK_TCP_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_TCC_AMD:
      return "VK_GPA_PERF_BLOCK_TCC_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_TCA_AMD:
      return "VK_GPA_PERF_BLOCK_TCA_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_DB_AMD:
      return "VK_GPA_PERF_BLOCK_DB_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_CB_AMD:
      return "VK_GPA_PERF_BLOCK_CB_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GDS_AMD:
      return "VK_GPA_PERF_BLOCK_GDS_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_SRBM_AMD:
      return "VK_GPA_PERF_BLOCK_SRBM_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GRBM_AMD:
      return "VK_GPA_PERF_BLOCK_GRBM_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GRBM_SE_AMD:
      return "VK_GPA_PERF_BLOCK_GRBM_SE_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_RLC_AMD:
      return "VK_GPA_PERF_BLOCK_RLC_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_DMA_AMD:
      return "VK_GPA_PERF_BLOCK_DMA_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_MC_AMD:
      return "VK_GPA_PERF_BLOCK_MC_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_CPG_AMD:
      return "VK_GPA_PERF_BLOCK_CPG_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_CPC_AMD:
      return "VK_GPA_PERF_BLOCK_CPC_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_WD_AMD:
      return "VK_GPA_PERF_BLOCK_WD_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_TCS_AMD:
      return "VK_GPA_PERF_BLOCK_TCS_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_ATC_AMD:
      return "VK_GPA_PERF_BLOCK_ATC_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_ATC_L2_AMD:
      return "VK_GPA_PERF_BLOCK_ATC_L2_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_MC_VM_L2_AMD:
      return "VK_GPA_PERF_BLOCK_MC_VM_L2_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_EA_AMD:
      return "VK_GPA_PERF_BLOCK_EA_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_RPB_AMD:
      return "VK_GPA_PERF_BLOCK_RPB_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_RMI_AMD:
      return "VK_GPA_PERF_BLOCK_RMI_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_UMCCH_AMD:
      return "VK_GPA_PERF_BLOCK_UMCCH_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GE_AMD:
      return "VK_GPA_PERF_BLOCK_GE_AMD";
#endif

#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GL1A_AMD:
      return "VK_GPA_PERF_BLOCK_GL1A_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GL1C_AMD:
      return "VK_GPA_PERF_BLOCK_GL1C_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GL1CG_AMD:
      return "VK_GPA_PERF_BLOCK_GL1CG_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GL2A_AMD:
      return "VK_GPA_PERF_BLOCK_GL2A_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GL2C_AMD:
      return "VK_GPA_PERF_BLOCK_GL2C_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_CHA_AMD:
      return "VK_GPA_PERF_BLOCK_CHA_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_CHC_AMD:
      return "VK_GPA_PERF_BLOCK_CHC_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_CHCG_AMD:
      return "VK_GPA_PERF_BLOCK_CHCG_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GUS_AMD:
      return "VK_GPA_PERF_BLOCK_GUS_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GCR_AMD:
      return "VK_GPA_PERF_BLOCK_GCR_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_PH_AMD:
      return "VK_GPA_PERF_BLOCK_PH_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_UTCL1_AMD:
      return "VK_GPA_PERF_BLOCK_UTCL1_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GE_DIST_AMD:
      return "VK_GPA_PERF_BLOCK_GE_DIST_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GE_SE_AMD:
      return "VK_GPA_PERF_BLOCK_GE_SE_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_DF_MALL_AMD:
      return "VK_GPA_PERF_BLOCK_DF_MALL_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_SQ_WGP_AMD:
      return "VK_GPA_PERF_BLOCK_SQ_WGP_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_PC_AMD:
      return "VK_GPA_PERF_BLOCK_PC_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GL1XA_AMD:
      return "VK_GPA_PERF_BLOCK_GL1XA_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_GL1XC_AMD:
      return "VK_GPA_PERF_BLOCK_GL1XC_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_WGS_AMD:
      return "VK_GPA_PERF_BLOCK_WGS_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_EACPWD_AMD:
      return "VK_GPA_PERF_BLOCK_EACPWD_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_EASE_AMD:
      return "VK_GPA_PERF_BLOCK_EASE_AMD";
#endif
#if VK_HEADER_VERSION >= 357
    case VK_GPA_PERF_BLOCK_RLCUSER_AMD:
      return "VK_GPA_PERF_BLOCK_RLCUSER_AMD";
#endif

    default:
      return nullptr;
    }
  }

  constexpr const char* ToString(const VkGpaPerfBlockAMD value) noexcept
  {
    const char* const result = TryToString(value);
    return (result != nullptr ? result : "*Unknown*");
  }
}

#endif
#endif
