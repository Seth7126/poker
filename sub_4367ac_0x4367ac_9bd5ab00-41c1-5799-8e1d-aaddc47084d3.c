// ============================================================
// 函数名称: sub_4367ac
// 虚拟地址: 0x4367ac
// WARP GUID: 9bd5ab00-41c1-5799-8e1d-aaddc47084d3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_415df8
// [被调用的父级函数]: sub_4364f0
// ============================================================

int32_t __convention("regparm")sub_4367ac(void* arg1, void* arg2)
{
    // 第一条实际指令: sub_4103c8(*(arg1 + 0x24), arg2)
    sub_4103c8(*(arg1 + 0x24), arg2)
    *(arg2 + 0x4c) = arg1
    return sub_415df8(arg2, arg1)
}
