// ============================================================
// 函数名称: sub_40ac00
// 虚拟地址: 0x40ac00
// WARP GUID: bbdd4392-4f38-5cb6-a10d-c60394657c38
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ee0, sub_40a48c
// [被调用的父级函数]: sub_40ac5c
// ============================================================

char** __convention("regparm")sub_40ac00(char** arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_10c = 0
    int32_t var_10c = 0
    int32_t __saved_ebp
    
    if (arg2 == 0)
        int32_t* var_118_1 = &__saved_ebp
        sub_40a48c(0x40ac58, arg2)
    else
        int32_t* var_118 = &__saved_ebp
        sub_40a48c(arg2, arg2)
    void var_104
    sub_403ee0(arg1, &var_104, 0)
    return arg1
}
