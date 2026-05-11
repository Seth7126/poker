// ============================================================
// 函数名称: sub_44c1e8
// 虚拟地址: 0x44c1e8
// WARP GUID: 18aa3c8a-4bc7-5c5c-abd4-4684c253a2de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e3c8
// [被调用的父级函数]: sub_44bddc
// ============================================================

int32_t __convention("regparm")sub_44c1e8(int32_t* arg1, char arg2)
{
    // 第一条实际指令: *(arg1 + 0x1fa) = arg2
    *(arg1 + 0x1fa) = arg2
    sub_42e3c8()
    return (*(*arg1 + 0x74))()
}
