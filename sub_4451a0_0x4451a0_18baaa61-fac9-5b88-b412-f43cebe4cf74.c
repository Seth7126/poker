// ============================================================
// 函数名称: sub_4451a0
// 虚拟地址: 0x4451a0
// WARP GUID: 18baaa61-fac9-5b88-b412-f43cebe4cf74
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_444f08
// [被调用的父级函数]: 无
// ============================================================

HICON __convention("regparm")sub_4451a0(void* arg1, void* arg2)
{
    // 第一条实际指令: HICON result = sub_444f08(arg1)
    HICON result = sub_444f08(arg1)
    *(arg2 + 0xc) = result
    return result
}
