// ============================================================
// 函数名称: sub_46fd7c
// 虚拟地址: 0x46fd7c
// WARP GUID: ebc9748b-e3dd-5c0c-bcd8-ef828f6bea4c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404248, sub_403df8, sub_40422c, sub_404078
// [被调用的父级函数]: sub_477368, sub_48c290, sub_4fb834, sub_4d8208, sub_48cfc8, sub_4fc3f8, sub_47c160, sub_47ab08, sub_48db58, sub_484e24, sub_477c08, sub_5207dc, sub_477bff, sub_483f98, sub_488509, sub_483958, sub_4fc834, sub_50c2d0
// ============================================================

void** __convention("regparm")sub_46fd7c(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_c = 0f
    int32_t i_1 = sub_404078(var_8)
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (*(var_8 + ebx_1 - 1) != 0xe1)
                void* eax_8
                eax_8.b = *(var_8 + ebx_1 - 1)
                
                if (eax_8.b u< 0x98 || eax_8.b u> 0x9f)
                    void* eax_13
                    eax_13.b = *(var_8 + ebx_1 - 1)
                    
                    if (eax_13.b u>= 0x97)
                        *(sub_404248(&var_8) + ebx_1 - 1) = 0x6f
                    
                    void* eax_16
                    eax_16.b = *(var_8 + ebx_1 - 1)
                    
                    if (eax_16.b == 0xfc)
                        *(sub_404248(&var_8) + ebx_1 - 1) = 0x75
                    
                    var_c = fconvert.s(
                        float.t(*(arg1 + (zx.d(*(var_8 + ebx_1 - 1)) << 1) + 0xe50)) * data_46febc
                        + fconvert.t(var_c))
                else
                    *(sub_404248(&var_8) + ebx_1 - 1) = 0x58
                    var_c = fconvert.s(
                        float.t(*(arg1 + (zx.d(*(var_8 + ebx_1 - 1)) << 1) + 0xe50)) * data_46feb0
                        + fconvert.t(var_c))
            else if (ebx_1 s< sub_404078(var_8))
                sub_404248(&var_8)[ebx_1] = 0
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    float var_c_1 = fconvert.s(data_46fec8 * fconvert.t(var_c))
    fsbase->NtTib.ExceptionList = ExceptionList
    long double (__stdcall* var_1c_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_46fea6
    void** result = &var_8
    sub_403df8(result)
    return result
}
