// ============================================================
// 函数名称: sub_446808
// 虚拟地址: 0x446808
// WARP GUID: 4eb346ce-9686-55b9-ac5a-e8e8b7803993
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_44678c, sub_44675c
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_446808(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if ((arg1[8].b & 0x10) != 0 || arg1[0x5a].b == 0)
        return 
    
    int32_t __saved_ebp
    int32_t* var_10_1 = &__saved_ebp
    char eax_1
    void* edx
    eax_1, edx = sub_44675c(arg1[0x82], arg2)
    
    if (eax_1 != 0)
        arg2[3] = 1
        return 
    
    int32_t* var_10_2 = &__saved_ebp
    char eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_44675c(arg1, edx)
    
    if (eax_3 != 0)
        arg2[3] = 1
        return 
    
    int32_t* var_10_3 = &__saved_ebp
    
    if (sub_44678c(arg1, edx_1).b != 0)
        arg2[3] = 1
}
