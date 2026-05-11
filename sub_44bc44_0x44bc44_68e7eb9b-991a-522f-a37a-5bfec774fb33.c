// ============================================================
// 函数名称: sub_44bc44
// 虚拟地址: 0x44bc44
// WARP GUID: 68e7eb9b-991a-522f-a37a-5bfec774fb33
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_44bc5c
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_44bc44(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x13b))
    if (arg2 != *(arg1 + 0x13b))
        *(arg1 + 0x13b) = arg2
        sub_44bc5c(arg1)
}
