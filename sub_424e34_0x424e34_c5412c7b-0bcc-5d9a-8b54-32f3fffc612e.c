// ============================================================
// 函数名称: sub_424e34
// 虚拟地址: 0x424e34
// WARP GUID: c5412c7b-0bcc-5d9a-8b54-32f3fffc612e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_424e34(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x20e))
    if (arg2 != *(arg1 + 0x20e))
        *(arg1 + 0x20e) = arg2
        sub_42ee80(arg1)
}
