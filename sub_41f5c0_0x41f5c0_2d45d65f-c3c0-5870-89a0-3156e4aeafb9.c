// ============================================================
// 函数名称: sub_41f5c0
// 虚拟地址: 0x41f5c0
// WARP GUID: 2d45d65f-c3c0-5870-89a0-3156e4aeafb9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_410b1c, sub_41d044, sub_41d040, sub_41f898
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41f5c0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    
    if (arg2 != 0 && sub_403248(arg2, 0x417bbc) == 0)
        return sub_410b1c(ecx, arg2)
    
    if (arg2 == 0)
        sub_41f898(arg1, 0, 0)
    else
        sub_41d040(arg2[8])
        sub_41d044(arg1[8])
        arg1[8] = arg2[8]
    
    return (*(*arg1 + 0x10))()
}
