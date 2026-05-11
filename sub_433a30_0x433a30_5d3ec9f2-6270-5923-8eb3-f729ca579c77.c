// ============================================================
// 函数名称: sub_433a30
// 虚拟地址: 0x433a30
// WARP GUID: 5d3ec9f2-6270-5923-8eb3-f729ca579c77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4339d8
// [被调用的父级函数]: sub_4349e0, sub_433b34, sub_433ab0, sub_4341d8, sub_435098, sub_43540c
// ============================================================

int32_t __convention("regparm")sub_433a30(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg2 != 0 && *(arg1 + 0x64) != 0)
    if (arg2 != 0 && *(arg1 + 0x64) != 0)
        int32_t __saved_ebp
        int32_t* var_10_1 = &__saved_ebp
        sub_4339d8(*(arg1 + 0x64), arg2)
    
    return 0
}
