// ============================================================
// 函数名称: sub_4822b4
// 虚拟地址: 0x4822b4
// WARP GUID: 4c3fcf05-7bc8-5345-bd66-f85803945feb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47c0f0, sub_403010
// [被调用的父级函数]: sub_488509, sub_484e24
// ============================================================

void* __fastcallsub_4822b4(int32_t arg1, int32_t arg2, void* arg3 @ eax, float arg4, char arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: void* result = arg3
    void* result = arg3
    float var_20
    
    var_20 = arg6 != 3 ? 1f : 0.400000006f
    
    if (arg5 == 0)
        (*data_530034)(0xbe2)
    
    arg3.b = data_5320b8
    arg3.b |= arg5
    
    if (arg3.b != 0)
        (*data_53006c)(0xbe2)
    
    (*data_53006c)(0xb50)
    (*data_530334)(0x302, 0x303)
    (*data_530810)()
    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
        fconvert.s(data_4827ec * fconvert.t(var_20) * fconvert.t(arg4)))
    float var_14 = 0f
    
    if (arg6 == 2)
        var_14 = fconvert.s(fconvert.t(0f) - fconvert.t(0.00249999994f))
    
    int32_t var_38_1 = 0xbff80000
    int32_t var_3c = 0
    (*data_5306a4)(fconvert.d(data_482804 - fconvert.t(var_14)), 0x3f800000)
    sub_47c0f0(result)
    int32_t var_38_2 = 0
    int32_t var_3c_1 = 0
    
    if (neg.d(arg9) == 0x80000000)
        sub_403010()
        noreturn
    
    int32_t var_24 = neg.d(arg9)
    (*data_5306a4)(fconvert.d(float.t(arg1) / fconvert.t(637f)), 0x3f800000)
    
    if (arg5 != 0 || arg2 s< 0)
        (*data_53006c)(0xde1)
    
    if (arg5 == 0 && arg2 s> 0)
        if (arg2 s< 0)
            sub_403008()
            noreturn
        
        (*data_53036c)(0xde1, arg2)
    
    if (arg2 == 0xffffffff)
        (*data_530518)(0, 0, 0, fconvert.s(data_482814 * fconvert.t(var_20) * fconvert.t(arg4)))
    
    if (arg2 == 0xfffffffe)
        (*data_530518)(0, 0, 0x3f800000, 
            fconvert.s(data_482814 * fconvert.t(var_20) * fconvert.t(arg4)))
    
    if (arg5 != 0)
        (*data_530518)(0x3f800000, 0, 0, fconvert.s(fconvert.t(1f) * fconvert.t(arg4)))
    
    (*data_52ffd4)(7)
    (*data_5307f8)(0x3f000000, 0x3ecccccd)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(0, fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f)), 0)
    (*data_5307f8)(0x3f066666, 0x3ecccccd)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(0x3c003348, fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f)), 0)
    (*data_5307f8)(0x3f066666, 0x3f19999a)
    (*data_530368)(0x3c003348, 0, 0)
    (*data_5307f8)(0x3f000000, 0x3f19999a)
    (*data_530368)(0, 0, 0)
    (*data_530a08)()
    (*data_52ffd4)(7)
    (*data_5307f8)(0x3f066666, 0x3ecccccd)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(0x3c003348, fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f)), 0)
    (*data_5307f8)(0x3f19999a, 0x3ecccccd)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f) - fconvert.t(0.0078247264f)), 
        fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f)), 0)
    (*data_5307f8)(0x3f19999a, 0x3f19999a)
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f) - fconvert.t(0.0078247264f)), 0, 0)
    (*data_5307f8)(0x3f066666, 0x3f19999a)
    (*data_530368)(0x3c003348, 0, 0)
    (*data_530a08)()
    (*data_52ffd4)(7)
    (*data_5307f8)(0x3f19999a, 0x3ecccccd)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f) - fconvert.t(0.0078247264f)), 
        fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f)), 0)
    (*data_5307f8)(0x3f200000, 0x3ecccccd)
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f)), 
        fconvert.s(float.t(neg.d(arg7)) / fconvert.t(639f)), 0)
    (*data_5307f8)(0x3f200000, 0x3f19999a)
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f)), 0, 0)
    (*data_5307f8)(0x3f19999a, 0x3f19999a)
    (*data_530368)(fconvert.s(float.t(arg8) / fconvert.t(639f) - fconvert.t(0.0078247264f)), 0, 0)
    (*data_530a08)()
    
    if (*(result + 0xcf4) == 0)
        (*data_530034)(0xb50)
    
    (*data_53006c)(0xbe2)
    
    if (*(result + 0xce9) != 0)
        return result
    
    return (*data_530034)(0xde1)
}
