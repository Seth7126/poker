// ============================================================
// 函数名称: sub_43c13c
// 虚拟地址: 0x43c13c
// WARP GUID: 0ec83852-5636-5e52-bf0f-da4375ab3670
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436d38, sub_403248, sub_436c1c, sub_436b6c, sub_436bc4, sub_436aac, sub_436c84, sub_410c00
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43c13c(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, &data_436278) == 0)
    if (sub_403248(arg2, &data_436278) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    void* const edx
    edx.b = *(arg1 + 0x2d)
    sub_436b6c(arg2, edx)
    sub_436bc4(arg2, arg1[0x12])
    sub_436c1c(arg2, arg1[0x13])
    sub_436c84(arg2, arg1[0xd])
    sub_436aac(arg2, arg1[9])
    int32_t edx_5
    edx_5.b = *(arg1 + 0x32)
    sub_436d38(arg2, edx_5)
    return (*(*arg2 + 0x34))(arg1[0x20], arg1[0x21])
}
