// ============================================================
// 函数名称: sub_462320
// 虚拟地址: 0x462320
// WARP GUID: c1029e69-0d95-51a6-8fc3-85fdafa8701e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_462170, sub_462080
// [被调用的父级函数]: sub_462540
// ============================================================

void* __convention("regparm")sub_462320(int32_t* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x141)
    void* esi = *(arg1 + 0x141)
    int32_t eax = *(esi + 0x14)
    
    if (eax u< 1)
        void* ecx_1
        int32_t edx_1
        ecx_1, edx_1 = sub_462080(arg1)
        sub_462170(arg1, edx_1, ecx_1)
        
        if (arg1[0x2a] == 0)
            (**(arg1 + 0x155))()
            (**(arg1 + 0x159))()
            (**(arg1 + 0x149))()
        
        (**(arg1 + 0x15d))()
        arg1[0x2c]
        (**(arg1 + 0x161))()
        *(esi + 0x1c)
        (**(arg1 + 0x14d))()
        (**(arg1 + 0x145))()
        
        if (arg1[0x2c] == 0)
            *(esi + 0xc) = 1
        else
            *(esi + 0xc) = 0
    else if (eax == 1)
        void* ecx_6
        int32_t edx_9
        ecx_6, edx_9 = sub_462080(arg1)
        sub_462170(arg1, edx_9, ecx_6)
        
        if (*(arg1 + 0x131) != 0 || *(arg1 + 0x139) == 0 || arg1[0x2b] != 0)
            (**(arg1 + 0x161))()
            (**(arg1 + 0x14d))()
            *(esi + 0xc) = 0
        else
            *(esi + 0x14) = 2
            *(esi + 0x18) += 1
        label_462437:
            
            if (arg1[0x2c] == 0)
                void* ecx_9
                int32_t edx_12
                ecx_9, edx_12 = sub_462080(arg1)
                sub_462170(arg1, edx_12, ecx_9)
            
            (**(arg1 + 0x161))()
            (**(arg1 + 0x14d))()
            
            if (*(esi + 0x20) == 0)
                (*(*(arg1 + 0x151) + 8))()
            
            (*(*(arg1 + 0x151) + 0xc))()
            *(esi + 0xc) = 0
    else
        if (eax == 2)
            goto label_462437
        
        *(*arg1 + 0x14) = 0x2f
        (**arg1)()
    
    int32_t eax_12
    eax_12.b = *(esi + 0x1c) - 1 == *(esi + 0x18)
    *(esi + 0x10) = eax_12 & 1
    void* result = arg1[2]
    
    if (result != 0)
        *(result + 0xc) = *(esi + 0x18)
        *(result + 0x10) = *(esi + 0x1c)
    
    return result
}
