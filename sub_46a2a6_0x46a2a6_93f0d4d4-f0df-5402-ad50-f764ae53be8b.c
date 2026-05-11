// ============================================================
// 函数名称: sub_46a2a6
// 虚拟地址: 0x46a2a6
// WARP GUID: 93f0d4d4-f0df-5402-ad50-f764ae53be8b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_46a2a6(int32_t arg1, int32_t arg2, char* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    (*data_530334)(1, 1)
    
    if (arg3[0xcf4] == 0)
        (*data_530034)(0xb50)
    
    float var_c = fconvert.s(float.t(arg1) / fconvert.t(639f))
    float var_10 = fconvert.s(float.t(arg5) / fconvert.t(639f))
    (*data_530034)(0xde1)
    (*data_53006c)(0xb50)
    (*data_530034)(0xbe2)
    (*data_53036c)(0xde1, arg2)
    (*data_530518)(arg4, arg4, arg4, arg4)
    (*data_530334)(0x300, 0x301)
    (*data_52ffd4)(7)
    (*data_5307f8)(0, 0x3f800000)
    (*data_530368)(0, 0, 0)
    (*data_5307f8)(0, 0)
    (*data_530368)(0, fconvert.s(fneg(fconvert.t(var_10))), 0)
    (*data_5307f8)(0x3f800000, 0)
    (*data_530368)(var_c, fconvert.s(fneg(fconvert.t(var_10))), 0)
    (*data_5307f8)(0x3f800000, 0x3f800000)
    (*data_530368)(var_c, 0, 0)
    int32_t result = (*data_530a08)()
    
    if (arg3[0xcf4] != 0)
        return result
    
    return (*data_530034)(0xb50)
}
