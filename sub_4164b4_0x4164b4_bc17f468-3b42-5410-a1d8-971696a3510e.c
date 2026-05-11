// ============================================================
// 函数名称: sub_4164b4
// 虚拟地址: 0x4164b4
// WARP GUID: bc17f468-3b42-5410-a1d8-971696a3510e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403164
// [被调用的父级函数]: sub_446a2c
// ============================================================

int32_t __stdcallsub_4164b4(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, void** arg3)
{
    // 第一条实际指令: if (arg1[7] != 0)
    if (arg1[7] != 0)
        int32_t* eax_3 = arg1[7]
        return (**eax_3)(eax_3, arg2, arg3)
    
    if (sub_403164(arg1, arg2, arg3) == 0)
        return 0x80004002
    
    return 0
}
