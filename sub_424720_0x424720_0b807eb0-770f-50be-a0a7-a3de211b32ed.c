// ============================================================
// 函数名称: sub_424720
// 虚拟地址: 0x424720
// WARP GUID: 0b807eb0-770f-50be-a0a7-a3de211b32ed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowLongA
// [内部子函数调用]: sub_4241e4, sub_430d2c, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424720(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x7e].b != 0 && (arg1[0x11].b & 1) == 0 && (GetWindowLongA(sub_4318d0(arg1), 0xfffffff0) & 4) == 0)
    if (arg1[0x7e].b != 0 && (arg1[0x11].b & 1) == 0
            && (GetWindowLongA(sub_4318d0(arg1), 0xfffffff0) & 4) == 0)
        sub_4241e4(arg1)
    
    return sub_430d2c(arg1)
}
