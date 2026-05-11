// ============================================================
// 函数名称: sub_43540c
// 虚拟地址: 0x43540c
// WARP GUID: acc0353d-3c3a-54d8-9e7c-c772e98a8a5b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_435390, sub_4341d8, sub_40fa94, sub_433a30
// [被调用的父级函数]: sub_43550c
// ============================================================

int32_t __convention("regparm")sub_43540c(int32_t* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return (*(*arg1 + 0x18))()
    
    sub_433a30(arg1, arg2)
    void var_14
    sub_40fa94(*(arg2 + 0x30), *(arg2 + 0x34), &var_14)
    void var_18
    sub_4341d8(arg1, &var_14, &var_18)
    void* const ebx_1 = nullptr
    sub_435390(arg2, ebx_1)
    return (*(*arg1 + 8))(ebx_1)
}
