// ============================================================
// 函数名称: sub_4610b0
// 虚拟地址: 0x4610b0
// WARP GUID: bbeae0d5-54ab-55ad-a029-4aad686d9e56
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4602c8
// [被调用的父级函数]: sub_453acc
// ============================================================

int32_t __convention("regparm")sub_4610b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    
    if (eax == 0x65 || eax == 0x66)
        if (*(arg1 + 0xd5) u< arg1[7])
            *(*arg1 + 0x14) = 0x42
            (**arg1)()
        
        (*(*(arg1 + 0x141) + 8))()
    else if (arg1[4] != 0x67)
        void* eax_3 = *arg1
        *(eax_3 + 0x14) = 0x12
        *(eax_3 + 0x18) = arg1[4]
        (**arg1)()
    
    while (*(*(arg1 + 0x141) + 0x10) == 0)
        (**(arg1 + 0x141))()
        
        for (int32_t i = 0; i u< *(arg1 + 0xe5); i += 1)
            void* eax_6 = arg1[2]
            
            if (eax_6 != 0)
                *(eax_6 + 4) = i
                *(eax_6 + 8) = *(arg1 + 0xe5)
                (*arg1[2])()
            
            if ((*(*(arg1 + 0x14d) + 4))() == 0)
                *(*arg1 + 0x14) = 0x16
                (**arg1)()
        
        (*(*(arg1 + 0x141) + 8))()
    
    (*(*(arg1 + 0x151) + 0x10))()
    (*(arg1[5] + 0x10))()
    return sub_4602c8(arg1)
}
