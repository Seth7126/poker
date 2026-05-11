// ============================================================
// 函数名称: sub_429068
// 虚拟地址: 0x429068
// WARP GUID: ffbd3f4d-fed4-51b0-89d4-2c9a04812fb3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_429068(int32_t* arg1 @ eax, char arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        int32_t ebx
        ebx.w = 0xffe4
        sub_4032ac(arg1[0xe])
    
    return (*(*arg1 + 0x20))(arg3)
}
