// ============================================================
// 函数名称: sub_433a98
// 虚拟地址: 0x433a98
// WARP GUID: 6559365a-0acc-5b32-9eab-6ea53a24e74d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433a5c
// [被调用的父级函数]: sub_434a1c, sub_434c80, sub_4351a4, sub_43512c, sub_433d44
// ============================================================

int32_t __convention("regparm")sub_433a98(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        arg2 = *(arg1 + 0x64)
    
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    return sub_433a5c(arg2, arg2)
}
