// ============================================================
// 函数名称: sub_423f50
// 虚拟地址: 0x423f50
// WARP GUID: 3ddbfd5b-4b3f-52b0-ab7c-65ac72ea9740
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_423f50(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x1fb))
    if (arg2 != *(arg1 + 0x1fb))
        *(arg1 + 0x1fb) = arg2
        sub_42ee80(arg1)
}
