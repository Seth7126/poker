// ============================================================
// 函数名称: sub_4647e0
// 虚拟地址: 0x4647e0
// WARP GUID: fface089-05d1-5306-b067-fad1c3b30f26
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_453460
// [被调用的父级函数]: sub_464970
// ============================================================

int32_t __fastcallsub_4647e0(void* arg1, void* arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void* eax = *(arg3 + 0x15d)
    void* eax = *(arg3 + 0x15d)
    int32_t ecx = *(eax + 0x1c)
    float* eax_1 = *(eax + (*(arg2 + 0x10) << 2) + 0x20)
    int32_t result = arg6 << 2
    int32_t* var_8_1 = arg1 + result
    int32_t var_14 = 0
    
    if (0 u< arg4)
        do
            void var_11c
            void* edx_1 = &var_11c
            int32_t* ecx_1 = var_8_1
            
            for (int32_t i = 0; i s< 8; )
                void* eax_4 = *ecx_1
                ecx_1 = &ecx_1[1]
                char* eax_5 = eax_4 + arg5
                i += 1
                *edx_1 = fconvert.s(float.t(zx.d(*eax_5) - 0x80))
                *(edx_1 + 4) = fconvert.s(float.t(zx.d(eax_5[1]) - 0x80))
                *(edx_1 + 8) = fconvert.s(float.t(zx.d(eax_5[2]) - 0x80))
                *(edx_1 + 0xc) = fconvert.s(float.t(zx.d(eax_5[3]) - 0x80))
                *(edx_1 + 0x10) = fconvert.s(float.t(zx.d(eax_5[4]) - 0x80))
                *(edx_1 + 0x14) = fconvert.s(float.t(zx.d(eax_5[5]) - 0x80))
                *(edx_1 + 0x18) = fconvert.s(float.t(zx.d(eax_5[6]) - 0x80))
                *(edx_1 + 0x1c) = fconvert.s(float.t(zx.d(eax_5[7]) - 0x80))
                edx_1 += 0x20
            
            ecx()
            void* ebx_1 = &var_11c
            int32_t i_1 = 0
            int16_t* edi_1 = (var_14 << 7) + arg7
            float* esi_15 = eax_1
            
            do
                result.w = sub_453460(fconvert.t(fconvert.s(fconvert.t(*ebx_1) * fconvert.t(*esi_15)))
                    + fconvert.t(16384.5f)).w - 0x4000
                esi_15 = &esi_15[1]
                *edi_1 = result.w
                edi_1 = &edi_1[1]
                i_1 += 1
                ebx_1 += 4
            while (i_1 s< 0x40)
            
            var_14 += 1
            arg5 += 8
        while (var_14 u< arg4)
    
    return result
}
