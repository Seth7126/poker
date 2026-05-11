// ============================================================
// 函数名称: sub_426ab0
// 虚拟地址: 0x426ab0
// WARP GUID: b04cb5f0-98f0-5b5b-b066-45dedf60f7ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410b1c, sub_426a2c, sub_4269a8, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_426ab0(BOOL arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, 0x4177d8) != 0)
    if (sub_403248(arg2, 0x4177d8) != 0)
        return sub_4269a8(arg1, arg2)
    
    int32_t ecx
    
    if (sub_403248(arg2, 0x4176f4) == 0)
        return sub_410b1c(ecx, arg2)
    return sub_426a2c(arg1, arg2)
}
