// ============================================================
// 函数名称: sub_490c64
// 虚拟地址: 0x490c64
// WARP GUID: a6750094-5bad-5030-b41f-9b9b444e60a7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_490768
// [被调用的父级函数]: sub_519df0
// ============================================================

int32_t __convention("regparm")sub_490c64(void** arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[4]
    int32_t* eax = arg1[4]
    int32_t __saved_ecx
    return *(sub_490768(arg1, "GetVol", (*(*eax + 0x18))(eax, &__saved_ecx)) - 4)
}
