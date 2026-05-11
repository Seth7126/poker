// ============================================================
// 函数名称: sub_413c58
// 虚拟地址: 0x413c58
// WARP GUID: c230ece5-f23f-54c1-afea-54871640a8a7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_403248, sub_40b214, sub_415520, sub_413c38
// [被调用的父级函数]: sub_413da3, sub_413e43, sub_413ee8
// ============================================================

int32_t __convention("regparm")sub_413c58(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (sub_403248(sub_40b214(), 0x407d24) == 0)
    if (sub_403248(sub_40b214(), 0x407d24) == 0)
        return 0
    
    if (sub_413c38(arg2) != 0)
        sub_4030d0(*arg1)
    
    *arg1 = 0
    sub_415520(*(arg2 - 0xc), 0)
    *(sub_40b214() + 4)
    return (*(**(arg2 - 0xc) + 0x10))()
}
