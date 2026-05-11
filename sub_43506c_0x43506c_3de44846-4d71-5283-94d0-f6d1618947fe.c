// ============================================================
// 函数名称: sub_43506c
// 虚拟地址: 0x43506c
// WARP GUID: 3de44846-4d71-5283-94d0-f6d1618947fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_435004
// [被调用的父级函数]: sub_43512c, sub_434c80
// ============================================================

int32_t __convention("regparm")sub_43506c(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg2 == 0)
        arg2 = *(*(arg1 + 0x64) + 8)
    
    int32_t __saved_ebp
    int32_t* var_c = &__saved_ebp
    sub_435004(arg2, arg2)
    return (*(**(arg1 + 0x14) + 0x74))(arg1)
}
