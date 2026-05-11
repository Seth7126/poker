// ============================================================
// 函数名称: sub_482828
// 虚拟地址: 0x482828
// WARP GUID: 95c0e0f5-e089-5e53-93a2-dc07ddf6f3ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47c0f0, sub_403010
// [被调用的父级函数]: sub_488509, sub_484e24
// ============================================================

void* __fastcallsub_482828(int32_t arg1, int32_t arg2, void* arg3 @ eax, float arg4, char arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ebx = arg2
    int32_t ebx = arg2
    
    if (ebx == *(arg3 + 0x8f0))
        ebx = *(arg3 + 0x8b4)
    
    float var_1c
    
    var_1c = arg6 != 3 ? 1f : 0.400000006f
    
    if (arg5 == 0)
        (*data_530034)(0xbe2)
    
    void* eax
    eax.b = data_5320b8
    eax.b |= arg5
    
    if (eax.b != 0)
        (*data_53006c)(0xbe2)
    
    (*data_53006c)(0xb50)
    (*data_530334)(0x302, 0x303)
    (*data_530810)()
    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
        fconvert.s(fconvert.t(var_1c) * fconvert.t(arg4)))
    int32_t var_34_1 = 0xbff80000
    int32_t var_38 = 0
    (*data_5306a4)(fconvert.d(data_482d84 - fconvert.t(0f)), 0x3f800000)
    sub_47c0f0(arg3)
    int32_t var_34_2 = 0
    int32_t var_38_1 = 0
    
    if (neg.d(arg9) == 0x80000000)
        sub_403010()
        noreturn
    
    int32_t var_20 = neg.d(arg9)
    (*data_5306a4)(fconvert.d(float.t(arg1) / fconvert.t(637f)), 0x3f800000)
    
    if (arg5 != 0 || ebx s< 0)
        (*data_53006c)(0xde1)
    
    if (arg5 == 0 && ebx s> 0)
        if (ebx s< 0)
            sub_403008()
            noreturn
        
        (*data_53036c)(0xde1, ebx)
    
    if (ebx == 0xffffffff)
        (*data_530518)(0, 0, 0, fconvert.s(data_482d94 * fconvert.t(var_1c) * fconvert.t(arg4)))
    
    if (ebx == 0xfffffffe)
        (*data_530518)(0, 0, 0x3f800000, 
            fconvert.s(data_482d94 * fconvert.t(var_1c) * fconvert.t(arg4)))
    
    if (arg5 != 0)
        (*data_530518)(0x3f800000, 0, 0, fconvert.s(fconvert.t(1f) * fconvert.t(arg4)))
    
    (*data_52ffd4)(7)
    (*data_5307f8)(0x3f200000, 0x3ecccccd)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(0, fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f)), 0)
    (*data_5307f8)(0x3f400000, 0x3ecccccd)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f)), 
        fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f)), 0)
    (*data_5307f8)(0x3f400000, 0x3ef5c28f)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f)), 
        fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f) + fconvert.t(0.0078247264f)), 0)
    (*data_5307f8)(0x3f200000, 0x3ef5c28f)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(0, fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f) + fconvert.t(0.0078247264f)), 
        0)
    (*data_530a08)()
    (*data_52ffd4)(7)
    (*data_5307f8)(0x3f200000, 0x3ef5c28f)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(0, fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f) + fconvert.t(0.0078247264f)), 
        0)
    (*data_5307f8)(0x3f400000, 0x3ef5c28f)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f)), 
        fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f) + fconvert.t(0.0078247264f)), 0)
    (*data_5307f8)(0x3f400000, 0x3f3851ec)
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f)), 
        fconvert.s(fneg(fconvert.t(0.0078247264f))), 0)
    (*data_5307f8)(0x3f200000, 0x3f3851ec)
    (*data_530368)(0, fconvert.s(fneg(fconvert.t(0.0078247264f))), 0)
    (*data_530a08)()
    (*data_52ffd4)(7)
    (*data_5307f8)(0x3f200000, 0x3f3851ec)
    (*data_530368)(0, fconvert.s(fneg(fconvert.t(0.0078247264f))), 0)
    (*data_5307f8)(0x3f400000, 0x3f3851ec)
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f)), 
        fconvert.s(fneg(fconvert.t(0.0078247264f))), 0)
    (*data_5307f8)(0x3f400000, 0x3f4ccccd)
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f)), 0, 0)
    (*data_5307f8)(0x3f200000, 0x3f4ccccd)
    (*data_530368)(0, 0, 0)
    (*data_530a08)()
    
    if (*(arg3 + 0xcf4) == 0)
        (*data_530034)(0xb50)
    
    (*data_53006c)(0xbe2)
    
    if (*(arg3 + 0xce9) != 0)
        return arg3
    
    return (*data_530034)(0xde1)
}
