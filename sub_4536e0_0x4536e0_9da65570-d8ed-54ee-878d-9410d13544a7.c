// ============================================================
// 函数名称: sub_4536e0
// 虚拟地址: 0x4536e0
// WARP GUID: 9da65570-d8ed-54ee-878d-9410d13544a7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410c00, sub_453ff8, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4536e0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, 0x417a7c) == 0)
    if (sub_403248(arg2, 0x417a7c) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    sub_453ff8(arg1)
    return (*(*arg2 + 8))()
}
