// ============================================================
// 函数名称: sub_4125f0
// 虚拟地址: 0x4125f0
// WARP GUID: 75be1f5c-3bfd-50a4-a71b-d63934ed4ce2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_411b0c
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_4125f0(int32_t* arg1, void* arg2, void** arg3)
{
    // 第一条实际指令: if (arg1[6].b == 0)
    if (arg1[6].b == 0)
        return sub_411b0c(arg1, arg2)
    
    if ((*(*arg1 + 0x78))(arg3) != 0)
        return arg3
    
    return 0xffffffff
}
