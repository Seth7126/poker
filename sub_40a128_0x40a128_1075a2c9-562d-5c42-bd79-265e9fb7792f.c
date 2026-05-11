// ============================================================
// 函数名称: sub_40a128
// 虚拟地址: 0x40a128
// WARP GUID: 1075a2c9-562d-5c42-bd79-265e9fb7792f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409680, sub_40a0c4
// [被调用的父级函数]: sub_40a48c
// ============================================================

void* __convention("regparm")sub_40a128(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_30 = arg3
    int32_t var_30 = arg3
    int32_t var_34 = 4
    int32_t var_24 = arg2
    char var_20 = 0
    int32_t var_1c = arg1
    char var_18 = 0
    int32_t* var_38 = &var_24
    char var_14[0x10]
    void* eax_2
    void* ecx
    int32_t edi
    eax_2, ecx = sub_409680("%.*d@{@", 0x10, &var_14, arg2, edi, 1)
    return sub_40a0c4(&var_14, eax_2, ecx)
}
