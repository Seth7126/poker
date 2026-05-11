// ============================================================
// 函数名称: sub_43b974
// 虚拟地址: 0x43b974
// WARP GUID: a3658d0d-0363-5ea2-acc8-c1540363db12
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4391ac, sub_410524
// [被调用的父级函数]: sub_439ab4, sub_43cc40, sub_4395d0, sub_43c480, sub_43ba2c, sub_4466b4, sub_43be3c, sub_43c950, sub_43b7f4, sub_43ba84, sub_439fb4, sub_439630, sub_43d43c
// ============================================================

int32_t __convention("regparm")sub_43b974(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x50) != 0)
    if (*(arg1 + 0x50) != 0)
        return sub_410524(*(arg1 + 0x50), arg2)
    
    sub_4391ac(data_530390)
    noreturn
}
