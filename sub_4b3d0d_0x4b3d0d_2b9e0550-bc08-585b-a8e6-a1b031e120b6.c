// ============================================================
// 函数名称: sub_4b3d0d
// 虚拟地址: 0x4b3d0d
// WARP GUID: 2b9e0550-bc08-585b-a8e6-a1b031e120b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b3d0d(void* arg1, char arg2, int16_t arg3, char arg4) __noreturn
{
    // 第一条实际指令: arg1.b ^= 0x42
    arg1.b ^= 0x42
    arg4 += arg2
    char* eax
    eax:1.b = (arg1 + 1):1.b + arg3:1.b
    *eax += arg3.b + 1
    *eax
    trap(0xd)
}
