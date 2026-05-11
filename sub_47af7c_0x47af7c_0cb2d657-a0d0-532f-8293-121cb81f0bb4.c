// ============================================================
// 函数名称: sub_47af7c
// 虚拟地址: 0x47af7c
// WARP GUID: 0cb2d657-a0d0-532f-8293-121cb81f0bb4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_404054, sub_404078, sub_4042c0, sub_469f7c, sub_47b09a, sub_404280, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_47af7c(char* arg1, void* arg2 @ ebp, void* arg3 @ esi)
{
    // 第一条实际指令: *arg1
    *arg1
    char temp0 = *arg1
    *arg1 += arg1.b
    
    if (add_overflow(temp0, arg1.b))
        sub_403010()
        noreturn
    
    int32_t edx_2 = *(arg2 - 4) - 1
    
    if (edx_2 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t* edi_1 = *(arg3 + 0xab0) + (arg1 << 3) + (edx_2 + 1) * 0x118 - 0xd6
    *edi_1 = 0x63734005
    edi_1[1].w = data_47b0c4.w
    void* const* esp_1 = &__return_addr
    int32_t ebx = 1
    
    while (sub_404078(*(arg2 + 8)) s> 0)
        *(esp_1 - 4) = *(arg2 - 4)
        *(esp_1 - 8) = ebx
        *(esp_1 - 0xc) = arg2 - 0x104
        *(esp_1 - 0x10) = arg2 - 0x208
        sub_404280(0xff, 1, *(arg2 + 8))
        esp_1 -= 0xc
        sub_404054(arg2 - 0x204, *(arg2 - 0x208), 0xff)
        int32_t edi
        arg2 = sub_469f7c(arg3, arg2 - 0x204, edi)
        int32_t temp2_1 = ebx
        ebx += 1
        
        if (add_overflow(temp2_1, 1))
            sub_403010()
            noreturn
        
        sub_4042c0(arg2 + 8, 1, 0xff)
    
    esp_1[2]
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_47b0b5
    return sub_47b09a(arg2) __tailcall
}
