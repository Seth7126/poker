// ============================================================
// 函数名称: sub_43b964
// 虚拟地址: 0x43b964
// WARP GUID: e68e71e0-0d28-5451-9ced-5339a7e28370
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_439ab4, sub_43c480, sub_4466b4, sub_43be3c, sub_439fb4, sub_439b68, sub_43bc98, sub_43cc40, sub_43ba2c, sub_43baf0, sub_43bba0, sub_43b7f4, sub_43b9e4, sub_4395d0, sub_43b890, sub_43c950, sub_43ba84, sub_439630, sub_43d43c
// ============================================================

int32_t __convention("regparm")sub_43b964(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x50)
    void* edx = *(arg1 + 0x50)
    
    if (edx != 0)
        return *(edx + 8)
    
    return 0
}
