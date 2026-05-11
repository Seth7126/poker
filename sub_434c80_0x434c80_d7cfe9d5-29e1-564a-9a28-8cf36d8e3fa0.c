// ============================================================
// 函数名称: sub_434c80
// 虚拟地址: 0x434c80
// WARP GUID: d7cfe9d5-29e1-564a-9a28-8cf36d8e3fa0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43506c, sub_433a98, sub_408968, sub_4301c8
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_434c80(void* arg1, char arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    void* esi = *(edi + 0x14)
    
    if ((*(esi + 0x20) & 1) != 0 || *(edi + 0x64) == 0)
        return 
    
    arg1 = sub_4301c8(esi)
    
    if (arg1 s<= 0)
        return 
    
    (*(**(edi + 0x14) + 0x40))()
    (*(**(edi + 0x14) + 0x84))()
    int32_t var_1c
    
    if (arg2 == 0)
        arg1 = sub_408968(&var_1c, edi + 0x20, 0x10)
    
    if (arg2 == 0 && arg1.b != 0)
        return 
    
    __builtin_memcpy(edi + 0x20, &var_1c, 0x10)
    void* eax_4 = *(edi + 0x64)
    char edx = *(eax_4 + 0x10)
    int32_t var_18
    int32_t var_14
    int32_t var_10
    
    if (edx == 1)
        *(eax_4 + 0x20) = var_14 - var_1c
        *(edi + 0x68) = var_10 - var_18
    else if (edx == 2)
        *(eax_4 + 0x20) = var_10 - var_18
        *(edi + 0x68) = var_14 - var_1c
    
    if (sub_4301c8(*(edi + 0x14)) s<= 0)
        return 
    
    sub_43506c(edi, nullptr)
    
    if (*(edi + 0x6c) != 0)
        return 
    
    void* var_20_2 = edi
    void (__convention("regparm")* var_24_1)(void* arg1, void* arg2) = sub_4351cc
    sub_433a98(edi, nullptr)
}
