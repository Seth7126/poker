// ============================================================
// 函数名称: sub_4b6ae4
// 虚拟地址: 0x4b6ae4
// WARP GUID: 05029e63-b52a-5930-bcc6-f717b749f56e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b5c08
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b6ae4(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x20) != 0)
    if (*(arg1 + 0x20) != 0)
        int32_t* eax = *(arg1 + 0x20)
        sub_4b5c08((*(*eax + 0x24))(eax, arg2))
}
