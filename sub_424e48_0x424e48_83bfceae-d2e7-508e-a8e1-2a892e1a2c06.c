// ============================================================
// 函数名称: sub_424e48
// 虚拟地址: 0x424e48
// WARP GUID: 83bfceae-d2e7-508e-a8e1-2a892e1a2c06
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424e48(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = (*(*arg1 - 0x10))()
    int32_t result = (*(*arg1 - 0x10))()
    
    if (arg1[0x84].b == 0)
        *(arg2 + 0xc) &= 0xfffffffd
    else
        *(arg2 + 0xc) |= 2
    
    if (*(arg1 + 0x20f) == 0)
        *(arg2 + 0xc) &= 0xfffffffb
    
    return result
}
