// ============================================================
// 函数名称: sub_4a5d10
// 虚拟地址: 0x4a5d10
// WARP GUID: afce5795-caf6-5af1-9c49-74e15c4a89d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408b34, sub_404078, sub_4043ac, sub_408ad8, sub_408b84, sub_4a5f2c, sub_403e1c, sub_4a5c6c, sub_404280, sub_403010
// [被调用的父级函数]: sub_4a8988
// ============================================================

int32_t __convention("regparm")sub_4a5d10(void* arg1, int32_t* arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_3 = 6
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_3
        i_3 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = arg4
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    sub_4a5c6c(arg1)
    void* esp_9 = &esp_2[1]
    void* var_34
    int32_t var_10
    
    if ((*(*arg2 + 0x14))() s> 0)
        void* var_18
        *(esp_9 - 4) = &var_18
        (*(*arg2 + 0xc))()
        int32_t var_1c
        sub_404280(4, 1, var_1c)
        char* var_c
        sub_408b34(var_18, &var_c)
        
        if (sub_404078(var_c) == 4 && var_c[3] == 0x2d)
            sub_4043ac(&var_c, 3)
        
        sub_4a5f2c(arg1, var_c)
        int32_t var_20
        *(esp_9 - 4) = &var_20
        (*(*arg2 + 0xc))()
        int32_t var_24
        sub_404280(0x7fffffff, 5, var_24)
        (*(**(arg1 + 0x10) + 0x34))()
        
        if ((*(*arg2 + 0x14))() s> 1)
            int32_t eax_18 = (*(*arg2 + 0x14))()
            
            if (add_overflow(eax_18, 0xffffffff))
                sub_403010()
                noreturn
            
            if (eax_18 - 1 s> 0)
                int32_t i_2 = eax_18 - 1
                int32_t var_8_1 = 1
                int32_t i_1
                
                do
                    void* var_28
                    *(esp_9 - 4) = &var_28
                    (*(*arg2 + 0xc))()
                    int32_t var_2c
                    sub_404280(3, 1, var_2c)
                    
                    if (sub_408ad8(var_28, var_c) == 0)
                        (*(*arg2 + 0xc))()
                        sub_408b84(var_34, &var_10)
                    else
                        *(esp_9 - 4) = &var_10
                        (*(*arg2 + 0xc))()
                        int32_t var_30
                        sub_404280(0x7fffffff, 5, var_30)
                    
                    (*(**(arg1 + 0x10) + 0x34))()
                    var_8_1 += 1
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_4a5eb7
    sub_403e1c(&var_34, 8)
    return sub_403e1c(&var_10, 2)
}
