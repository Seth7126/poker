// ============================================================
// 函数名称: sub_434984
// 虚拟地址: 0x434984
// WARP GUID: 1e7dec45-41b2-5d2a-9adb-8abde0e5fe94
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_434950
// [被调用的父级函数]: sub_4342ac, sub_433960
// ============================================================

void __convention("regparm")sub_434984(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 
    
    int32_t* eax = arg2[2]
    
    if (eax != 0)
        int32_t __saved_ebp
        int32_t* var_10_1 = &__saved_ebp
        sub_434950(eax, arg2)
    
    void* eax_1 = arg2[6]
    
    if (eax_1 == 0)
        void* eax_2 = arg2[5]
        
        if (eax_2 != 0)
            *(eax_2 + 8) = arg2[3]
    else
        *(eax_1 + 0xc) = arg2[3]
    
    void* eax_3 = arg2[3]
    
    if (eax_3 != 0)
        *(eax_3 + 0x18) = arg2[6]
    
    if (arg2 == *(arg1 + 0x64))
        *(arg1 + 0x64) = 0
    
    sub_4030d0(arg2)
}
