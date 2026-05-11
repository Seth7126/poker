// ============================================================
// 函数名称: sub_42b6d4
// 虚拟地址: 0x42b6d4
// WARP GUID: bfe0ab30-b8f1-5472-ae78-6a9a853f7fa9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42b6d4(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x48))
    if (arg2 != *(arg1 + 0x48))
        *(arg1 + 0x48) = arg2
        sub_42c754(arg1, 0)
}
