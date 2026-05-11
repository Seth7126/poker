// ============================================================
// 函数名称: sub_4935fc
// 虚拟地址: 0x4935fc
// WARP GUID: bd2afd96-9bf6-52f7-a83e-b023478ab797
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492820
// [被调用的父级函数]: sub_4933b0, sub_492c54
// ============================================================

uint32_t __convention("regparm")sub_4935fc(void* arg1)
{
    // 第一条实际指令: sub_492820(arg1)
    sub_492820(arg1)
    int32_t dwParam2
    return mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x807, 0x102, &dwParam2)
}
