// ============================================================
// 函数名称: sub_41fda0
// 虚拟地址: 0x41fda0
// WARP GUID: b721b588-2292-5fd5-8d13-24767ba71d80
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41fb74, sub_41842c
// [被调用的父级函数]: sub_4337f8, sub_43ab7c, sub_43a2fc, sub_429100
// ============================================================

int32_t __convention("regparm")sub_41fda0(uint32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: if (data_5316b0 == 0)
    if (data_5316b0 == 0)
        return 0
    
    uint32_t eax_1 = sub_41842c(arg2)
    int32_t eax_3 = sub_41842c(arg1)
    return *(sub_41fb74(data_5316b0, eax_3, eax_1) + 4)
}
