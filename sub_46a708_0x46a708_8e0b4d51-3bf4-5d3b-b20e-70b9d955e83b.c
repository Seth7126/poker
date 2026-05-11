// ============================================================
// 函数名称: sub_46a708
// 虚拟地址: 0x46a708
// WARP GUID: 8e0b4d51-3bf4-5d3b-b20e-70b9d955e83b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_46c3d0, sub_488509, sub_484e24, sub_4fc834
// ============================================================

int32_t __fastcallsub_46a708(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: if (*(arg3 + 0xcf4) == 0)
    if (*(arg3 + 0xcf4) == 0)
        if (neg.d(arg4) == 0x80000000)
            sub_403010()
            noreturn
        
        (*data_5301d4)(fconvert.s(float.t(arg5) / fconvert.t(497f)), 
            fconvert.s(float.t(neg.d(arg4)) / fconvert.t(497f)), 0)
    
    (*data_530034)(0xb50)
    float var_10 = fconvert.s(float.t(arg1) / fconvert.t(639f))
    float var_14 = fconvert.s(float.t(arg7) / fconvert.t(639f))
    (*data_530034)(0xde1)
    (*data_53006c)(0xb50)
    (*data_530034)(0xbe2)
    (*data_53036c)(0xde1, arg2)
    (*data_530518)(arg6, arg6, arg6, arg6)
    (*data_530334)(0x302, 0x303)
    (*data_52ffd4)(7)
    (*data_5307f8)(0, 0x3f800000)
    (*data_530368)(0, 0, 0)
    (*data_5307f8)(0, 0)
    (*data_530368)(0, fconvert.s(fneg(fconvert.t(var_14))), 0)
    (*data_5307f8)(0x3f800000, 0)
    (*data_530368)(var_10, fconvert.s(fneg(fconvert.t(var_14))), 0)
    (*data_5307f8)(0x3f800000, 0x3f800000)
    (*data_530368)(var_10, 0, 0)
    (*data_530a08)()
    
    if (neg.d(arg5) == 0x80000000)
        sub_403010()
        noreturn
    
    int32_t result = (*data_5301d4)(fconvert.s(float.t(neg.d(arg5)) / fconvert.t(497f)), 
        fconvert.s(float.t(arg4) / fconvert.t(497f)), 0)
    
    if (*(arg3 + 0xcf4) != 0)
        return result
    
    return (*data_530034)(0xb50)
}
