// ============================================================
// 函数名称: sub_44c204
// 虚拟地址: 0x44c204
// WARP GUID: 2496545d-381b-5a35-8bcb-55c97123d5cd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e3c8
// [被调用的父级函数]: sub_44bddc
// ============================================================

int32_t __convention("regparm")sub_44c204(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: arg1[0x7f] = arg2
    arg1[0x7f] = arg2
    sub_42e3c8()
    return (*(*arg1 + 0x74))()
}
