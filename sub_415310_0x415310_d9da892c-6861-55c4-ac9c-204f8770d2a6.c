// ============================================================
// 函数名称: sub_415310
// 虚拟地址: 0x415310
// WARP GUID: d9da892c-6861-55c4-ac9c-204f8770d2a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4137a0, sub_4144e8, sub_415370, sub_415294, sub_413a50, sub_4154d8
// [被调用的父级函数]: sub_415370
// ============================================================

int32_tsub_415310(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = arg1 - 4
    
    while (sub_4137a0(*ebx_1) == 0)
        char eax_2
        void* edx_1
        eax_2, edx_1 = sub_413a50(*ebx_1)
        
        if (eax_2 - 2 u< 3)
            edx_1 = sub_415370(*ebx_1)
        
        int32_t var_c_1 = ebp[2]
        sub_415294(1, edx_1)
        
        while (sub_4137a0(*ebx_1) == 0)
            ebx_1, ebp = sub_4154d8(*ebx_1)
        
        *ebx_1
        sub_4144e8()
    
    *ebx_1
    return sub_4144e8()
}
