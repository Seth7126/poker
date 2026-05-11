// ============================================================
// 函数名称: sub_4558e4
// 虚拟地址: 0x4558e4
// WARP GUID: b72eca2e-8445-5b5e-9cb6-432954eef8a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_455a10, sub_455a48, sub_4557e0
// [被调用的父级函数]: sub_45591c
// ============================================================

int32_t* __convention("regparm")sub_4558e4(int32_t* arg1)
{
    // 第一条实际指令: int32_t i = 1
    for (int32_t i = 1; i s>= 0; i -= 1)
        sub_4557e0(arg1, i)
    
    sub_455a10(0x50, arg1[1])
    arg1[1] = 0
    return arg1
}
