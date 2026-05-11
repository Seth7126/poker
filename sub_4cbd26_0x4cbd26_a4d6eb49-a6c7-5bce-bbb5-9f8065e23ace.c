// ============================================================
// 函数名称: sub_4cbd26
// 虚拟地址: 0x4cbd26
// WARP GUID: a4d6eb49-a6c7-5bce-bbb5-9f8065e23ace
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cbd28
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4cbd26(char* arg1)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    return sub_4cbd28(arg1) __tailcall
}
