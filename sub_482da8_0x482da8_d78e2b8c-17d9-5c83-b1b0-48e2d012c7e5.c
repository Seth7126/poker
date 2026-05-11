// ============================================================
// 函数名称: sub_482da8
// 虚拟地址: 0x482da8
// WARP GUID: d78e2b8c-17d9-5c83-b1b0-48e2d012c7e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47c0f0, sub_403010
// [被调用的父级函数]: sub_488509, sub_484e24
// ============================================================

int32_t __fastcallsub_482da8(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, float arg5, float arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: (*data_530034)(0xbe2)
    (*data_530034)(0xbe2)
    (*data_53006c)(0xb50)
    (*data_530334)(0x302, 0x303)
    (*data_530810)()
    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, arg4)
    float var_10 = 0f
    
    if (arg7 == 2)
        var_10 = fconvert.s(fconvert.t(0f) - fconvert.t(0.00249999994f))
    
    int32_t var_40_1 = 0xbff80000
    int32_t var_44 = 0
    (*data_5306a4)(fconvert.d(data_48310c - fconvert.t(var_10)), 0x3f800000)
    sub_47c0f0(arg3)
    int32_t var_40_2 = 0
    int32_t var_44_1 = 0
    
    if (neg.d(arg10) == 0x80000000)
        sub_403010()
        noreturn
    
    int32_t var_2c = neg.d(arg10)
    (*data_5306a4)(fconvert.d(float.t(arg1) / fconvert.t(637f)), 0x3f800000)
    int32_t var_40_3 = 0
    int32_t var_44_2 = 0
    
    if (neg.d(arg8) == 0x80000000)
        sub_403010()
        noreturn
    
    int32_t var_2c_1 = neg.d(arg8)
    (*data_5306a4)(fconvert.d(float.t(arg9) * fconvert.t(0.5f) / fconvert.t(637f)), 0x3f800000)
    float var_18 = fconvert.s(fconvert.t(arg5) - fconvert.t(arg6))
    
    if (arg2 s< 0)
        sub_403008()
        noreturn
    
    (*data_53036c)(0xde1, arg2)
    (*data_52ffd4)(7)
    (*data_5307f8)(arg6, 0)
    
    if (neg.d(arg8) == 0x80000000)
        sub_403010()
        noreturn
    
    if (neg.d(arg9) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(fconvert.s(float.t(neg.d(arg9)) / fconvert.t(639f) / fconvert.t(2f)), 
        fconvert.s(float.t(neg.d(arg8)) / fconvert.t(639f) / fconvert.t(2f)), 0)
    (*data_5307f8)(fconvert.s(fconvert.t(arg6) + fconvert.t(var_18)), 0)
    
    if (neg.d(arg8) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(fconvert.s(float.t(arg9) / fconvert.t(639f) / fconvert.t(2f)), 
        fconvert.s(float.t(neg.d(arg8)) / fconvert.t(639f) / fconvert.t(2f)), 0)
    (*data_5307f8)(fconvert.s(fconvert.t(arg6) + fconvert.t(var_18)), 
        fconvert.s(fconvert.t(0f) + fconvert.t(1f)))
    (*data_530368)(fconvert.s(float.t(arg9) / fconvert.t(639f) / fconvert.t(2f)), 
        fconvert.s(float.t(arg8) / fconvert.t(639f) / fconvert.t(2f)), 0)
    (*data_5307f8)(arg6, fconvert.s(fconvert.t(0f) + fconvert.t(1f)))
    
    if (neg.d(arg9) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(fconvert.s(float.t(neg.d(arg9)) / fconvert.t(639f) / fconvert.t(2f)), 
        fconvert.s(float.t(arg8) / fconvert.t(639f) / fconvert.t(2f)), 0)
    (*data_530a08)()
    
    if (*(arg3 + 0xcf4) == 0)
        (*data_530034)(0xb50)
    
    int32_t result = (*data_53006c)(0xbe2)
    
    if (*(arg3 + 0xce9) != 0)
        return result
    
    return (*data_530034)(0xde1)
}
