// ============================================================
// 函数名称: sub_470048
// 虚拟地址: 0x470048
// WARP GUID: 87300e22-537b-5da4-8c9c-9002c7b148ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40fa94, sub_47c160
// [被调用的父级函数]: sub_47d208
// ============================================================

void* __stdcallsub_470048(int32_t* arg1 @ eax, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_14 = ebx
    int32_t __saved_edx
    int32_t __saved_edx_2 = __saved_edx
    int32_t var_10
    sub_40fa94(0xfffffffd, 0xfffffffd, &var_10)
    int32_t* ecx
    ecx.b = 0x38
    arg1[0x75]
    arg1[0x74](arg1 + 0xa96, &var_10)
    
    if (*(arg1 + 0xa42) != 0)
        int32_t eax_2
        eax_2.b = arg4
        var_10 = arg3
        arg1[0x291]
        arg1[0x290](arg2, var_10, eax_2)
    
    int32_t var_c_2 = 2
    var_10 = 1
    void* result = sub_47c160(arg1, arg1[0x268], arg1[0x269], 0)
    arg1[0x298].b = 1
    arg1[0x26c].b = 0
    return result
}
